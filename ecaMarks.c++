/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class eca;
class marks{
    int m1,m2,m3;
    public:
    void readdata(){
        cout<<"Enter marks of a student: "<<endl;
        cin>>m1>>m2>>m3;
    }
    friend void grade(marks,eca);
};
class eca{
   
    public:
     int e1,e2;
    void readmarks(){
        cout<<"Enter Eca marks";
        cin>>e1>>e2;
        cout<<e1<<" "<<e2;
    }
};
void grade(marks m,eca e){
    float t;
    t=(m.m1+m.m2+m.m3+e.e1+e.e2)/5;
    if(t>90){
        cout<<"Grade A";
    }
    else if(t>80){
        cout<<"GRADE B";
    }
    else if(t>70){
        cout<<"GRADE C";
    }
    else if(t>60){
        cout<<"GRADE D";
    }
    else{
        cout<<"FAIL";
    }
}
int main()
{
    marks m;
    eca e;
    m.readdata();
    e.readmarks();
    grade(m,e);
    return 0;
    

}