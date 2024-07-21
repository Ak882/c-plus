#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"traffic rules\n";
    cout<<"--------------------------------------------\n";
    cout<<"1.red ligth\n2.yello light\n3.Green light\n";
    cout<<"---------------------------------------------\n";
    cout<<"Enter your choice :";
    cin >> number;
    while(number)
    {
        cout<<"stop";
        break;
        
         cout<<"ready";
        break;
        
        cout<<"go";
        break;

        cout<<"Invalid choice";
    }
    return 0;
}