#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A constructor"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"B constructor"<<endl;
    }
};
class C:public B,public A{
    public:
    C(){
        cout<<"C constructor"<<endl;
    }
};
int main(){
    C c1;
    return 0;
}