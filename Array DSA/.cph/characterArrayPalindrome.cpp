// Check if the given character array is Palindrome
#include <iostream>
using namespace std;
int main()
{
    // Taking input from user
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // MAIN LOGIC
    int Palindrome = 10;
    for(int i=0; i<n; i++)
    {
        if(a[i] != a[n-1-i])
        {
            Palindrome = 1;
        }
        break;
    }
    if(Palindrome==1){
        cout << "Not a palindrome";
    }
    else{
        cout << "Palindrome";
    }



    return 0;
}