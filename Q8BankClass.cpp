/*Define a class Bank and define member functions to read principal , rate of interest and 
year. Another member functions to calculate simple interest and display it. Initialise all details 
using constructor*/
#include<iostream>
using namespace std;
class Bank
{
    private:
        float principle,ROI,SI,year;
    public:
        void read()
        {
            //float p,r,y;
            cout<<"Enter priciple amount"<<endl;
            cin>>principle;
            cout<<"Enter Rate of Intrest "<<endl;
            cin>>ROI;
            cout<<"Enter time period "<<endl;
            cin>>year;
            SI = (principle*year*ROI)/100;
        }
        // void simpleIntrest()
        // {
        //     // formula of simple interest SI=P*T*R/100
            
        // }
        void Display()
        {
            cout<<"Simple intrest is "<<SI<<endl;
        }
};

int main()
{
    Bank b;
    b.read();
    //b.simpleIntrest();
    b.Display();
    return 0;
}