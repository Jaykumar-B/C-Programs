#include<iostream>
using namespace std;
class BS{
    public:
    BS(){
        cout<<"This is a base class.."<<endl;
    }
};
class DC:public BS{
    public:
    DC(){
        cout<<"THIS IS A DERIVED CLASS.."<<endl;
    }
};
int main(){
  DC d;
  return 0;
}