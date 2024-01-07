
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int *bubble_sort(int[11]);
int *insertion_sort(int[11]);
int *selection_sort(int[11]);
void print_array ( int[11] );

int main(){
	while (1){
		int input[11] = {0};
		int i, method;
		int *array;
		printf ( "Please ten number:\n" );
		for ( i = 0 ; i < 10 ; i ++ ){
			scanf ( "%d", &input[i] );
		}
		printf ( "Please select sorting method:\n" );
		printf (  "(1)Bubble Sort (2)Insertion Sort (3)Selection Sort >>" );
		scanf ( "%d" , &method );
		switch ( method )
		{
		case 1:
			array = bubble_sort( input );
			for ( i = 0 ; i < 10 ; i ++ ){
				printf ( "%d " , *(array + i) );
			}
			printf ( "\n" );
			break;
		case 2:
			array = insertion_sort( input );
			for ( i = 0 ; i < 10 ; i ++ ){
				printf ( "%d " , *(array + i) );
			}
			printf ( "\n" );
			break;
		case 3:
			array = selection_sort( input );
			for ( i = 0 ; i < 10 ; i ++ ){
				printf ( "%d " , *(array + i) );
			}
			printf ( "\n" );
			break;
		}
	}
    return 0;
}

int *bubble_sort( int input[11] ){								//泡泡排序
	int i, j, temp;
	for ( i = 0 ; i < 9 ; i ++ ){
		for ( j = 0; j < 9 - i ; j ++ ){
			if ( input[j] > input[j + 1] ){
				temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
	}
	return input;
}
int *insertion_sort( int input[11] ){							//插入排序
	int i, j, temp;
	for ( i = 1 ; i < 10 ; i++ ){
		temp = input[i];
		for ( j = i ; j > 0 ; j -- ){
			if ( input[j - 1] > temp){
				input[j] = input[j - 1];
			}
			else {
				input[j] = temp;
				break;
			}
		}
		input[j] = temp;
	}
	return input;
}
int *selection_sort( int input[11] ){							//選擇排序
	int i, j, min, index, temp;
	for ( i = 0 ; i < 10 ; i ++ ){
		min = i; 
		for ( j = i ; j < 9 ; j ++ ){
			if ( input[j + 1] < input[min] ){
				min = j + 1;
			}
		}
		if ( min != i ){
			temp = input[i];
			input[i] = input[min];
			input[min] = temp;
		}
	}
	return input;
}

void print_array ( int input[11] ){
	int i;
	for ( i = 0 ; i < 10 ; i ++ ){
		printf ( "%d " , input[i]);
	}
	printf ( "\n" );
}