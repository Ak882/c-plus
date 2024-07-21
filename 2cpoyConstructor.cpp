#include<iostream>
using namespace std;
class abc{
    public:
        int number;
        float f;
        abc(int n,float x);
            abc(abc &t)
            {
                number=t.number;
                f=t.f; 
            }
    void display();
};
abc::abc(int n,float f){
    number=n;
    this->f=f;
}

void abc::display(){
    cout<<"number : "<<number<<endl;
    cout<<"float : "<<f<<endl;
    }
int main(){
        abc a1(10,20.5);
        abc a2(a1);
        a2.display();
        return 0;
        }