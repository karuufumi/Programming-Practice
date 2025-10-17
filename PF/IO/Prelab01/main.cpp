#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void calSum(string fileName)   {
    // TODO

    ifstream file(fileName);
    int x;
    int sum =0;
    while(file >>x){
        sum +=x;
    }
    cout << sum;
    
}
int main(){

    string fileName = "file.txt";
    calSum(fileName);
}