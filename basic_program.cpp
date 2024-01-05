#include<iostream>
using namespace std;

class Car{
    public:
    int model;
    string name;
    string brand;
};

int main()
{
    Car MyCar1;

    MyCar1.model = 2021;
    MyCar1.name = "Thar";
    MyCar1.brand = "Mahindra";

    cout<<"The Car's Brand is "<<MyCar1.brand<<" Car's name is "<<MyCar1.name<<" and Car's model is "<<MyCar1.model;
}