#include<iostream>
using namespace std;
int main(){
    int num, position, mask;
    cin>>num;
    cin>>position;
    mask = (1<<position);
    (num&mask)?cout<<"1":cout<<"0";
    return 0;
}
