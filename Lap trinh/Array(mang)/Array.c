#include <stdio.h>
#include <stdlib.h>
void InsertEnd(int a[], int* n){
	printf("Enter a new number: "); scanf("%d", &a[*n]);
	(*n)++;
}
void InsertIndex(int a[], int* n){
	int k;
	printf("Enter index: "); scanf("%d", &k);
	int i=*n;
	while(i>k){
		a[i]= a[i-1];
		i--;
	}
	printf("Enter a new number: "); scanf("%d", &a[k]);
	(*n)++;
}
void deleteIndex(int a[], int* n) {
	int k;
	printf("Enter index: ");
	scanf("%d",&k);

	for(int i=k+1; i<(*n); i++)
		a[i-1]=a[i];
	(*n)--;
}
void deleteValue(int a[], int* n) {
	int x;
	printf("Enter value: ");
	scanf("%d",&x);

	for(int i=0; i<(*n); i++)
		if(a[i]==x) {
			for(int j=i+1; j<(*n); j++)
				a[j-1]=a[j];
			(*n)--;
			i--;
		}
}
void sortAscending(int a[], int n){
	int t;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n;j++){
			if(a[i]>a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
void sortDescending(int a[], int n){
	int t;
	for(int i=0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(a[i]<a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
void output(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
}
int main(int argc, char *argv[]) {
	int a[100]= {5,4,4,-3,4,8},n=6, choice;
	do {

		printf("\n===== Menu =====\n");
		printf("1.Insert a new element to the end of the array\n");
		printf("2.Insert 1 element to index k\n");
		printf("3.Delete index\n");
		printf("4.Delete value\n");
		printf("5.Sort the array to ascending order\n");
		printf("6.Sort the array to descending order\n");
		printf("0.Quit\n");
		printf("Your choice: ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				InsertEnd(a,&n);
				output(a,n);
				break;
			case 2:
				InsertIndex(a,&n);
				output(a,n);
				break;
			case 3:
				deleteIndex(a,&n);
				output(a,n);
				break;
			case 4:
				deleteValue(a,&n);
				output(a,n);
				break;
			case 5:
				sortAscending(a,n);
				output(a,n);
				break;
			case 6:
				sortDescending(a,n);
				output(a,n);
				break;
		}
	} while(choice!=0);
	printf("Good bye!");
	
	return 0;
}
