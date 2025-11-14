#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 
 
void bubble(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {

                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
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
	bubble(arr, size);   // Gọi hàm sắp xếp (dùng con trỏ)

    printf(" \n \n sau khi sap xep:\n");
    printarray(arr, size);

}