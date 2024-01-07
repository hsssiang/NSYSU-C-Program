
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){

    int input, i, random;   
	int count [11] = {0};     
	srand ( time(0) );                                  
    printf ( "Question 3.2\n" );
    printf ( "-----------------------\n" );
    printf ( "Input the number:" );
    scanf ( "%d" , &input );
	for ( i = 0 ; i < input ; i ++ ){
		random = ( rand() % 10 + 1 );
		count [ random ] ++;
	}
	for ( i = 1 ; i < 11 ; i ++ ){
		printf ( "[%d] : %d\n" , i , count[i] );
	}
    printf ( "-----------------------\n" );
    printf ( "\n" );

    return 0;
}
