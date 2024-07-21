#include<iostream>
using namespace std;
class person
{
    public:
        string name;
        int age;
        float height;
        string bloodgroup;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout<<"height"<<height<<endl;
        cout << "Blood Group: " << bloodgroup << endl;
    }
};
int main()
{
    person p1;
    p1.name="ajay";
    p1.age=19;
    p1.height=5.6;
    p1.bloodgroup="o+";
    p1.display();
    return 0;
}
