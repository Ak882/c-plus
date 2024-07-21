/*If we keep the data member private inside the class, then when the data 
 is taken in the function, then it is called encapsulation.*/

#include<iostream>
#include<string>
using namespace std;

class person{
private:
    string name;
    int age;
    public:

    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age"<<age<<endl;
    }
    void setage(int age){
        this->age=age;
    }
    int getage(){
        return age;
    }
};
int main(){
    person p("Ajay",18);
    p.display();
    p.setage(20);
    p.display();

}