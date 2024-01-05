#include<iostream>
using namespace std;

int main()
{
    int marks=65;
    if(marks>=70)
    {
        cout<<"Congratulations you passed.!"<<endl;
    }else if(marks<=70){
        cout<<"Thoda khush ho le"<<endl;
    }else{
        cout<<"You Failed"<<endl;
    }
    return 0;
}