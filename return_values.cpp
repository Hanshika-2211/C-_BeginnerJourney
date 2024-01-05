#include<iostream>
using namespace std;

int Sum_of_numbers(int a=1,int b=2)
{
    return a+b;
}

int x=0;
int y=0;
int z=0;

int main()
{
    x=Sum_of_numbers(14,17);
    y=Sum_of_numbers(4,2);
    z=Sum_of_numbers();
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
}