#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int d = (num & (1))!=0?1:0; //if number & 1 is 1 then odd and if number & 1 is 0 then even.
    if(d==1)
    cout<<"odd";
    else
    cout<<"even";
    return 0;
    
    
}
