// vim: ai:sw=2:ts=2
#include <math.h>
#include <stdio.h>
#include "search.h"
#include "utils.h"

int linear_search(int *arr, int n, int target)
{
	// linear search, return index of target
	// return -1 if not found
	for (int i = 0; i<n ; i++)
	{
		if (arr[i] == target) {return i;}
	}
	return -1;
}

int jump_search(int *arr, int n, int target)
{
	// jump search on sorted array, return index
	// of target, return -1 if not found
	/* un essai perso parce que j'avais pas vu le pseudocode
	int jump = round(sqrt(n));
	for (int i = 0;i<jump;i++)
	{
		if (arr[i*jump+(jump-1)]<target)
		{
			for (int j = i*jump;j<i*(jump+1),j++)
			{
				if (arr[j]==target){return j;}
			}
			return -1;
	}
	*/
	int jump_size = sqrt(n);
	int m = jump_size;
	int prev = 0;
	while (arr[min_int(m,n) - 1] < target)
	{
		prev = m;
		m += jump_size;
		if (prev >= n) { return -1;}
	}
	for (int i = prev ; i < min_int(m, n) ; i++)
	{
		if (arr[i]==target) {return i;}
	}
	return -1;
}

int binary_search(int *arr, int n, int target)
{
	// binary search on sorted array, return index
	// of target, return -1 if not found
	int low = 0;
	int high = n-1;
	while (low <= high)
	{
		int mid = (low + high) /2;
		if (arr[mid] == target) {return mid;}
		if (arr[mid] < target) {low  = mid + 1;}
		else {high = mid - 1;}
	}
	return -1;
}
