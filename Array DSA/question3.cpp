#include <bits/stdc++.h>
using namespace std;
 
bool check(int A[], int B[], int N)
{
    bool flag = true;
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            flag = false;
            break;
        }
    }
    return flag;
}
 
void leftRotate(int A[], int N)
{
    int temp = A[0];
    for (int i = 0; i < N - 1; i++) {
        A[i] = A[i + 1];
    }
    A[N - 1] = temp;
}
 
void rightRotate(int A[], int N)
{
    int temp = A[N - 1];
    for (int i = N - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }
    A[0] = temp;
}
 
int minRotations(int A[], int B[], int N)
{
    int C[N];
    int D[N];
    for (int i = 0; i < N; i++){
        C[i] = A[i];
        D[i] = B[i];
    }
        
    int a = 0, b = 0, c = 0;

    while (check(A, D, N) == false) {
        rightRotate(A, N);
        leftRotate(D,N);
        c++;
    }

    while (check(A, B, N) == false) {
        rightRotate(A, N);
        a++;
    }
 
   while (check(C, B, N) == false) {
        leftRotate(C, N);
        b++;
    }


 
    int ans = min(a, b);
    ans = min(ans, c);
    return ans;
}
int main()
{
	int A[] = { 13, 12, 7, 18, 4, 5, 1 };
	int B[] = { 12, 7, 18, 4, 5, 1, 13 };
    int N = sizeof(A) / sizeof(A[0]);
    // int N;
    // cin >> N;
    // int A[N], B[N];
    // for(int i=0; i<N; i++)
    // {
    //     cin >> A[i];
    // }
    // for(int i=0; i<N; i++)
    // {
    //     cin >> B[i];
    // }
 
    int ans = minRotations(A, B, N);
    cout << ans;
 
    return 0;
}
// SAMPLE INPUT
// 7
// 13 12 7 18 4 5 1
// 12 7 18 4 5 1 13
// OUTPUT
// 1