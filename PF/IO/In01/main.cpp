#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void uppercase(string output)   {

    ofstream file(output);
    string ip;
    cin >> ip;
    for(char c: ip){
        if( c >='a' && c <= 'z'){
            c -= 32;
        }
        file << c;
    }
}

int main(){

    string fileName= "file.txt";

    uppercase(fileName);
    return 0;
}