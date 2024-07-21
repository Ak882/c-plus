#include<iostream>
#include<string>
using namespace std;
class person {
    public:
        string name;
        int age;
        
        person(){

        }
    };
class student : public person{
    public:
    int roll;
    

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
    }

};


int main(){
    student s1;
    s1.name="rahul";
    s1.age=21;
    s1.roll=1;
    s1.display();


    return 0;
}