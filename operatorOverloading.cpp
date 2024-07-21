#include<iostream>
using namespace std;
class student{
    private:
        int name;
        int work;
    public:
        student( int n=1, int w=7 ){

            name=n;
            work=w;
        }
        student operator+(student const& obj){
            student temp;
            temp.name = name + obj.name;
            temp.work = work + obj.work;
            return temp;
        }
        void display()
        {
            cout << name << " + "<<work<<endl;
            }
};
int main(){
    student s1(1,6);
    student s2(1,6);
    student s3 = s1+s2;

    s3.display();


}