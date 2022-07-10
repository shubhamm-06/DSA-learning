// Q Find Missing number in array
// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.


// Algo - Approach: The length of the array is n-1. So, the sum of all n elements i.e. sum of numbers from 1 to n can be calculated using the formula n*(n+1)/2. Now find the sum of all the elements in the array and subtract it from the sum of the first n natural numbers, it will give us the value of the missing element.
#include <iostream>
using namespace std;
int MissingElement(int a[], int n)
{
    int total = (n+1)*(n+2)/2;
    for(int i=0; i<n; i++){
        total -= a[i];
    }
    cout << total;
    
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = MissingElement(a, n);
}