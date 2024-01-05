#include<iostream>
using namespace std;

int main()
{
    int a=15;
    int b =5;

    int add=a+b;
    cout<<"This (+)operator will perform addition of a and b"<<endl;
    cout<<"a+b="<<add<<endl;
    int subtract=a-b;
    cout<<"This (-)operator will perform subtraction of a and b"<<endl;
    cout<<"a-b="<<subtract<<endl;
    int multiply=a*b;
    cout<<"This (*)operator will perform multiplication of a and b"<<endl;
    cout<<"a*b="<<multiply<<endl;
    int divide=a/b;
    cout<<"This (/)operator will perform division of a and b"<<endl;
    cout<<"a/b="<<divide<<endl;
    int mod=a%b;
    cout<<"This (%)operator will perform modulus of a and b"<<endl;
    cout<<"a%b="<<mod<<endl;
    a++;
    cout<<"This (++)operator will increment value of a"<<endl;
    cout<<"Increment of a is "<<a<<endl;
    b--;
    cout<<"This (--)operator will decrement value of b"<<endl;
    cout<<"Decrement of b is "<<b<<endl;
    return 0;
}