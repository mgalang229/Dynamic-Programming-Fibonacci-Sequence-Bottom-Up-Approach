#include <bits/stdc++.h>

using namespace std;

class FibonacciClass {
	public:
		int Fibonacci(int n) {
			int f[n + 2];
			f[0] = 0;
			f[1] = 1;
			for (int i = 2; i <= n; i++) {
				f[i] = f[i - 1] + f[i - 2];
			}
			return f[n];
		}
};

int main() {
	FibonacciClass fib;
	cout << fib.Fibonacci(9) << '\n';
	return 0;
}
