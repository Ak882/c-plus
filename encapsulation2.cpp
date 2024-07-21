#include<iostream>
#include<string>
using namespace std;

class bank
{
    private:
        string name;
        int accno;
        float balance;
    public:
        bank(string name,int accno, float balance )
        {
            this->name=name;
            this->accno=accno;
            this->balance=balance;
        }
        void display()
        {
            cout<<"name:"<<name<<endl;
            cout<<"accno:"<<accno<<endl;
            cout<<"balance:"<<balance<<endl;

        }
    void setaccno(int accno)
    {
        this->accno=accno;
    }
    int getaccno()
    {
        return accno;
    }
};

int main(){
    bank b("sachin", 123, 5.7);
    b.display();
    b.setaccno(333);
    b.display();

}