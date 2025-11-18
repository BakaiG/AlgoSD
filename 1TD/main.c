// vim: ai:ts=2:sw=2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fibonacci/fib.h"
#include "prime/prime.h"

int main()
{
	int n1;
	printf("Info : CLOCKS_PER_SEC vaut :  %li\n",CLOCKS_PER_SEC);
	printf("Choisissez le rang de la suite de fibonacci à calculer : n1=");
	(void)! scanf("%i",&n1); // (void)! pour que gcc ne râle pas que la valeur de scanf lui-même n'est pas utilisée
	clock_t t0 = clock();
	printf("Fibo naïf renvoie %llu\n",fibo(n1));
	printf("%ld secondes d'exécution\n", (clock() - t0)/CLOCKS_PER_SEC);
	int arr[n1+1];
	for (int i=0; i<=n1; i++){arr[i]=-1;}
	clock_t t1 = clock();
	printf("Fibo_DP renvoie %llu\n",Fib_DP(n1,arr));
	printf("%ld secondes d'exécution\n", (clock() - t1)/CLOCKS_PER_SEC);

	printf("Maintenant la partie nombre premier\n");
	printf("Choisissez le nombre jusqu'auquel vous voulez savoir combien il y a de nombres premiers (n2 compris)\n");
	printf("n2=");
	int n2;
	(void)! scanf("%i",&n2);
	clock_t t_p_naive = clock();
	printf("nb_prime_naive(%i) renvoie %i\n",n2,nb_prime_naive(n2));
	printf("%ld secondes d'exécution\n", (clock() - t_p_naive)/CLOCKS_PER_SEC);
	clock_t t_p_siev = clock();
	printf("nb_prime_siev(%i) renvoie %i\n",n2,nb_prime_siev(n2));
	printf("%ld secondes d'exécution\n", (clock() - t_p_siev)/CLOCKS_PER_SEC);
}
