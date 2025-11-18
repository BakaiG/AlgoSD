#include <stdio.h>
#include <stdlib.h>

void main(){
	int* a = malloc(sizeof(int));
	//scanf("%i",a);
	*a = 69;
	printf("*a vaut %i\n", *a); // la vraie valeur
	printf("a vaut %ls\n", a); //ASCII genre si *a vaut 65 a vaut A
	printf("&a vaut %p\n", &a); // adresse mém
	int* b = malloc(sizeof(int));
	*b = 4;
	int* c = malloc(sizeof(int));
	*c = 6;
	int buf = *b;
	*b = *c;
	*c = buf;
	printf("*b vaut %i\n",*b);
	printf("*c vaut %i\n",*c);
}
