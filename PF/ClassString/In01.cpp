#include <iostream>
#include <string>

using namespace std;

/*

Hiện thực hàm deleteWord(string s, string s1) với chức năng in ra chuỗi s sau khi xóa
tất cả các chuỗi s1 có trong s.
*/



void deleteWord(string s, string s1) {
    int pos = s.find(s1);

    while (pos != -1) {
        s.replace(pos, s1.length(), "");
        pos = s.find(s1);
    }

    cout << s;
}

int main(){


    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai ";
    deleteWord(s, s1);
    return 0;
}