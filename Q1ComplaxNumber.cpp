/*Define a class Complex to represent a complex number with instance variables a and b 
to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
*/
#include<iostream>
using namespace std;
class Complax
{
    int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"Complax number is "<<a<<" + "<<b<<"i"<<endl;
        }
        Complax add(Complax c)
        {
            Complax temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};
int main()
{
    Complax c1,c2,c3;
    c1.setData(12,34);
    c2.setData(3,6);
    c3=c1.add(c2);
    c3.showData();
    return 0;
}