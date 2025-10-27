#include <iostream>

int main(){
    int abc[5]={1,2,3,4,5};
    std::cout<<sizeof(abc)<<"bytes";
    std::cout<<std::endl;
    int ans=sizeof(abc)/sizeof(abc[0]);
    std::cout<<ans;
    return 0;}
