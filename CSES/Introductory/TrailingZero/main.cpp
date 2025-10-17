
#include <bits/stdc++.h>
using namespace std;


int trailingZeros(int n ){


    if (n < 0)
            return -1;

        // Initialize result
        int count = 0;

        // Keep dividing n by powers of
        // 5 and update count
        for (int i = 5; n / i >= 1; i *= 5)
            count += n / i;

        return count;
}
int main(){


    cout << trailingZeros(20);
    return 0;
}
