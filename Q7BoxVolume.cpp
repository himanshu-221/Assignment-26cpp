/*Define a class Box and write a program to enter length, breadth and height and initialise 
objects using constructor also define member functions to calculate volume of the box.*/
#include<iostream>
using namespace std;
class Box
{
    private:
    int lenght,breadth,height,volume;
    public:
    Box(int l,int b,int h)
    {
        lenght=l;
        breadth=b;
        height=h;
    }
    void BoxVolume()
    {
        volume = lenght*breadth*height;
    }
    void display()
    {
        cout<<"Volume of the Box is "<<volume<<endl;
    }
};
int main()
{
    Box b(3,5,8);
    b.BoxVolume();
    b.display();
    return 0;
}