#include <bits/stdc++.h>
using namespace std;

int MinMax(int arr[], int n){
    int min = arr[0], max = arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
        
    }
     cout << max << " " << min;
}


int main()
{
	int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int a= MinMax(arr,n);
	return 0;
}
