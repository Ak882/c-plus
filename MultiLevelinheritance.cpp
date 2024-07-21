#include<iostream>
using namespace std;

class company{

    public:
        int a;
    public:
         void display(){
            cout<<" MULTILEVEL INHERITANCE "<<endl;
            cout<<"------------------------"<<endl;
            cout<<"Enter your value 1 : ";
            cin>>a;
         }       
};

class sales:public company{
    public:
        int b;
    public:
        void display1(){
            cout<<" \n Enter your value 2 : ";
            cin>>b;
            }
};

class tax:public sales{
    private:
        int c;
    public:
        void display2(){
            cout<<"\n Enter your value  3 : ";
            cin>>c;
            }
    void show(){
            int total = a + b + c;
            cout<<"\n Your total value is :";
            cout<<total;
        }
};

int main(){
    tax t;
    t.display();
    t.display1();
    t.display2();
    t.show();
    return 0;
}