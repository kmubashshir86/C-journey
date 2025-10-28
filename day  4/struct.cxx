#include <iostream>
#include <string>
int main(){
	struct {
		std::string name;
		int age;
		char sec;
	}prince,mubashshir,tarun;
	
	prince.name="prince";
	mubashshir.name="mubashshir";
	tarun.name="tarun";
	prince.age=19;
	tarun.age=19;
	mubashshir.age=19;
	prince.sec='A';
	tarun.sec='A';
	mubashshir.sec='A';
	int a,b,c;
	a=b=c=1;
	return 0;
}