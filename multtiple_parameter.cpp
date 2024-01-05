#include<iostream>
using namespace std;

void my_function(string name="Hanshika",int roll_no=1)
{
    cout<<"Hellooooo "<<name<<" & Roll Number "<<roll_no<<" , How are you.??"<<endl;
}

int main()
{
    my_function("Tanay",2);
    my_function();
    return 0;
}