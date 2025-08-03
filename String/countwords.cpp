#include<iostream>
using namespace std;
int main(){
    char s[]="HOW ARE YOU   BRO";
    int i=0,word=1;
    for(i;s[i]!='\0';i++){
if(s[i]==' ' && s[i-1]!=' ')
word ++;
    }
    cout<<word;
    return 0;
}