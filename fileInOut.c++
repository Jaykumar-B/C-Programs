#include<fstream>
using namespace std;
int main(){
    int a,b,c;
    ifstream fin;
    fin.open("a.txt");
    fin>>a>>b;
    c=a+b;
    ofstream fout;
    fout.open("e.txt");
    fout<<"hi welcome\n";
    fout<<a<<endl<<b<<endl;
    fout<<c<<endl;
    fin.close();
    fout.close();
}