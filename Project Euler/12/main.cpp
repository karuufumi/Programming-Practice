#include <bits/stdc++.h>
using namespace std;

long long divisorCount(long long n) {
    long long result = 1;

    for (long long p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            int exponent = 0;

            while (n % p == 0) {
                n /= p;
                exponent++;
            }

            result *= (exponent + 1);
        }
    }

    // If n > 1, then n itself is prime.
    if (n > 1) {
        result *= 2;
    }

    return result;
}

int main() {
    long long n = 1;

    while (true) {
        long long divisors;

        if (n % 2 == 0) {
            divisors =
                divisorCount(n / 2) *
                divisorCount(n + 1);
        } else {
            divisors =
                divisorCount(n) *
                divisorCount((n + 1) / 2);
        }

        if (divisors > 500) {
            long long triangle = n * (n + 1) / 2;

            cout << triangle << '\n';
            break;
        }

        n++;
    }

    return 0;
}
