#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 
 
 
 void sumcalculator(int *num1 , int * numb2 , int * ketqua ){
 	*ketqua = *num1 + *numb2;
 }

 //printf("dia chi cua so 1 la : %p\n " , numberptr ); //%p la pointer
	    // printf("dia chi cua bien so 1 la : %lu\n ",numberptr ); // dung unsignedlong  
	   // printf("gia tri nam trong bien so 1 : %d \n", number );
      //	int *numberptr = &number; // cach dung
	 // swapperpointer(&number , &number2); // POINTER
	// printf("\n \n gia tri LUC SAU la %d va %d",number,number2 );
int main(int argc , const char* argv[]){
//-----------------------	
	// khoi tao con tro
	
     	int number ;
	    int number2;
	    printf("\n nhap so thu nhat : ");
	    scanf("%d",&number );
	    printf("\n nhap so thu hai : "); // template thu 2 cu nhap di
	    scanf("%d",&number2 );
	    int final;
	    sumcalculator(&number , &number2 ,&final);
	    printf("\n \n tong hai so khi t dung pointer la %d \n" , final  );
	    
       
	    
	    
	    
	    
	}