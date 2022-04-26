#include<iostream>
#include<bits/stdc++.h>
#include<deque>
#include<algorithm>
using namespace std;
void display(deque<int>d){
    deque<int>dqu=d;
    for(auto i=dqu.begin();i!=dqu.end();i++){
        cout<<"\t "<<*i;
    }
    cout<<endl;

}


int main(){
    deque <int> dq;
    //we can declare an dequeue in the following way also
    /*int n;
    cout<<"enter the size od dequeue";
    cin>>n;
    for(int i=1;i<=n;i++){
        dq.push_back(i);
    }*/
    dq.push_back(10);
    dq.push_front(4);
    dq.push_back(5);
    dq.push_back(109);
    dq.push_front(87);
    dq.push_front(1);
    //dq.pop_back();
    //for(auto i=dq.begin();i!=dq.end();i++){
     //   cout<<*i<<" ";
    //}
    cout<<"display:   ";
    display(dq);
    
       // cout<<"\n\nreverse\n";
    cout<<endl;
    cout<<dq.size()<<endl;
    sort(dq.begin(),dq.end());
    cout<<"AFTER SORTING\n";
    display(dq);


}