#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// TrieNode definition
class TrieNode {
public:
    unordered_map<char, TrieNode*> children; // Map to store child nodes
    bool isEndOfWord; // Flag to mark the end of a word

    TrieNode() : isEndOfWord(false) {}
};

// Trie class
class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode(); // Initialize the root node
    }

    // Insert a word into the Trie
    void insert(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!node->children[ch]) {
                node->children[ch] = new TrieNode();
            }
            node = node->children[ch];
        }
        node->isEndOfWord = true; // Mark the end of the word
    }

    // Search for a word in the Trie
    bool search(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!node->children[ch]) {
                return false; // Word not found
            }
            node = node->children[ch];
        }
        return node->isEndOfWord; // Check if it's a complete word
    }

    // Check if there is any word with the given prefix
    bool startsWith(const string& prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            if (!node->children[ch]) {
                return false; // Prefix not found
            }
            node = node->children[ch];
        }
        return true;
    }

    // Collect all words in the Trie with the given prefix
    void collectWords(TrieNode* node, string prefix, vector<string>& results) {
        if (!node) return;

        if (node->isEndOfWord) {
            results.push_back(prefix);
        }

        for (auto& pair : node->children) {
        char ch = pair.first;
        TrieNode* childNode = pair.second;
        collectWords(childNode, prefix + ch, results);
        }
    }

    // Get all words starting with a prefix
    vector<string> getWordsWithPrefix(const string& prefix) {
        TrieNode* node = root;
        vector<string> results;

        // Navigate to the end of the prefix
        for (char ch : prefix) {
            if (!node->children[ch]) {
                return results; // No words with the given prefix
            }
            node = node->children[ch];
        }

        // Collect all words from this node
        collectWords(node, prefix, results);
        return results;
    }
};

// Main function to demonstrate Trie usage
int main() {
    Trie trie;

    // Insert words
    trie.insert("burger");
    trie.insert("burgerking");
    trie.insert("burden");
    trie.insert("bus");
    trie.insert("bustle");

    // Search words
    cout << "Search for 'burger': " << (trie.search("burger") ? "Found" : "Not Found") << endl;
    cout << "Search for 'bus': " << (trie.search("bus") ? "Found" : "Not Found") << endl;
    cout << "Search for 'bun': " << (trie.search("bun") ? "Found" : "Not Found") << endl;

    // Check prefixes
    cout << "Prefix 'bur': " << (trie.startsWith("bur") ? "Exists" : "Doesn't Exist") << endl;
    cout << "Prefix 'buz': " << (trie.startsWith("buz") ? "Exists" : "Doesn't Exist") << endl;

    // Get words with prefix
    vector<string> words = trie.getWordsWithPrefix("bur");
    cout << "Words with prefix 'bur': ";
    for (const string& word : words) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
