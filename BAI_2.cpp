#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>



//pointer function
 void swapperpointer(int *input1 , int *input2){
 	 //basic 
 	 int temp = *input1;
 	 *input1 = *input2;
 	 *input2 = temp;
 	 //======
 	 
 	 // cach dung
 	 //swapperpointer(&number , &number2); // POINTER
 }
 
 
 int main(int argc , const char* argv[]){
//-----------------------	
	// khoi tao con tro
	
	int number ;
	    int number2;
	    printf("\n nhap so thu nhat : ");
	    scanf("%d",&number );
	    printf("\n nhap so thu hai : "); // template thu 2 cu nhap di
	    scanf("%d",&number2 );
	    
    	int *numberptr = &number; // cach dung
	    printf("dia chi cua so 1 la : %p\n " , numberptr ); //%p la pointer
	    printf("dia chi cua bien so 1 la : %lu\n ",numberptr ); // dung unsignedlong  
	    printf("gia tri nam trong bien so 1 : %d \n", number );
    	printf("\n  gia tri BAN DAU la %d va %d\n ",number , number2 );
	    swapperpointer(&number , &number2); // POINTER
	    printf("\n \n gia tri LUC SAU la %d va %d",number,number2 );
	    
	    
	    
	    
	}