#include<iostream>
using namespace std;
class xyz;
class test{
    int a,b;
    public:
    test(){
        a=1;
        b=2;
    }
    friend class xyz;
};
class xyz{
    public:
    void display(test t){
        cout<<t.a;
        cout<<endl;
        cout<<t.b;
    }
};
int main(){
    test t1;
    xyz x;
    x.display(t1);
}