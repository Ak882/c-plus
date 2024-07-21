#include<iostream>
using namespace std;
class person
{
     string name;
        int age;
        float height;
        string bloodgroup;
    public:
    person(string n,int a,float h,string bg)
    {
        name=n;
        age=a;
        height=h;
        bloodgroup=bg;
        }
       
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << endl;
        cout << "Blood Group: " << bloodgroup << endl;
        
    }
};
int main()
{
    person p1;
    p1.person("ajay",19,5.8,"o+");
    p1.display();
    return 0;
}
