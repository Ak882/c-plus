#include<iostream>
using namespace std;

class student{
    private:
    int rollno;
    string name;
    public:
    void setdata(int r, string n){
        rollno=r;
        name=n;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
int main(){
    student s1;
    s1.setdata(101,"Rahul");
    return 0;
    }