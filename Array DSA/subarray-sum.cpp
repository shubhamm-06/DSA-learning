// Q- Subarray with given sum.
// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.In case of multiple subarrays, return the subarray which comes first on moving from left to right.
// question link - https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

#include <bits/stdc++.h>
using namespace std;

int SumOfSubarray(int arr[], int n, int sum)
{
	int curr_sum = arr[0], start = 0, i;

	for (i = 1; i <= n; i++) {
		while (curr_sum > sum && start < i - 1) {
			curr_sum = curr_sum - arr[start];
			start++;
		}

		if (curr_sum == sum) {
			cout << start+1 << " " << i;
			return 1;
		}

		if (i < n)
			curr_sum = curr_sum + arr[i];
	}

	cout << "No subarray found";
	return 0;
}
int main(){
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x = SumOfSubarray(a, n,s);

    return 0;
}