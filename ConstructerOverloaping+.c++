#include<iostream>
using namespace std;
class A
{
  int a, b;
public:
    A ()
  {
    a = 10;
    b = 12;
  }
  void operator++()
  {
    a += 1;
    b += 1;

  }
  void display();
};
void A::display(){
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}

int main ()
{
  A t1;
  t1.display();
  ++t1;
  t1.display();

  cout << "Hello World";

  return 0;
}