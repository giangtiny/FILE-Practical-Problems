#include<iostream>
#include<stdlib.h>

using namespace std;

int main() { 
    int num; 
    FILE *p; 
    if ((p=fopen("D:\\fullname.txt","r")) == NULL){ 
        printf("Error!Can't open file."); 
        exit(1);
    }
    fscanf(p,"%d",&num); 
    cout<<"Your number is: "<<num; 
    fclose(p); 
} 


