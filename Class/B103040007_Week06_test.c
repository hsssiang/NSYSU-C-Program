
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	//雙週練習01
	int rand1_1, integer1_1, i_1_1 ;
	srand ( time(0) );
	printf ( "Test 1\n" );
	printf ( "----------------------------\n" );
	rand1_1 = ( rand() % 10 + 1 );											
	printf ( "產生的數字為%d\n" , rand1_1 );
	for ( integer1_1 = rand1_1 ; integer1_1 > 0 ; integer1_1 -- ){			
		for ( i_1_1 = 1 ; i_1_1 < integer1_1 ; i_1_1 ++ ){						
			printf ( " " );
		}
		for ( i_1_1 = 0 ; i_1_1 <= ( rand1_1 - integer1_1 ) ; i_1_1 ++ ){				
			printf ( "*" );
		}
		printf ( "\n" );
	}
	printf ( "----------------------------\n" );		
	printf ( "\n" );          					 

	//雙週練習02
	int input2_1, hour, amount = 0 , min;
	printf ( "Test 2\n" );
	printf ( "----------------------------\n" );									
	printf ( "Time (minutes):");
	scanf  ( "%d" , &input2_1 );
	if ( input2_1 > 0 ){
		hour = input2_1 / 60;
		min  = input2_1 % 60;
		if ( hour == 0 ){
			amount = 100;
		}
		else if ( hour == 1 && min <= 10 ){
			amount = 100;
		}
		else if ( (hour == 1 && min > 10) || (hour == 2 && min <= 10) ){
			amount = 170;
		}
		else if ( (hour == 2 && min > 10) || (hour == 3 && min <= 10) ){
			amount = 220;
		}
		else if ( input2_1 > 190 ){
			amount = 220 + 20 * ( hour - 2 );
		}
		printf ( "The parking fee is %d dollar(s)\n" , amount );
	}
	else printf ( "Error!\n" );
	printf ( "----------------------------\n" );		
	printf ( "\n" );
	
	//雙週練習03
	int a, b, c, i, j, temp, input[3], max = 0;
	printf ( "Test 3\n" );
	printf ( "----------------------------\n" );									
	printf ( "Input01:");
	scanf  ( "%d" , &input[0] );
	printf ( "Input02:");
	scanf  ( "%d" , &input[1] );
	printf ( "Input03:");
	scanf  ( "%d" , &input[2]);
	for ( i = 1 ; i <= 3 ; i ++ ){
		for ( j = 1 ; j <= (3 - i) ; j ++ ){
			if  ( input[j-1] > input[j] ){
				temp = input[j-1];
				input[j-1] = input[j];
				input[j] = temp;
			}
		}
	}
	a = input[0]*input[0];
	b = input[1]*input[1];
	c = input[2]*input[2];
	if ( input[0] + input[1] > input[2] ){
		if ( a + b < c ){
			printf ( "鈍角三角形\n" );
		}
		else if ( a + b == c ){
			printf ( "直角三角形\n" );
		}
		else if ( a + b > c ){
			printf ( "鋭角三角形\n" );
		}
	}
	else {
		printf ( "無法形成三角形\n" );
	}
	printf ( "----------------------------\n" );		
	printf ( "\n" );

	//雙週練習04									
	int integer4_1 , month , day , count , total = 0;
	printf ( "Test 4\n" );
	printf ( "----------------------------\n" );										
	scanf  ( "%d %d %d" , &integer4_1 , &month , &day );						
	if ( (integer4_1 % 4 == 0) && (integer4_1 % 100 != 0) || (integer4_1 % 400 == 0) && (integer4_1 % 3200 != 0) ){			
		printf ( "It's a leep year\n");
		for ( count = 1 ; count < month ; count ++ ){
			if ( count == 1 || count == 3 || count == 5 || count == 7 || count == 8 || count == 10 || count == 12 ){
				total += 31;
                printf ( "%d\n" , total );
			}
			else if ( count == 2 ){
				total += 29;
                printf ( "%d\n" , total );
			} 
			else {
                total += 30;
                printf ( "%d\n" , total );
            }
		}
		total += day;
	}
	else {
		printf ( "It's common year\n");
		for ( count = 1 ; count < month ; count ++ ){
			if ( count == 1 || count == 3 || count == 5 || count == 7 || count == 8 || count == 10 || count == 12 ){
				total += 31;
                printf ( "%d\n" , total );
			}
			else if ( count == 2 ){
				total += 28;
                printf ( "%d\n" , total );
			} 
			else {
                total += 30;
                printf ( "%d\n" , total );
            }
		}
		total += day;
	}					
	printf ( "It's the %dth day in %d\n" , total , integer4_1 );													
	printf ( "----------------------------\n" );		
	printf ( "\n" ); 

    return 0;
}