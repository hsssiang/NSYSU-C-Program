
#include <stdio.h>

int main(){

	//穨3.1
    int input, i, sum = 0 , squre ;                                               
    printf ( "Question 3.1\n" );
    printf ( "-----------------------\n" );
    printf ( "Input the number of terms:" );
    scanf  ( "%d" , &input );  
	printf ( "THe squre natural up to %d terms are : " , input );
    for ( i = 1 ; i <= input ; i ++ ){												//ノfor癹伴т单块计计キよ
		squre = i*i;
		printf ( "%d " , squre );
		sum += squre;																//ノsum仓璸衡ㄓキよ计
	}
	
	printf ( "\n" );
	printf ( "The Sum of Squre Natural Number upto %d terms = %d\n" , input, sum );
    printf ( "-----------------------\n" );
    printf ( "\n" );

    return 0;
}