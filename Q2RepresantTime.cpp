/*Define a class Time to represent a time with instance variables h,m and s to store hour, 
minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*/
#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
        void setData(int a,int b,int c)
        {
            h=a;m=b;s=c;
        }
        void showTime()
        {
            cout<<"Time is "<<h<<" Hour "<<m<<" min "<<s<<" sec"<<endl;
        }
        void normalize()
        {
            m = m + s/60;
            s = s%60;
            h = h + m/60;
            m = m%60;
        }
        Time add(Time t)
        {
            Time temp;
            temp.s = s + t.s;
            temp.m = m + t.m;
            temp.h = h + t.h;
            temp.normalize();
            return temp;

        }


};
int main()
{
    Time t1,t2,t3;
    t1.setData(12,56,78);
    t2.setData(2,67,89);
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}