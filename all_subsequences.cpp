#include<iostream>
#include<cstring>

using namespace std;

void filter_char(char *, int);
void all_subsequence(char *);

void filter_char(char *s, int no){  
    int i=0;
    while(no>0){
        (no&1)?cout<<s[i]:cout<<"";
        i++;
        no = no>>1;
    }
    cout<<endl;
}
void all_subsequence(char *s){   //will give the no of subsequences
  int l = strlen(s);
  int range = (1<<l)-1;
  for(int i=0; i<range; i++){
      filter_char(s, i);       //will print all subsequences one by one.
  }
}
int main(){
    char s[] = "abc";
    all_subsequence(s);
    return 0;
}
