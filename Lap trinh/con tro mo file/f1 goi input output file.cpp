#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	int n,a[100];
	FILE* f1;
	fopen("input.txt","r"); //mo file input + doc du lieu
	fscanf(f1,"%d",&n);
	
	for(int i=0;i<n;i++){
		fscanf(f1,"%d",&a[i]);
	}
	fclose(f1);
	FILE* f2;
	f2 = fopen("output.txt","w"); // luu du lieu vao file output
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			prinf("%d",a[i]);
		}
	}
	fclose(f2)
	return 0;
}
