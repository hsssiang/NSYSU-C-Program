
#include <stdio.h>

int main(){

	//???�?3.1
    int input, i, sum = 0 , squre ;                                                //�????�????
    printf ( "Question 3.1\n" );
    printf ( "-----------------------\n" );
    printf ( "Input the number of terms:" );
    scanf  ( "%d" , &input );  
	printf ( "THe squre natural up to %d terms are : " , input );
    for ( i = 1 ; i <= input ; i ++ ){												//??�for迴�??�?�?平�??
		squre = i*i;
		printf ( "%d " , squre );
		sum += squre;																//�?�?總�??
	}
	
	printf ( "\n" );
	printf ( "The Sum of Squre Natural Number upto %d terms = %d\n" , input, sum );
    printf ( "-----------------------\n" );
    printf ( "\n" );

    return 0;
}