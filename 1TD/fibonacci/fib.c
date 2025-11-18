#include <stdio.h>
#include "fib.h"

long long unsigned int fibo(int n)
{
	if (n<=1) 
		return n;
	else
		return fibo(n-1) + fibo(n-2);
}

long long unsigned int Fib_DP(int n, int DPFib[])
{
	if (n<=1)
		return n;
	if (DPFib[n] != -1)
		return DPFib[n];
	DPFib[n] = Fib_DP(n-1,DPFib) + Fib_DP(n-2,DPFib);
	return DPFib[n];
}

