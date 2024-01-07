#include <stdio.h>

int main(){
	int a, b, input, result[12], i, swi =0;
	scanf ( "%d%d%d" , &a, &b, &input );
	for ( i = 0 ; i < 12 ; i ++ ){
		result[i] = -1;
	}
	if ( a == b && a != 0 ){
		result[3] = 1;
	}
	if ( a == b && a == 0 ){
		result[0] = 0;
		result[4] = 0;
		result[8] = 0;
	}
	if ( a != 0 && b == 0 ){
		result[1] = 0;
	}
	if ( a == 0 && b != 0 ){
		result[2] = 0;
	}
	if ( a != 0 || b == 0 ){
		result[6] = 0;
	}
	if ( a == 0 || b != 0 ){
		result[5] = 1;
		result[9] = 1;
	}
	if ( a != 0 || b != 0 ){
		result[7] = 1;
		result[10] = 1;
	}
	if ( a != b ){
		result[3] = 1;
		result[11] = 0;
	}
	if ( input == result[0] || input == result[1] || input == result[2] || input == result[3] ){
		printf ( "AND\n" );
		swi ++;
	}
	if ( input == result[4] || input == result[5] || input == result[6] || input == result[7] ){
		printf ( "OR\n" );
		swi ++;
	}
	if ( input == result[8] || input == result[9] || input == result[10] || input == result[11] ){
		printf ( "XOR\n" );
		swi ++;
	}
	if ( swi == 0 ){
		printf ( "IMPOSSIBLE" );
	}
	return 0;
}
