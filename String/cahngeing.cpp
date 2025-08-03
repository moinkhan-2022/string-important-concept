#include<iostream>
using namespace std;
int main(){
    char s[]="WELCOME";
    for(int i=0;s[i]!=0;i++){
        s[i]+=32;
    }
    cout<<s;
return 0;
}