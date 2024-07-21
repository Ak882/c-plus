#include<iostream>
using namespace std;

class abc{
    public:

    int number;
    abc()// default constructor
        {
        number = 999999;
        }
        abc(int n)//perameterized constructor
        {
            number = n;
            }
    void display()
        {
            cout << "The number is: " << number << endl;

         }
 };
int main(){
    abc obj;
    obj.display();
    abc obj2(1);
    obj2.display();
    return 0;
                
}