// Q - Move all negative elements to end
// Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.
// Brute force approch 
// C++ program to Move All -ve Element At End
// Without changing order Of Array Element
#include<bits/stdc++.h>
using namespace std;
void rearrangeElements(int arr[], int n)
{
	int temp[n];
	int j = 0; // index of temp
	for (int i = 0; i < n ; i++)
		if (arr[i] >= 0 )
			temp[j++] = arr[i];

	if (j == n || j == 0)
		return;

	for (int i = 0 ; i < n ; i++)
		if (arr[i] < 0)
			temp[j++] = arr[i];

	memcpy(arr, temp, sizeof(temp));
}

int main()
{
	int arr[] = {1 ,-1 ,-3 , -2, 7, 5, 11, 6 };
	int n = sizeof(arr)/sizeof(arr[0]);

	rearrangeElements(arr, n);

	for (int i = 0; i < n; i++)
	cout << arr[i] << " ";

	return 0;
}
