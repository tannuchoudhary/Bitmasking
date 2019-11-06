#include<iostream>
using namespace std;
int main(){
    int a[] = {5, 2, 6, 9, 2, 5, 6};
    int u = (5^2^6^9^2^5^6); //xor operator gives output 0 for same inputs.
    cout<<u;
    return 0;
}
