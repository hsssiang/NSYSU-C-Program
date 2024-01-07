
#include <stdio.h>

int main(){

	//???é¡?3.1
    int input, i, sum = 0 , squre ;                                                //å®????è®????
    printf ( "Question 3.1\n" );
    printf ( "-----------------------\n" );
    printf ( "Input the number of terms:" );
    scanf  ( "%d" , &input );  
	printf ( "THe squre natural up to %d terms are : " , input );
    for ( i = 1 ; i <= input ; i ++ ){												//??¨forè¿´å??è¨?ç®?å¹³æ??
		squre = i*i;
		printf ( "%d " , squre );
		sum += squre;																//è¨?ç®?ç¸½å??
	}
	
	printf ( "\n" );
	printf ( "The Sum of Squre Natural Number upto %d terms = %d\n" , input, sum );
    printf ( "-----------------------\n" );
    printf ( "\n" );

    return 0;
}