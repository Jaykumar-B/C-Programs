#include<iostream>
using namespace std;
int main(){
    int a,b;
    try{
        cout<<"Enter a & b values";
        cin>>a>>b;
        if(b==0){
            throw 0;
        }
        else{
            cout<<"answer is "<<a/b;
        }
    }
    catch(int x){
        cout<<"Division by zero Error is Occured";
    }
    return 0;
}