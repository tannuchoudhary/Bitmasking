#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count = 0;
    while(num>0){
        count += (num&1);
        num = num>>1;
    }
    cout<<count;
    return 0;
}
