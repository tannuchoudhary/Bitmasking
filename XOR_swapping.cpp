#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter number 1 and number 2"<<endl;
    cin>>num1>>num2;
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    
    cout<<"number 1 = "<<num1<<endl<<"number 2 = "<<num2<<endl;
    return 0;
}
