#include<iostream>
using namespace std;

int main()
{
//     int marks=50;
//     int attendance=50;
//     bool decision;

//     decision=(marks>=50) && (attendance>=50);
//     cout<<decision<<endl;
//     decision=(marks<=50) && (attendance<=50);
//     cout<<decision<<endl;
//     return 0;
// }
       bool mom=true;
       bool dad=false;
       bool sister=false;
       bool me=false;

       bool decision=(mom==true)|| (dad==true)|| (sister==true) || (me==true);
       cout<<endl<<"Or Example"<<decision;
       cout<<endl<<"Not example"<<!(true);
       return 0;
}