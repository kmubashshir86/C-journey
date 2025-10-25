#include <iostream>
#include <string>
using namespace std;
int main(){
    //string methods
    cout << (string("mubashshir ")+"khan") << endl;
    cout << string("m").append("k") << std::endl;
    cout << string("0123456789").size();
    cout << "\n";
    cout << string("1234").length();
    string x="mubahshsir khan";//mutable string
    const std::string y ="mk"; //non mutable string
    cout << "\n";
    cout<< x[0];
    cout << "\n"<< x.at(0);
    string txt = "We are the so-called \"Vikings\" from the north.";
    return 0;

    }
