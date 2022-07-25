#include <iostream>
#include <stack>
//  Stack comes with the basic concept of last in first out.
using namespace std;
int main (){
    stack<string> s;
    s.push("Shubham");
    s.push("Kumar");
    s.push("Singh");

    cout << "Top Element Of The Stack Is :-> " << s.top() << endl ;
    s.pop();
    cout << "Top Element Of The Stack After Pop Is :-> " << s.top() << endl ;

    return 0;
}