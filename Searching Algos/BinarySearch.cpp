// Q - Find the occurrence of an integer in the array.
// Given an array A[] of N number of integers , find out if element X is present in the array, if present specify its index.

// Approach 1 - Linear Search , Traverse through every of the array.
// Approach 2 - Binary Search, A binary search is a quick and efficient method of finding a specific target value from a set of ordered items. By starting in the middle of the sorted list, it can effectively cut the search space in half by determining whether to ascend or descend the list based on the median value compared to the target value.

// Code -
// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		
		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
