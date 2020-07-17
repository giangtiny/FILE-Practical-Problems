#include<iostream> 
#include<stdlib.h> 

using namespace std;

int main(){ 
    int a; 
    FILE *p; 
    if((p=fopen("D:\\fullname.txt","w+"))==NULL){ 
        cout<<"Error!Can't open file."; 
        exit(1);
    } 
    cout<<"Enter a number: ";
    cin>>a;
    fprintf(p,"%d",a);
    fclose(p); 
}

