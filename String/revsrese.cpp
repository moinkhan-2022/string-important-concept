#include<iostream>
using namespace std ;
int main(){
    char a[100];
    char b[100];
    int i,j;
    cout<<"Enter the string"<<endl;
    cin.getline(a, 100); 
    for(i=0;a[i]!='\0';i++){

    }
    i=i-1;
    for( j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    b[j]='\0';
    cout<<"Reverse is = "<<b;
    return 0;
}