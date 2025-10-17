#include<bits/stdc++.h>
using namespace std;

vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            for (int multiple = p * p;
                 multiple <= limit;
                 multiple += p) {
                isPrime[multiple] = false;
            }
        }
    }

    vector<int> primes;

    for (int number = 1000; number <= limit; number++) {
        if (isPrime[number]) {
            primes.push_back(number);
        }
    }

    return primes;
}

string digitSignature(int number) {
    string digits = to_string(number);
    sort(digits.begin(), digits.end());
    return digits;
}

int main() {
    vector<int> primes = generatePrimes(9999);

    unordered_map<string, vector<int>> groups;

    for (int prime : primes) {
        groups[digitSignature(prime)].push_back(prime);
    }

    for (auto &[signature, group] : groups) {
        if (group.size() < 3) {
            continue;
        }

        sort(group.begin(), group.end());

        unordered_set<int> numbers(group.begin(), group.end());

        for (int i = 0; i < group.size(); i++) {
            for (int j = i + 1; j < group.size(); j++) {
                int first = group[i];
                int second = group[j];

                int difference = second - first;
                int third = second + difference;

                if (numbers.contains(third)) {
                    if (first == 1487 &&
                        second == 4817 &&
                        third == 8147) {
                        continue;
                    }

                    cout << first << second << third << '\n';
                    return 0;
                }
            }
        }
    }

    return 0;
}
