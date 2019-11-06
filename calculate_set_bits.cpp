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


/*or you can also apply second method i.e (n)(n-1) rule which is much faster and optimized*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int count = 0;
    while(num){
        num = (num&(num-1));
        count++;
    }
    cout<<count;
    return 0;
}
