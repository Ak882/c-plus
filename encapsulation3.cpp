#include<iostream>
#include<string>
using namespace std;
class student{
    private:
        string name;
        int rollno;
        float height;
        public:
        student( string name, int rollno,float height){
            this->name=name;
            this->rollno=rollno;
            this->height=height;

        }
        void display(){
            cout<<"name:"<<name<<endl;
            cout<<"rollno:"<<rollno<<endl;
            cout<<"height:"<<height<<endl;
        }
        void setname (string name){
            this->name=name;
        }
        string getname(){
            return name;
        }


        void setrollno( int rollno){
            this->rollno=rollno;
        }
        int getrollno(){
            return rollno;
        }


        void setheight( float height){
            this->height=height;
        }
        float getheight(){
            return height;
        }


};
int main(){
    cout<<"--------------"<<endl;
    student s1("sachin",1,5.5);
    s1.display();
    cout<<"--------------"<<endl;
    s1.setname("ajay");
    s1.setrollno(2);
    s1.setheight(6.5);
    s1.display();
    cout<<"--------------"<<endl;

}
