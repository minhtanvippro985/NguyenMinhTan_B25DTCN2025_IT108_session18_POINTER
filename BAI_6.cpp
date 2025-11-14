#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>



void updatearray(int *arr, int giaTriMoi, int targetarr) {
    if (targetarr >= 0) {
        *(arr + targetarr) = giaTriMoi; 
    }
}
void printarray(int *arr , int size){
	printf("\n \n cac mang trong phan tu la : \n ");
for (int i = 0 ; i < size ; i++){
		printf("\n arr[%d] = %d ", i , *(arr + i) );
     }
}
int searcher(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return i;   //tra ve gia tri
        }
    }
    return -1;          
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
  int target;
    printf("\nnhap vi tri phan tu muon thay doi: ");
    scanf("%d", &target);

    int valuechange;
    printf(" \n gia tri moi: ");
    scanf("%d", &valuechange);

    updatearray(arr, valuechange, target);

    printf("\n sau khi cap nhat:\n");
    printarray(arr, size);

    int findValue;
    printf("\n gia tri ban muon tim: ");
    scanf("%d", &findValue);

    int vitri = searcher(arr, size, findValue);

    if (vitri != -1) {
        printf("\n %d thay tai vi tri arr[%d]\n", findValue, vitri);
    } else {
        printf("\n khong tim thay gia tri %d trong array.\n", findValue);
    }

    return 0;
}
	
	
	
