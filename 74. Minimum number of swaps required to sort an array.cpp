#include<bits/stdc++.h>
using namespace std;


int minSwaps(int arr[], int n)
{
	pair<int, int> arrPos[n];
	for (int i = 0; i < n; i++)
	{
		arrPos[i].first = arr[i];
		arrPos[i].second = i;
	}

	sort(arrPos, arrPos + n);
	vector<bool> vis(n, false);
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		// already swapped and corrected or
		// already present at correct pos
		if (vis[i] || arrPos[i].second == i)
			continue;

		// find out the number of node in
		// this cycle and add in ans
		int cycle_size = 0;
		int j = i;
		while (!vis[j])
		{
			vis[j] = 1;

			// move to next node
			j = arrPos[j].second;
			cycle_size++;
		}

		// Update answer by adding current cycle.
		if (cycle_size > 0)
		{
			ans += (cycle_size - 1);
		}
	}
  
	return ans;
}

int main()
{
	int arr[] = {1, 5, 4, 3, 2};
	int n = (sizeof(arr) / sizeof(int));
	cout << minSwaps(arr, n);
	return 0;
}
