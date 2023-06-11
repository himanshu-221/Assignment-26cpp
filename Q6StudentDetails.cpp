/*Define a class student and write a program to enter student details using constructor and 
define member function to display all the details.
*/
#include<iostream>
using namespace std;
class Student
{
    private:
    int rollno;
    char grade;
    public:
    Student(int a,char b)
    {
        rollno=a;
        grade=b;
    }
    void Display()
    {
        cout<<"Student details are.........."<<endl;
        cout<<"Roll No. "<<rollno<<endl<<"Grades "<<grade<<endl;
    }

};
int main()
{
    Student s(26,'A');
    s.Display();
    return 0;
}