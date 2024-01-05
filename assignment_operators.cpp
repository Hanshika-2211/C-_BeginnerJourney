#include<iostream>
using namespace std;

int main()
{
    int num=50;
    num+=2;
    cout<<"This will split as num=num+5"<<endl;
    cout<<"num="<<num<<endl;
    num-=5;
    cout<<"This will split as num=num-5"<<endl;
    cout<<"num="<<num<<endl;
    num*=5;
    cout<<"This will split as num=num*5"<<endl;
    cout<<"num="<<num<<endl;
    num/=5;
    cout<<"This will split as num=num/5"<<endl;
    cout<<"num="<<num<<endl;
    num%=5;
    cout<<"This will split as num=num%5"<<endl;
    cout<<"num="<<num<<endl;
    num&=5;
    cout<<"This will split as num=num&5"<<endl;
    cout<<"num="<<num<<endl;
    num|=5;
    cout<<"This will split as num=num|5"<<endl;
    cout<<"num="<<num<<endl;
    num^=5;
    cout<<"This will split as num=num^5"<<endl;
    cout<<"num="<<num<<endl;
    num>>=5;
    cout<<"This will split as num=num>>5"<<endl;
    cout<<"num="<<num<<endl;
    num<<=5;
    cout<<"This will split as num=num<<5"<<endl;
    cout<<"num="<<num<<endl;
    return 0;
}