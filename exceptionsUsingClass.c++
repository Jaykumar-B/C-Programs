#include<iostream>
using namespace std;
class number{
    public:
    int n;
    string str;
    number(string s,int i){
        str=s;
        n=i;
    }
};
int main(){
    int a;
    try{
        cout<<"Enter a number";
        cin>>a;
        if(a<0){
            throw number("it's a -ve num",a);
        }
        else{
            throw number("it is a ve num",a);
        }

    }
    catch(number x){
        cout<<x.str;
        cout<<x.n;
    }
}