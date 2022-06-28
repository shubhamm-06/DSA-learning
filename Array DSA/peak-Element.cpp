// Q- Find the index of PeakElement
// An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).

#include <bits/stdc++.h>
using namespace std;

int findPeakUtil(int arr[], int l,int h, int n)
{
	int mid = l + (h - l) / 2;

	if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
		(mid == n - 1 || arr[mid + 1] <= arr[mid]))
		return mid;
	else if (mid > 0 && arr[mid - 1] > arr[mid])
		return findPeakUtil(arr, l, (mid - 1), n);

	else
		return findPeakUtil(
			arr, (mid + 1), h, n);
}

int findPeak(int arr[], int n)
{
	return findPeakUtil(arr, 0, n - 1, n);
}

int main()
{
	int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
	cout << findPeak(arr, n);
	return 0;
}
