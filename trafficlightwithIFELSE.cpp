#include<iostream>
using namespace std;
int main()
{
    int number;

    cout<<"traffic rules \n";
    cout<<"1.red light \n 2.yello light\n 3.green light\n";
    cout<<"Enter your choice :";
    cin >> number;
    if (number==1)
    {
        cout<<"stop \n";
        cout<<"enter your sitution :\n";
        cout<<"1.police\n 2.Ambulance\n 3.A normal citizan\n";
        cin >>number;
        if(number==1)
            {
            cout<<"you can go \n";
            }
        else if(number==2)
            {
                cout<<"you can go \n";
            }
        else if(number==3)
            {
                cout<<"you must stop \n";
            }
        else{
            cout<<"invalid choice \n";
            }
    } 
    else if(number==2)
    {
        cout<<"ready \n";
        cout<<"enter your sitution :\n";
        cout<<"1.police \n2.Ambulance\n3.A normal citizan\n";
        cin >> number;
        if(number==1)
            {
            cout<<"you can go \n";
            }
        else if(number==2)
            {
                cout<<"you can go \n";
            }
        else if(number==3)
            {
                cout<<"you must ready \n";
            }
        else{
            cout<<"invalid choice \n";
        }

    }
    else if(number==3)
        {
            cout<<" you can go \n";
        }
    else{
        cout<<"invalid choice \n";
    }
}