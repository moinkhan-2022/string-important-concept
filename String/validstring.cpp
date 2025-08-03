#include<iostream>
using namespace std;
int valid(char *name){
    for(int i=0;name[i]!='\0';i++){
    if(!((name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z') || (name[i]>='0' && name[i]<='9'))){
        return 0;
    }
}
return 1;
}
int main(){
    char name[100];
    cout<<"Enter the string"<<endl;
    cin>>name;
    if(valid(name)){
        cout<<"valid string"<<endl;
    }
    else{
        cout<<"Invalid string";
    }
    return 0;
}