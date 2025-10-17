/*
Implement the function void replaceString(string s, string s1, string s2) 
to print the string s after replacing the last substring s1 with the s2 contained in s.
If the string s1 is not found, keep the string s and print it.
Hint: Refer to the string::replace function in the <string> library.
*/
#include <string>
using namespace std;
#include <iostream>

void replaceString(string s, string s1, string s2){
    size_t pos = s.rfind(s1);

    if(pos == string::npos)
    {
        cout << s;
        return;
    }
    s.replace(pos, s1.size(), s2);
    cout << s;
}


int main(){

    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai";
    string s2 = "ong";
    replaceString(s, s1, s2);
    return 0;
}