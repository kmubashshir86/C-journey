#include <iostream>
using namespace std;

int main() {

    struct Student {
        string name;
        int age;
    };

    Student s1;
    s1.name = "Mubi";
    s1.age = 19;

    cout << s1.name << " : " << s1.age << endl;

    return 0;
}
