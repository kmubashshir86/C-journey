#include <iostream>
#include <string>
int main(){
    std::string str;
    str="hello";
    int num=5;
    std::string* address= &str;
    int* add= &num;
    std::cout<<address<<" , "<<add;
    std::cout<<std::endl<<*address<<" , "<<*add;
    *address="mubahshir";
    *add=55;
    return 0;}
