#include <bits/stdc++.h>
using namespace std;


class SegmentTree {
public:
    SegmentTree(int n) : n(n), tree(4 * n) {}

    void build(int* arr) {
        buildTree(arr, 0, 0, n - 1);
    }

    void update(int idx, int val) {
        updateTree(0, 0, n - 1, idx, val);
    }

    int query(int l, int r) {
        return queryTree(0, 0, n - 1, l, r);
    }

private:
    int n;
    vector<int> tree;

    void buildTree(int* arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            buildTree(arr, 2 * node + 1, start, mid);
            buildTree(arr, 2 * node + 2, mid + 1, end);
            tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
        }
    }

    void updateTree(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] += val;
        } else {
            int mid = (start + end) / 2;
            if (start <= idx && idx <= mid) {
                updateTree(2 * node + 1, start, mid, idx, val);
            } else {
                updateTree(2 * node + 2, mid + 1, end, idx, val);
            }
            tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
        }
    }

    int queryTree(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            return 0;
        }
        if (l <= start && end <= r) {
            return tree[node];
        }
        int mid = (start + end) / 2;
        int p1 = queryTree(2 * node + 1, start, mid, l, r);
        int p2 = queryTree(2 * node + 2, mid + 1, end, l, r);
        return p1 + p2;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    SegmentTree st(n);
    st.build(arr);
    cout << st.query(0, 4) << endl;

    st.update(3, 6);
    cout << st.query(0, 4) << endl;

    return 0;
}
