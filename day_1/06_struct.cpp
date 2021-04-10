#include<iostream>
using namespace std;
struct student
{
    int num;
    char name[20];
    char gender;
};

int main(int argc, char const *argv[])
{
    student s={10,"asd",'M'};
    cout<<s.num<<endl;
    cout<<sizeof(s.num)<<endl;     //4
    cout<<sizeof(s.name)<<endl;    //20
    cout<<sizeof(s.gender)<<endl;   //1
    cout<<sizeof(s)<<endl;         //25?  NO --> 28
    system("pause");
    return 0;
}