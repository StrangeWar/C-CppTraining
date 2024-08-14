#include <iostream>
using namespace std;

template <typename T1, typename T2>

auto swap(T1 a, T2 b){

    auto temp = a;
    a = b;
    b = temp;
    return a, b;
}

int main() {
    int a = 5;
    int b = 10;
    cout << "Before Swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a, b);
    cout << "After Swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    

    return 0;
}