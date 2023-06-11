/*Define a class Date and write a program to Display Date and initialise date object using 
Constructors.*/
#include<iostream>
using namespace std;
class Date
{
    private:
        int dd,mm,yyyy;
    public:
        Date(int a,int b,int c)
        {
            dd=a;
            mm=b;
            yyyy=c;
        }
        void shoDate()
        {
            cout<<"Day "<<dd<<" Month "<<mm<<" Year "<<yyyy<<endl;
        }
};

int main()
{
    int a,b,c;
    cout<<"Enter date in dd/mm/year formate"<<endl;
    cin>>a>>b>>c;
    Date d(a,b,c);
    d.shoDate();
    return 0;
}