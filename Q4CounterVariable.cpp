/*Define a class Counter and Write a program to Show Counter using Constructor.*/
#include<iostream> 
using namespace std;
class Counter
{
    private:
        int count=0;
    public:
        Counter()
        {
            count++;
        }
        void showData()
        {
            cout<<"Counter value is "<<count<<endl;
        }
};
int main()
{
    Counter c;
    c.showData();
    return 0;
}