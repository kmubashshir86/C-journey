#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout<<"max/min limit of int is "<< INT_MAX<<" "<<INT_MIN <<endl;
    cout<<"max limit of unsinged int is "<<UINT_MAX<<endl;
    cout<<"max/min limit of long long is "<<LLONG_MAX<<" "<<LLONG_MIN<<endl;
    cout<<"max limit of unsinged long long is "<<ULLONG_MAX<<endl;
    cout<<"bit contain in char "<<(sizeof(char)*8)<<"bytes\n";
    cout<<"max/min limit of char is "<<CHAR_MAX<<" "<<CHAR_MIN<<endl;
    cout<<"max/min limit of singed char is "<<SCHAR_MAX<<" "<<SCHAR_MIN<<endl;
    cout<<"max limit of unsinged char is "<<UCHAR_MAX<<endl;
    cout<<"max/min limit of short is "<<SHRT_MAX<<" "<< SHRT_MIN<< endl;
    cout<<"max limit of unsinged short is "<<USHRT_MAX<<endl;
    return 0;}
