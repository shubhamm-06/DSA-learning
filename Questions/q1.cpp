// You are given N balloons, indexed from 0 to n - 1. Each balloon is painted with a number on it represented by an array arr. You are asked to brust all the balloons.
// If you brust the ith  balloon,, you will get arr[ i - 1 ] * arr[ i ] * arr[ i + 1] coins. If i - 1, or i + 1 goes out of bounds of the array, consider it as if there is a balloon with a 1 painted on it.
// Return the maximum coins you can collect by brusting the balloons wisely.

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxCoins(int N, vector<int> &arr) {
        // code here
         int n = arr.size();
        vector<vector<int>>dp(n+2, vector<int>(n+1, 0));
        arr.push_back(1);
        arr.insert(arr.begin(), 1);
        
        for(int i=n; i>= 1; i--){
            for(int j=1; j<=n; j++){
                if(i > j) continue;
                int maxi = INT_MIN;
                for(int k=i;k<=j;k++){
                    int ans = arr[i-1]*arr[k]*arr[j+1] + dp[i][k-1] + dp[k+1][j];
                    if(maxi < ans) maxi = ans;
                }   
                dp[i][j] = maxi;
            }
        }
        return dp[1][n];
    }
};
int main() {
    int t;
    cout << "Enter total number of testcases: " ;
    cin >> t;
    while (t--) {
        int N;
        cout << "Enter size of array: ";
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++){
            cout<< "Enter " << i <<"th element of the array: ";
            cin>>arr[i];
        }


        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
