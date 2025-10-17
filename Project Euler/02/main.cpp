#include <iostream>
using namespace std;

long long sum(int n);
long long fib(int n);

const long long N = 4000000;

int main() {

  int i = 2;

	cout << sum(i);

	return 0;
}

long long sum(int n) {

	long long sum = 0; // suma de los terminos pares

	while (fib(n) < N) {

		if (fib(n)%2==0) {

			sum += fib(n);
		}

		n++;
	}

	return sum;
}

long long fib(int n) {

	long long a = 0; // anterior
	long long b = 1; // posterior
	long long c = 0; // suma de a+b
	long long i = 1; // contador

	while (i <= n) {

		c = a + b;
		a = b;
		b = c;

		i++;
	}

	return c;
}
