#include <iostream>
#include <array>
using namespace std;
int main(){
    //  How to declare array using STL library
    array<int, 5> a = {1,2,3,4,5};
    
    for(int i=0; i < a.size(); i++ )
    {
        cout << a[i];
    }
    cout << endl;
    //  Playing with diffrent commands
    cout << "First Element is : " << a.front() << endl;
    cout << "Last Element is : " << a.back() << endl;
    cout << "Second Element is : " << a.at(2) << endl;
    return 0;
}