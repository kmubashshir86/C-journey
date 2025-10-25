#include <iostream>
using namespace std;
int main(){
    cout<<"your name:";
    string x;
    cin>>x;
    //your name:jhon doe
    cout<< "\n" << x;

    //solve
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
    return 0;
    }
