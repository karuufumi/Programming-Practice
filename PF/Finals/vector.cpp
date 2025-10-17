
#include <iostream>
#include <vector>
using namespace std;

void f1(){

vector<int> arr;
int n;
while(cin >> n){
    arr.push_back(n);
}
vector<int>::iterator it ;

for(it = arr.begin(); it != arr.end(); it++)
    cout << *it;;
}

int f2(){
    vector<int> arr;
    int n ;
    while(cin >> n){
    arr.push_back(n);
}

    vector<int>::iterator it = arr.begin();
    long long sum =0;
    for(; it != arr.end(); it++){
        sum += *it;
    }
    return sum;

}

int main(){


   cout<< f2();

    return 0;
}