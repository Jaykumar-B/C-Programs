#include<iostream>
using namespace std;
class student{
    static int c;
    public:
    student(){
        c++;
    }
    void count(){
        cout<<"The no. of objects created are  "<<c;
    }
    
};
int student::c=0;
int main(){
    student s1,s2,s3,s4,s5;
    s1.count();

}