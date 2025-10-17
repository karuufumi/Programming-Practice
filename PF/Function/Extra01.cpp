/*
ask: Write a function string deepDelete(string s, string s1) that continuously removes 
the substring s1 from s until s1 no longer exists anywhere in the string.
Example: If s = "abcorecorecd" and s1 = "core", deleting the first "core" leaves "abcorecd", 
which still contains "core". The final output should be "abcd".
Difficulty step-up: Deleting a substring might cause the two halves of 
the remaining string to merge and form a new occurrence of the target word.
*/
#include <iostream>
#include <string>
using namespace std;

string deepDelete(string s, string s1){
    
    size_t pos = s.find(s1);
    while(pos != string::npos){
        s.erase(pos, s1.size());
        pos = s.find(s1);
    }
    return s;

}
int main(){
    string s = "abccoreore";
    string s1= "core";
    cout << deepDelete(s,s1);

    return 0;
}