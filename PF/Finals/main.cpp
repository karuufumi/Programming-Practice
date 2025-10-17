#include <iostream>
#include <cstring>
#include <string>
namespace lmao{
    int cout = 112;
}
using namespace std;


int i = 0;

    int foo() {
    int &p = i;
   // A ob;
    return p;
    }

void f(int n) {
    if (n <= 0) {
        cout << "B ";
        return;
    }

    cout << n << " ";
    f(n - 1);
    cout << n << " ";
    f(n - 2);
    cout << n << " ";
}

void g(int n) {

    if (n <= 0) {

        cout << "0 ";

        return;

    }

    if (n % 2 == 0) {

        cout << n << " ";

        g(n - 1);

        g(n - 2);

    } else {

        g(n - 1);

        cout << n << " ";

        g(n - 2);

    }

}

int h(int n) {
    if (n <= 1) {
        cout << n << " ";
        return n + 1;
    }

    cout << "[" << n << " ";
    int a = h(n - 1);
    int b = h(n - 2);
    cout << n << "] ";

    return a + b + n;
}



class human{
    public:
    void makeSound() {
        cout << "speak";
    }

};

class singer : public human {

    public:
    void makeSound(){
        cout << "sing";
    }
};

void p(int n, int k) {
    if (n <= 0 || k <= 0) {
        cout << "(" << n << "," << k << ") ";
        return;
    }

    cout << n << k << " ";

    if ((n + k) % 2 == 0) {
        p(n - 1, k);
        p(n, k - 2);
    } else {
        p(n, k - 1);
        p(n - 2, k);
    }

    cout << "<" << n << k << "> ";
}

void loopTest(int n){
    for(int i =0; i < n; ++i)
    cout << i;
}

const char* names[4] = {"Alice", "Bob", "Charlie", "David"};
class NhanVat {

public:

    NhanVat(string ten) {

        soLuong++;

        cout << "Creating: " << ten << endl;

    }

    ~NhanVat() {

        soLuong--;

        cout << "Destroying object" << endl;

    }

    static int soThucThe() {

        return soLuong;

    }

private:

    static int soLuong;

};

// Definition of the static member

//int NhanVat::soLuong ;


class A

{

public:

    A() { cout << "B"; }

    A(const A& a) { cout << "H"; }

    A& operator=(A& a) {

        cout << "T";

        return *this;

    }

};

class CPhanSo

{

private:

    int TuSo, MauSo;

public:

    CPhanSo(int tu = 0, int mau = 1)

        : TuSo(tu), MauSo(mau)

    {

    }

    friend ostream& operator<<(ostream& out, CPhanSo x)

    {

        out << x.TuSo << "/" << x.TuSo << endl;

        return out;

    }

};

int main(int argc, char** argv){
   

   // singer* damVinhHung = new singer();
    //damVinhHung->makeSound();
  // cout <<  foo();
 // f(3);
   // g(4);
  // cout << h(4);
  //p(3,3);
//  loopTest(12);
    
   // char a[] = "1 2 3 4 5 \0";

  //  string s("abcdef", 3);
   // cout << s;

//   string s = "abcdef";
///string t(s, 2, 3);
///cout << t;
//    string s = "abcdef\0 12";
//string t(s.begin() + 1, s.end() );
//cout << t;
  //  string s = "ABCDE";
//cout << s[2] << " " << s.at(2);

  //  string s = "abc";
//cout << s[222];

  
//string s = "hello";
//s.clear();
//cout << s.size() << " " << s.empty();

  ///  int arr[][3] = {{1,2,3},{1,2,3},{1,2,3}};

    
//  int arr[][4] = {1,2,3,4,5,6,7,8,9,10,11};

 //   for(int i =0; i < 4; i ++){
  //      cout << arr[2][i];
   // }
   //int i=0;
    //int a=5;
   // i=++a + ++a + a++;
  //  cout << i<<endl;
   // cout << a;

    CPhanSo x(2, 3);

    cout<< x;
    return 0;
}