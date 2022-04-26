#include<fstream>
#include<iostream>
using namespace std;
int main(){
    int num=0;
    char ch;
    ifstream file;
    file.open("out.txt",ios::in);
    if(!file){
        cout<<"can't open file";
        return 1;
    }
    while(!file.eof()){
        file.get(ch);
        cout<<ch;
        num++;
    }
    cout<<endl<<num;
    file.close();
    return 0;

}