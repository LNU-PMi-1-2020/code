#include "reader.h"

int readInt(const string &text) {
    string strNumber;
    bool x = true;
    while (true) {
        cout << text << endl;
        cin >> strNumber;
        x = true;
        for (char c : strNumber) {
            if (!isdigit(c)) {
                cout << "Incorrect format(int). Try again..." << endl;
                x = false;
                break;
            }
        }
        if (x) {
            return stoi(strNumber);
        }
    }
}

int *readIntArray(const string &text, size_t &size) {
    string s;
    cout << text << endl;
    cin.ignore();
    getline(cin, s);
    cout << "OK " << s << endl;

    size = 0;
    string t;
    for (int i = 0; i < s.length(); i++) {
        if (i != s.length() - 1 && s[i] == ' ' && s[i + 1] == ' ') {
            continue;
        }
        t += s[i];
    }
    if (t[0] == ' ') {
        t = t.substr(1, t.length() - 1);
    }
    if (t[t.length() - 1] == ' ') {
        t = t.substr(0, t.length() - 1);
    }

    for (char i : t) {
        if (i == ' ') {
            size++;
        }
    }
    size++;

    auto *a = new int[size];
    string current;
    int i = 0, j = 0;
    while (i < size) {
        if (t[j] != ' ') {
            current += t[j];
        }
        if (t[j] == ' ' || (i == size - 1 && j == t.length() - 1)) {
            a[i] = stoi(current);
            current = "";
            i++;
        }
        j++;
    }
    return a;
}

double readDouble(const string &text) {
    string strNumber;
    bool x = true;
    while (true) {
        cout << text << endl;
        cin >> strNumber;
        x = true;
        for (char c : strNumber) {
            if (!(isdigit(c) || c == '.')) {
                cout << "Incorrect format(double). Try again..." << endl;
                x = false;
                break;
            }
        }
        if (x) {
            return stod(strNumber);;
        }
    }
}

double *readDoubleArray(const string &text, size_t &size) {
    string s;
    cout << text << endl;
    cin.ignore();
    getline(cin, s);

    size = 0;
    string t;
    for (int i = 0; i < s.length(); i++) {
        if (i != s.length() - 1 && s[i] == ' ' && s[i + 1] == ' ') {
            continue;
        }
        t += s[i];
    }
    if (t[0] == ' ') {
        t = t.substr(1, t.length() - 1);
    }
    if (t[t.length() - 1] == ' ') {
        t = t.substr(0, t.length() - 1);
    }

    for (char i : t) {
        if (i == ' ') {
            size++;
        }
    }
    size++;

    auto *a = new double[size];
    string current;
    int i = 0, j = 0;
    while (i < size) {
        if (t[j] != ' ') {
            current += t[j];
        }
        if (t[j] == ' ' || (i == size - 1 && j == t.length() - 1)) {
            a[i] = stod(current);
            current = "";
            i++;
        }
        j++;
    }
    return a;
}

string *readStringArray(const string &text, size_t &size) {
    cout << text << endl;

    string all, s;
    size = 0;
    cin.ignore();
    do {
        getline(cin, s);
        all += (size == 0 ? "" : "\n") + s;
        size++;
    } while (!s.empty());
    size--;

    int i = 0;
    auto *res = new string[size];
    s = "";
    for (char j : all) {
        if (j == '\n' && !s.empty()) {
            res[i] = s;
            s = "";
            i++;
        } else {
            s += j;
        }
    }

    return res;
}
