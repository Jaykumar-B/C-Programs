#include<iostream>
class copy{
    int a,b;
    public:
    copy(int x,int y){
        a=x;
        b=y;
    
    }
    void display(){
          std:: cout<<a<<"\t"<<b<<"\n"; 
    }
    
};
int main(){
    copy c1(1,2);
    c1.display();
    std::cout<<"\n";
    copy c2=c1;
    c2.display();

}
