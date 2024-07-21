#include<iostream>
using namespace std;

class  college {

    public:

        void student( int x)
        {
            cout<<"student"<<x<<endl;
        }

        void student( double y)
        {
            cout<<"student"<<y<<endl;
        }

        void student( int x,int y)
        {
            cout<<"student"<<x<<y<<endl;
        }
};

int main(){

    college c;
    c.student(1);
    c.student(1.1);
    c.student(1,2);

    return 0;
}