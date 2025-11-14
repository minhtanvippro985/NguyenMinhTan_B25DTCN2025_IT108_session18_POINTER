#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void printarray(int *arr , int size){
	printf("\n \n cac mang trong phan tu la : \n ");
for (int i = 0 ; i < size ; i++){
		printf("\n arr[%d] = %d ", i , *(arr + i) );
     }
}

int main(){
	
	int size;
	printf("\n \n nhap size cua ban :  ");
	scanf("%d",&size );
	printf("size cua ban la %d \n \n \n ", size );
	
	
	
	int arr[size];
 	int *arrPtr = arr;
	
  	for (int i = 0 ; i < size ; i++){
		printf("\ninput arr[%d]: ", i );
		scanf("%d",arrPtr + i ); 
	}
	printarray(arr , size);
	
}