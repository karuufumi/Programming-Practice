#include <bits/stdc++.h>
using namespace std;

/// Find the LCM for each of the nmber in the array
///
vector<int> numberT = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int main() {

    long long k=1;
    for(auto n: numberT){
        k = lcm(n, k);
    }
    cout << k;

    return 0;
}
