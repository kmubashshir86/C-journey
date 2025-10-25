#include <iostream>


int main(){
    std::string x;
    std::cout<< "enter human/or:";
    std::cin>>x;
    if (x=="human"){
    std::cout<<std::endl<<"enter girl/boy:";
    std::string y;
    std::cin>>y;
    if(y=="girl"){
    std::cout<<std::endl<<"pink";}
    else if(y=="boy"){
    std::cout<<std::endl<<"blue";}
    else{
    std::cout<<std::endl<<"rainbow";}
    }
    else{
    std::cout<<"";}
    return 0;}
