#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(number % 2 == 0){
    cout << "The number is even.";
    }
    else{
    cout << "The number is odd.";
    }
}
