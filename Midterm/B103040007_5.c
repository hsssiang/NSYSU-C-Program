#include <stdio.h>

int main(){
	int input_a, input_f, i, j, k, c, a_1, a_2;
	printf ( "Please input amplitude: " );
	scanf ( "%d" , &input_a );
	printf ( "Please input frequency: " );
	scanf ( "%d" , &input_f );
	if ( input_a % 2 != 0 ){
		a_1 = input_a ;
		a_2 = input_a - 1;
	}
	else {
		a_1 = input_a ;
		a_2 = input_a ;
	}
	for ( i = 0 ; i < input_f ; i ++ ){
		c = 1;
		for ( j = 0 ; j < a_1 ; j ++ ){
			for ( k = 0 ; k <= j ; k++  ){
				printf ( "%d" , c );
			}
			c ++;
			printf ( "\n" );
		}
		if ( input_a % 2 != 0 ){
			c -= 2;
		}
		else {
			c --;
		}
		for ( j = a_2 ; j > 0 ; j -- ){
			for ( k = j ; k > 0 ; k --  ){
				printf ( "%d" , c );
			}
			c --;
			printf ( "\n" );
		}
		printf ( "\n" );
	}
	return 0;
}
