#include <iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v;
    //  Capacity means the number of element vector can store currently.
    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(2);
    v.push_back(3);
    cout << "Capacity ->" << v.capacity() << endl;
    cout << "Size ->" << v.size() << endl;
    return 0;
}