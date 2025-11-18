#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
//#include <stdio.h>

int nb_prime_naive(int n)
{
	int c = 0;
	bool prime;
	int debut = 2;
	for (int i=debut; i<=n; i++)
	{
		prime = true;
		for (int j=debut; j<i; j++)
		{
			if (i % j == 0)
				prime=false;
		}
		if (prime == true)
			c+=1;
	}
	return c;
}

int nb_prime_siev(int n)
{
	int c = 0;
	int debut = 2;
	int fin = ceil(sqrt(n));
	bool* prime = malloc((n+1)*sizeof(bool)); // point bloquant à n > 1.10⁹
	prime[0] = false;
	for (int i=1; i<n; i++)
	{
		prime[i]=true;
	}
	for (int i=debut; i<=fin; i++)
	{
		if (prime[i] == true)
		{
			//printf("Jusque là, %i est un nombre premier\n",i);
			for (int j=2*i; j<=n; j+=i) //2*i pour épargner la 1ère occurence, 5 est premier par ex
			{
				prime[j]=false;
				//printf("On enlève %i\n",j);
			}
		}
	}
	for (int i=debut; i<=n; i++)
	{
		if (prime[i]==true)
			c+=1;
	}
	return c;
}
