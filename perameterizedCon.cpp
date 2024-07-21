#include<iostream>
using namespace std;
class person{
    public:
        string name;
        int age;
        person(string n,int a){
            name=n;
            age=a;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age :"<<age<<endl;
        }

};
int main(){
    person p1("ajay",19);
    p1.display();
    return 0;
}