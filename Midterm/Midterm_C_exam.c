#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	//test01
	int string_1, i_1, swi_1 = 0 ;
	char input_1 [100];
	printf ( "_____Test 01_____\n\n" );
	printf ( "Input a number:" );
	scanf ( "%s" , input_1 );
	string_1 = strlen(input_1);
	for ( i_1 = 0 ; i_1 < string_1 ; i_1 ++ ){
		if ( input_1[i_1] == '.' && swi_1 == 0 ) {
			printf ( "Entered number is a Float.\n" );
			swi_1 = 1;
		}
	}
	if ( swi_1 == 0 ){
		printf ( "Entered number is a Integer.\n" );
	}
	printf ( "_________________\n\n" );
	
	//test02
	int i_2, input_2, x_2, y_2, z_2, k_2;
	printf ( "_____Test 02_____\n\n" );
	printf ( "Input n:" );
	scanf ( "%d" , &input_2 );
	for ( i_2 = 1 ; i_2 <= input_2  ; i_2 ++ ){
		if ( i_2 > 999 ){
			x_2 = i_2 /1000;
			y_2 = (i_2 %1000)/100;
			z_2 = (i_2 %100)/10;
			k_2 = (i_2 %10);
			if ( x_2*x_2*x_2*x_2 + y_2*y_2*y_2*y_2 + z_2*z_2*z_2*z_2 + k_2*k_2*k_2*k_2 == i_2 ){
				printf ( "%d\n" , i_2 );
			}
		}
		else if ( i_2 > 99 ){
			x_2 = (i_2 /100);
			y_2 = (i_2 %100)/10;
			z_2 = (i_2 %10);
			if ( x_2*x_2*x_2 + y_2*y_2*y_2 + z_2*z_2*z_2 == i_2 ){
				printf ( "%d\n" , i_2 );
			}
		}
		else if ( i_2 > 9 ){
			x_2 = (i_2 /10);
			y_2 = (i_2 %10);
			if ( x_2*x_2 + y_2*y_2 == i_2 ){
				printf ( "%d\n" , i_2 );
			}
		}
		else if ( i_2 <= 9 ){
			printf ( "%d\n" , i_2 );
		}
	}
	printf ( "_________________\n\n" );
	
	//test03
	int arry_3[100][100] = {0};
	int input_3, i_3, j_3;
	printf ( "_____Test 03_____\n\n" );
	printf ( "Input the size of the square matrix : " );
	scanf ( "%d" , &input_3 );
	printf ( "Input elements in the first matrix : \n" );
	for ( i_3 = 0 ; i_3 < input_3 ; i_3 ++ ){
		for ( j_3 = 0 ; j_3 < input_3 ; j_3 ++ ){
			printf ( "element - [%d],[%d] :" , i_3 , j_3 );
			scanf ( "%d" , &arry_3[i_3][j_3] );
		}
	}
	printf ( "\n" );
	printf ( "\n" );
	printf ( "The matrix is : \n" );
	printf ( "\n" );
	for ( i_3 = 0 ; i_3 < input_3 ; i_3 ++ ){
		for ( j_3 = 0 ; j_3 < input_3 ; j_3 ++ ){
			printf ( "%2d " , arry_3[i_3][j_3] );
		}
		printf ( "\n" );
	}
	printf ( "\n" );
	printf ( "Setting zero in lower triangular matrix\n" );
	printf ( "\n" );
	for ( i_3 = 0 ; i_3 < input_3 ; i_3 ++ ){
		for ( j_3 = 0 ; j_3 < input_3 ; j_3 ++ ){
			if ( !(i_3 > j_3) ){
				printf ( "%2d " , arry_3[i_3][j_3] );
			}
			else {
				arry_3[i_3][j_3] = 0;
				printf ( "%2d " , arry_3[i_3][j_3] );
			}
		}
		printf ( "\n" );
	}
	printf ( "_________________\n\n" );
	
	//test04
	char input_4[10000] ,other_4, swi_4 = 0;
	int counter_4 = 0, i_4;
	printf ( "_____Test 04_____\n\n" );
	printf ( "Enter your line:\n" );
	fflush (stdin);
	scanf ( "%s" , input_4 );
	scanf ( "%c" , &other_4 );
	while ( other_4 != '.' && swi_4 == 0 ){
		if ( other_4 == ' ' ){
			scanf ( "%s" , &input_4 );
			counter_4 ++;
		}
		for ( i_4 = 0 ; i_4 < strlen(input_4) ; i_4 ++ ){
			if ( input_4[i_4] == '.'  ){
			 swi_4 = 1;
			}
		}
		if  ( swi_4 == 0 ){	
			scanf ( "%c" , &other_4 );
		}
	}
	printf ( "%d words!\n" , counter_4 + 1 );
	printf ( "_________________\n\n" );
	
	//test05
	int a, b, c, d, swi_5 = 0;
	int input_5, i_5 = 0, j_5, q_5, p_5, x_5[1000], y_5[1000];
	printf ( "_____Test 05_____\n\n" );
	printf ( "Enter one number: " );
	scanf ( "%d" , &input_5 );
	j_5 = input_5*2;
	q_5 = input_5*2;
		for ( j_5 = input_5*2 ; j_5 < 1000000 ; j_5 ++ ){
			for ( q_5 = input_5*2 ; q_5 > 1 ; q_5 -- ){
				a = j_5 * q_5;
				b = j_5 + q_5;
				c = (j_5 * q_5)/(j_5 + q_5);
				d = (j_5 * q_5)%(j_5 + q_5);
				if ( c == input_5 && d == 0 ){
					x_5[i_5] = j_5;
					y_5[i_5] = q_5;
					i_5 ++;
					if ( j_5 / q_5 == input_5 ){
						swi_5 = 1;
					}
					break;
				}
			}
			if ( swi_5 == 1 ){
				break;
			}
		}
	printf ( "%d pairs\n" , i_5);
	for ( p_5 = i_5-1 ; p_5 >= 0 ; p_5-- ){
		printf ( "1/%d = 1/%d + 1/%d\n" , input_5, x_5[p_5] , y_5[p_5] );
	} 
printf ( "_________________\n\n" );
	
	return 0;
}
