#include <iostream>
#include <queue>
// Unlike stack queue follows first in first out .
using namespace std;
int main (){
    queue<string> q;
    q.push("Shubham");
    q.push("Kuamr");
    q.push("Singh");
    cout << "All The Element In The Queue Is :-> " << q.front() << endl;
    q.pop();
    cout << "All The Element In The Queue After Pop Is :-> " << q.front() << endl;

    return 0;
}