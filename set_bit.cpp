//set the bit at particular position

#include<iostream>
using namespace std;

int main(){
    int num, position;
    cin>>num;
    cin>>position;
    int mask;
    mask = (1<<position);
    num = num | mask;
    cout<<num;
    return 0;
    
}
