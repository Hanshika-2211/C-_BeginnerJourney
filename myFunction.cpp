#include<iostream>
using namespace std;

void my_function()
{
    cout<<"Hellooooo"<<endl;
}
string name;
int main()
{
    cout<<"Enter your name:"<<endl;
    cin>>name;
    my_function();
    cout<<name<<endl;
}