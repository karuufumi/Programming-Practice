#include <iostream>
#include <string>
using namespace std;

string alternateReplace(string s, string s1, string s2) {
    bool flag = true; // true = replace this occurrence
    size_t pos = s.find(s1);

    while (pos != string::npos) {
        if (flag) {
            s.replace(pos, s1.length(), s2);

            // continue searching after the replacement
            pos = s.find(s1, pos + s2.length());
        } else {
            // skip this occurrence
            pos = s.find(s1, pos + s1.length());
        }

        flag = !flag;
    }

    return s;
}