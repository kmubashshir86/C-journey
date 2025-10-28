#include <iostream>

int main(){
	
	int x=55;
//	int y=x: // error
	
	int &y=x;
	x=66;
	std::cout<<y;
	
    //id
    
    std::cout<<std::endl<<&y;
	return 0;
	
}

