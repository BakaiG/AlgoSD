// vim: ai:sw=2:ts=2
#include "utils.h"

void swap_int(int *a, int *b)
{
	// swap two elements
	buf = *a;
	*a = *b;
	*b = buf;
	
}

bool is_sorted_nondecreasing(int *arr, int n)
{
	// check if array is sorted, if yes return true
	// if not return false
	for(int i=1; i<n; i++){
		if (arr[i-1]<arr[i])
			return false;
	}
	return true;

}

void copy_array(int *src, int *dst, int n)
{
	// copy array elements src into dst
	for (int i=0; i<n; i++){
		dst[i] = src[i];
	}
}
