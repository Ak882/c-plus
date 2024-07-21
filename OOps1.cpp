#include<iostream>
using namespace std;
class person
{
    public:
        string name;
        int age;

        void abhi();

        void rahul()
        {
            cout << "Rahul is a good boy" << endl;
            cout <<"age " << age <<endl;

        }
};
void person::abhi(){
    cout << "Abhi is a good boy" << endl;
    cout <<" age " << age <<endl;
};
int main(){
    person p1;
    p1.age = 20;
    p1.abhi();
    p1.age=21;
    p1.rahul();

    return 0;
}