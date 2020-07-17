#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int a;
	FILE *p;
	if((p=fopen("D:\\abc.bin","w"))==NULL){
		cout<<"ERROR!";
		exit(1);
	}
	cout<<"Enter a number: ";
	cin>>a;
	fwrite(&a,sizeof(int),1,p);
	fclose(p);
}
