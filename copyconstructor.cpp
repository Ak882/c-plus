#include<iostream>
using namespace std;

class student
{
    string name;
    int age;
    int roll;
    public:
        student(string n,int a,int r);
        student(student&t)
        {
            name=t.name;
            age=t.age;
            roll=t.roll;
        }
        void display();

};
student::student(string n,int a,int r)

{
    name=n;
    age=a;
    roll=r;
    };
    void student::display()
    {
        cout<<endl<<name<<"\t"<<age<<"\t"<<roll;
    };
int main()
        {
            cout<<"Name:"<<"\t"<<"age"<<"\t"<<"roll";
            student s1("Rahul",20,101);
            s1.display();
            student s2(s1);
            s2.display();
            return 0;
        }