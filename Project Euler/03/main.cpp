#include <iostream>
using namespace std;

long long maximum = 600851475143;

int main(){


    long long i = 0;
    long long largest = i;
    while ( i*i < maximum)
    {
        largest = i;
        i++;
    }
    cout << largest;
    return 0;
}
