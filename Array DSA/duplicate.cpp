// Q- Find duplicates in an array
// Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array

#include <bits/stdc++.h>
using namespace std;

int duplicates(int a[], int n)
{
    int ans;
    for(int i=0; i<n; i++)
    {
        ans = ans ^ a[i];
    }
    for(int i=1; i<n; i++)
    {
        ans = ans ^ i;
    }
    cout<<ans;
}
int main(){
    int n;
    cin >> n ;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x = duplicates(a,n);

    return 0;
}


// ^