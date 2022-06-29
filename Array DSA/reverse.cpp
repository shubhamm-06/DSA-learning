//Q Reverse the array A.

#include <bits/stdc++.h>
using namespace std;

int reverse(int arr[], int n){
    int i,j;
    for(int i=0, j=n-1; i<n/2; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}


int main()
{
	int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
	cout << reverse(arr, n);
	return 0;
}
