#include <iostream>
#include <deque>
using namespace std;
int main(){
    // Declaring a deque
    deque<int>d;
    // Command to isert element at the back.
    d.push_back(1);
    // Command to isert element at the Front.
    d.push_front(2);

    cout << "Deque Is As Follows :->" << endl;
    for(int i:d){
        cout << i << " ";
    }
    cout << endl;
    //  Pop back command deletes the elements from the back of the deque.
    d.pop_back();
    cout << "Deque Is As Follows After Pop Back Command :->" << endl ;
    for(int i:d){
        cout << i << " ";
    }
    cout << endl;
    d.push_back(3);
    d.push_front(5);
    d.push_back(54);
    cout << "Print First Index Element :-> " << d.at(1) << endl ;

    cout << "Empty Or Not " << d.empty() << endl ;
    d.erase(d.begin(),d.begin()+1);
    cout << "After Using The Erase Function :-> "; 
    for(int i:d){
        cout << i << " ";
    }


    return 0;
}