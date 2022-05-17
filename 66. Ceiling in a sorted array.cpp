#include <bits/stdc++.h>
using namespace std;

/* Function to get index of ceiling of x in arr[low..high] */
int ceilSearch(int arr[], int low, int high, int x)
{
	
	int i;
	
	/* If x is smaller than or equal to first element,
		then return the first element */
	if(x <= arr[low])
		return low;
	
	/* Otherwise, linearly search for ceil value */
	for(i = low; i < high; i++)
	{
		if(arr[i] == x) return i;
		if(arr[i] < x && arr[i+1] >= x) return i+1;
	}	
	return -1;
}

