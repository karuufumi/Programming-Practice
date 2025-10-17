#include <iostream>
#include <string>
#include <fstream>
using namespace std;



void threeChars(string fileName)   {

    ifstream file(fileName);
    string curr;
    file >> curr;
    bool flag= true;
    while( curr != "***"){
       // file >> curr;
        for(int i =0; i < curr.size()-1; i++){
            if(curr[i] > curr[i+1])
{               // cout << "false\n";

        flag = false;
                break;}
        }
        if (flag){
            cout << "true\n";
            flag = false;
        }
        else{
            
        }

        cout << "true\n";
        file >>curr;
    }
    // TODO
}
 int main(){

    string fileName = "file.txt";
    threeChars(fileName);
 }