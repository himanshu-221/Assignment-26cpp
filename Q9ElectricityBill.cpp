/*Define a class Bill and define its member function get() to take detail of customer , 
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class e_Bill
{
    private:
    int unit;
    int C_ID;
    char name[20];
    double bill;
    public:
    void get()
    {
        cout<<"Enter customer ID no.:\t";
        cin>>C_ID;
        cout<<"Enter customer name:\t";
        cin>>name;
        cout<<"Enter Electricity Bill unit:\t";
        cin>>unit;
    } 
    void print()
    {
        cout<<"name ::\t"<<name<<endl;
        cout<<"C-ID ::\t"<<C_ID<<endl;
        cout<<"Total Bill Amount ::\t"<<bill<<endl;
    }
    void calculatebill()
    {
        if(unit<=100)
        {
            bill = unit*1.2;
        }
        else if(unit>100 || unit<=200)
        {
            bill = unit*2;
        }
        else{
            bill = unit*3;
        }
    }
};
int main()
{
    e_Bill b;
    b.get();
    b.calculatebill();
    b.print();
    return 0;
}