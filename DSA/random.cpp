// C++ program to calculate
// Fibonacci no. modulo m using
// Pisano Period
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

// Calculate and return Pisano Period
// The length of a Pisano Period for
// a given m ranges from 3 to m * m
long pisano(long m)
{
	long prev = 0;
	long curr = 1;
	long res = 0;

	for(int i = 0; i < m * m; i++)
	{
		long temp = 0;
		temp = curr;
		curr = (prev + curr) % m;
		prev = temp;

		if (prev == 0 && curr == 1)
			res = i + 1;
	}
	return res;
}

// Calculate Fn mod m
long fibonacciModulo(long n, long m)
{
	
	// Getting the period
	long pisanoPeriod = pisano(m);

	n = n % pisanoPeriod;

	long prev = 0;
	long curr = 1;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;

	for(int i = 0; i < n - 1; i++)
	{
		long temp = 0;
		temp = curr;
		curr = (prev + curr) % m;
		prev = temp;
	}
	return curr % m;
}

// Driver Code
int main()
{
	#ifdef SANDEEP
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif
    auto start = high_resolution_clock::now();
	long n = 1548276540;
	long m = 2014;

	cout << (fibonacciModulo(n, m))<<endl;
	

	auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << "hi"<< endl;
    return 0;
}

// This code is contributed by subhammahato348
