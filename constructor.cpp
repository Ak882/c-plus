#include<iostream>
using namespace std;
class abe{  
    public:
        string name;
        int age;

        abe(){
            cout << "Enter your name: ";
            name="aj";
        }
        abe(int x)
        {
            cout << "Enter your age: "<<endl;
            age=x;
        }

};
int main(){
    abe obj1;
    cout << "Name: " << obj1.name<<endl;
    abe obj2(21);
    cout << "Age: " << obj2.age<<endl;
    return 0;
    
}