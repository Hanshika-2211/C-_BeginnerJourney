#include<iostream>
using namespace std;

void my_function(string name="Hanshika")
{
    cout<<"Hellooooo "<<name<<" , How are you.??"<<endl;
}

int main()
{
    my_function("Tanay");
    my_function();
}