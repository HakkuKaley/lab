#include<iostream>
using namespace std;
int main()
{
    int ch, a, b;
    cout<<"Enter the first number.\n";
    cin>>a;
    cout<<"Enter the Second number.\n";
    cin>>b;
    cout<<"------------------------\n";
    cout<<"Press (1)Add (2)Sub (3)Mul (4)Div\n";
    cin>>ch;
    switch (ch){
        case 1:
            cout<<"Addition of a & b is: "<<a+b;
            break;
        case 2:
            cout<<"Subtraction of a & b is: "<<a-b;
            break;
        case 3:
            cout<<"Multiplication of a & b is: "<<a*b;
            break;
        case 4:
            cout<<"Division of a & b is: "<<a/b;
            break; 
        default:
            cout<<"Invalid Input";
            exit(0);
    }
    return 0;
}