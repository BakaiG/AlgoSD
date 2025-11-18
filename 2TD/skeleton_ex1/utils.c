// vim: ai:sw=2:ts=2
#include "utils.h"

bool is_sorted_nondecreasing(int *arr, int n)
{
	for (int i=1;i<n+1;i++){
		if (arr[i]<arr[i+1]) {return false;}
	return true;
	}
}

int min_int(int a, int b)
{
	// return smallest value between a and b
	if (a<b) {return a;}
	else {return b;}
}
