#include<iostream>
using namespace std;
class  person{
    public:
        void display(){
            cout<<"this is parent class"<<endl;
        }
};
class student:public person{
    public:
    void display(){
        cout<<"this is child class"<<endl;
        }
};
class rahul:public person{
    public:
    void display(){
        cout<<"this is rahul class"<<endl;
        }
};c
int main(){
    person p;
    p.display();
    student s;
    s.display();
    rahul r;
    r.display();


}