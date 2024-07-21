#include<iostream>
using namespace std;

class student
{

    public:
    char name[20];
    int age;
    int roll;

    student()
    {
        cout<<"Enter your name :"<<endl;
        cin>>name;
        cout<<"Enter your age :"<<endl;
        cin>>age;
        cout<<"Enter your roll no :"<<endl;
        cin>>roll;
    }
    void display()
    {   cout<<endl<<"name"<<"\t"<<"age"<<"\t"<<"roll";
        cout<<endl<<name<<"\t"<<age<<"\t"<<roll;
    }
}; 
int main(){
    student s1;
    s1.display();
    return 0;
}