#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    cout << "Vector after inserting element : " << endl ;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl ;
    cout << "Binary Search Algo  : " << endl ;
    cout << "Checking if 5 is present or not :" << binary_search(v.begin(),v.end(),5) << endl ;

    cout << "Min Max element using algoritham -> " << endl ;
    int a=5, b=4;
    cout << "Max -> "  << max(a,b) << endl ;
    cout << "Min -> "  << min(a,b) << endl ;

    cout << "Swapping element in cpp ->"<< endl;
    cout << "Before Swap " << a << ", "<< b  <<endl;
    swap(a,b);
    cout << "After Swap " << a << ", " <<b <<endl;
    
    cout << "Reversing a string -> " << endl ;
    string s = "abcde" ; 
    cout << "Before Reversing -> " << s << endl ;
    reverse(s.begin(),s.end());
    cout << "After Reversing -> " << s << endl ;

    // cout << "Rotation -> " << endl ;
    // int arr[]={1,2,3,4,54,6,6,7,8,9} ;
    // cout << "arr Before Rotation -> "<< arr << endl;
    // rotate(arr.begin(), arr.begin()+1, arr.end);
    // cout << "arr After Rotation -> "<<arr << endl;



    return 0;
}