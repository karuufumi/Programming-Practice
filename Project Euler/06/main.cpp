#include <bits/stdc++.h>


int main() {
    long long n = 100;

    long long sum = n * (n + 1) / 2;
    long long squareOfSum = sum * sum;

    long long sumOfSquares = n * (n + 1) * (2 * n + 1) / 6;

    std::cout << squareOfSum - sumOfSquares;

    return 0;
}
