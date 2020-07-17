#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int a;
	FILE *p;
	if((p=fopen("D:\\abc.bin","r"))==NULL){
		cout<<"ERROR!";
		exit(1);
	}
	fread(&a,sizeof(int),1,p);
	cout<<"Your number is: "<<a;
	fclose(p);
}
