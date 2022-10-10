#include <bits/stdc++.h>

using namespace std;
int main (){
    // map<string, string> m;
    // m["Name"] = "Shubham Kuamar Singh";
    // m["City"] = "Siliguri & Kolkata";
    // m["Education"] = "Bachelors In Computer Application";

    // for(auto i:m){
    //     cout << i.first << "->" << i.second << endl;
    // }
    // m.erase("Name");
    // cout << "After Erase : " << endl ;
    // for(auto i:m){
    //     cout << i.first << "->" << i.second << endl;
    // }

    // for(auto i:m){
    //     cout << i.first << "->" << i.second << endl;
    // }
    int a[] = {1, 5, 7, 1};
    int k=6;
    int n = sizeof(a) /sizeof(a[0]);
    unordered_map<int,int> mp;
    int ans = 0;
    for(int i=0; i<n; i++){
        int temp = k - a[i];
        if(mp.find(temp) != mp.end())
        {
             ans+=mp[temp];
        }
        mp[a[i]]++;
    }
    cout << ans;


    
    return 0;
}