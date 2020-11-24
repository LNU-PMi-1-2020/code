#include <iostream>
#include <string>

using namespace std;

// build all possible palindromes

int main() {
    string s;
    getline(cin, s);

    string set;
    for (char c : s) {
        if (set.find(c) == -1) {
            set += c;
        }
    }

    int oddCount = 0;
    for (char u : set) {
        int count = 0;
        for (char c : s) {
            if (c == u) {
                count++;
            }
        }
        oddCount += count % 2;
    }

    if (oddCount > 1) {
        cout << "Can't build palindrome" << endl;
    } else {
        cout << "Can build palindrome" << endl;
    }
}