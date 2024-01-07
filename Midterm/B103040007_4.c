#include <stdio.h>

int main(){
	int input, i, j, triangle[100][100] = {0};
	scanf ( "%d" , &input );
	triangle[1][1] = 1;
	for ( i = 1 ; i <= input + 1 ; i ++ ){
		for ( j = 1 ; j <= i ; j ++ ){
				if ( j == 1 ){
					triangle[i][j] = 1;
				}
				else if ( i == 2 ){
					triangle[i][j] = 1;
				}
				else {
					triangle[i][j] = triangle[i-1][j-1] +triangle[i-1][j];
				}
		}
	}
	for ( i = 1 ; i <= input + 1 ; i ++ ){
		for ( j = 1 ; j <= i ; j ++ ){
			if ( j == 1 ){
				printf ( "%d", triangle[i][j] );
			}
			else printf ( "%8d", triangle[i][j] );
		}
		printf ( "\n" );
	}
	return 0;
}
