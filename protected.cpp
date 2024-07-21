#include<iostream>
using namespace std;
/*Protected: The protected access modifier is similar to the private access modifier
 in the sense that it can’t be accessed outside of its class unless with the help of
  a friend class. The difference is that the class members declared as Protected can be
   accessed by any subclass (derived class) of that class as well.*/
   class parent{
    protected:
    int roll;
    string name;
   };
   class child:public parent 
   {
        public:
            void setdata(int r,string n)
            {
             roll=r;
             name=n;
            }
        void display()
        {
         cout<<"roll : "<<roll<<endl;
         cout<<"Name : "<<name<<endl;
        }
   };
   int main()
   {
    child c;
    c.setdata(10,"ajay");
    c.display();
    return 0;
    }
    