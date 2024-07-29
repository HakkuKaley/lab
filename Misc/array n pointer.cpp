#include<iostream>
using namespace std;
int main()
{
    int *p, i, arr[5];
    p=&arr[0];
    cout<<"Enter the number";
    for (i = 0; i < 5; i++)
    {
        cin>>*p;
        p++;
    }
    p=&arr[4];
    cout<<"Reverse order";
    for ( i = 0; i < 5; i++)
    {
        cout<<*p;
        p--;
    }
    return 0;
}
