#include<iostream>
using namespace std;


class company{

    public:
     void employee(){
        cout<<"employee"<<endl;
     }
};


class product:public company{

    public:

    void sales(){
        cout<<"sales"<<endl;
        }
};


class finance:public company{

    public:

    void income(){
        cout<<"income"<<endl;
        }
};
int main(){
    product p;
    cout<<"calling from product department"<<endl;
    p.employee();
    p.sales();
    finance f;
    cout<<"calling from finance department"<<endl;
    f.employee();
    f.income();
    return 0;
}