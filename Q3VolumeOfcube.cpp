/*Define a class Cube and calculate Volume of Cube and initialise it using constructor.
*/
#include<iostream>
using namespace std;
class Cube
{
    private:
        int side,Volume;

    public:
        Cube(int x)
        {
            side=x;
        }
        void volume()
        {
            Volume=side*side*side;
        }
        void showData()
        {
            cout<<"Volume of cube of side "<<side<<" is "<<Volume<<endl;
        }
};
int main()
{
    Cube c(4);
    c.volume();
    c.showData();
    return 0;
}
    
