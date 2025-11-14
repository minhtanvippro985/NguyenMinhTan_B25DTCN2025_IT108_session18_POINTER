#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>



int main(int argc , const char* argv[]){
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
	
	
}