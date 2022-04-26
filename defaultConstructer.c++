#include<iostream>
using namespace std;
class test{
    int a,b;
    public:
    test(){
        a=1;
        b=2;
    }
    ~test(){
        cout<<"\ndeleted";
    }
    void print(){
        cout<<endl<<"a: "<<a<<endl<<"b: "<<b;
    }
};
int main(){
    test t;
    t.print();
    return 0;
}