#include <iostream>
using namespace std;

class Hoa {
public:
    virtual void Mau() {
        cout << "Mau ???" << endl;
    }
};

class Cuc : public Hoa {
public:
    void Mau() {
        cout << "Mau: vang" << endl;
    }
};

class Hong : public Hoa {
public:
    void Mau() {
        cout << "Mau: do" << endl;
    }
};

class Hue : public Hoa {
public:
    void Mau() {
        cout << "Mau: trang" << endl;
    };
};


int main() {

  
    string s = "water";
  //  s.append("XYZ",-1);
    s.replace(1,2,"abc");
   // cout << s;
  //  s.replace(1,3,"xyz");
    //cout << s;
  //  string str = "a"  "bc";
    //cout << str;
    string str = "";
    str.pop_back();
//    cout << str;

    string s1 = "abc";
  //  cout << s1.substr(2,1);
    string app = "aaple";
    string ban = "aanana";
    cout << (app < ban);

    string s3("abc");

//    cout << s3.at(4);
    string s4 = "abc";
    s4[1] = 'X';
    cout << s4;


}