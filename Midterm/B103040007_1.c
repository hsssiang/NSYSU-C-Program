#include <stdio.h>

int main(){
	int i = 103040;
	int q = 7;
	printf ( "Name: ¤ý·qµ¾\n" );
	printf ( "Student ID: %d00%d\n" , i ,q );
	printf ( "My secret code is %d" , ( i*q ) % 1000 );
	return 0;
}
