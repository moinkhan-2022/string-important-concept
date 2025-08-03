#include<iostream>
using namespace std;
int main(){
    int i,vcount=0,ccount=0;
    char s[]="how are you";
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I' ||s[i]=='O'|| s[i]=='U' ){
        vcount ++;
    }
    else if ((s[i]>='a' && s[i]<'z') || (s[i]>='A' && s[i]<='Z')){
        ccount ++;
    }
}
cout<<"vowel = "<<vcount<<endl;
cout<<"consonant = "<<ccount;
return 0;
}