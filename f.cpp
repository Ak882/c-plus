#include <iostream>
using namespace std;

class Parent {
public:
    void display()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void display()
    {
        cout << "Derived Function" << endl;

        Parent::display();
    }
};

int main()
{
    Child c;
    c.display();
    
       return 0;
}