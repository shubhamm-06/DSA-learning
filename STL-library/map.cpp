#include <iostream>
#include <map>

using namespace std;
int main (){
    map<string, string> m;
    m["Name"] = "Shubham Kuamar Singh";
    m["City"] = "Siliguri & Kolkata";
    m["Education"] = "Bachelors In Computer Application";

    for(auto i:m){
        cout << i.first << "->" << i.second << endl;
    }
    m.erase("Name");
    cout << "After Erase : " << endl ;
    for(auto i:m){
        cout << i.first << "->" << i.second << endl;
    }
    m.insert({"Shubham" "myname"});
    cout << "After Insertion : " << endl ;
    for(auto i:m){
        cout << i.first << "->" << i.second << endl;
    }
    return 0;
}