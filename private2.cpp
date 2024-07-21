#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    public:
     void setdata( string n,int r)
     {
        name=n;
        rollno=r;
        cout<<"Enter name: "<<name<<endl;
        cout<<"enter roll no :"<<rollno<<endl;
     }
};
int main(){
    student s1;
    s1.setdata( "aj",10);
    return 0;

}