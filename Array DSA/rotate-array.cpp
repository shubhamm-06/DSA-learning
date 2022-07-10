// Q - Rotate the array by k position .

#include <bits/stdc++.h>
using namespace std;
int rotate(int a[], int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = a[i];
    }
    a = temp;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
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
    int k;
    cin >> k;
    int ans = rotate(a, n, k);
}