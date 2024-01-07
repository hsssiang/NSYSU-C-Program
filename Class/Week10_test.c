
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

	//測驗01
	srand (time(0));
	int i, j, k, t, c = 0, counter = 0 , swi = 1;
	int rand_01[3][9], input_01[10];
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	for ( i = 0 ; i < 3 ; i ++ ){								
		for ( j = 0; j < 8 ; j ++ ){
			rand_01[i][j] = ( rand() % 10 ) ;
		}
	}
	printf ( "頭獎號碼:" );
	for ( j = 0; j < 8 ; j ++ ){
		printf ( "%d" , rand_01[0][j] );
	}
	printf ( "\n" );         
	printf ( "二獎號碼:" );
	for ( j = 0; j < 8 ; j ++ ){
		printf ( "%d" , rand_01[1][j] );
	}
	printf ( "\n" );         
	printf ( "三獎號碼:" );
	for ( j = 0; j < 8 ; j ++ ){
		printf ( "%d" , rand_01[2][j] );
	}
	printf ( "\n" );         
	printf ( "請輸入獎券號碼：");
	for ( i = 0 ; i < 8 ; i ++ ){								
		scanf ( "%1d" , &input_01[i] );
	}
	for ( i = 0 ; i < 8 ; i ++ ){								
		if ( input_01[i] == rand_01[0][i] ){
			counter ++;
		}
	}
	if ( counter == 8 && swi == 1){
		swi = 0;
		printf ( "恭喜中頭獎\n" );
	}
	counter = 0;
	for ( i = 0 ; i < 8 ; i ++ ){								
		if ( input_01[i] == rand_01[1][i] ){
			counter ++;
		}
	}
	if ( counter == 8 && swi == 1){
		swi = 0;
		printf ( "恭喜中二獎\n" );
	}
	counter = 0;
	for ( i = 0 ; i < 8 ; i ++ ){								
		if ( input_01[i] == rand_01[2][i] ){
			counter ++;
		}
	}
	if ( counter == 8 && swi == 1){
		swi = 0;
		printf ( "恭喜中三獎\n" );
	}
	if (swi == 1){
		printf ( "您沒中獎\n" );
	}
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 

	//測驗02													
	int input_02[6], number[6];
	printf ( "Test\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入學生身高：" );
	for ( i = 0 ; i < 6 ; i ++ ){
		scanf ( "%d" , &input_02[i] );
		number[i] = input_02[i];
	}
	for ( i = 1 ; i <= 6 ; i ++ ){
		for ( j = 1 ; j <= (7 - i) ; j ++ ){
			if  ( input_02[j-1] > input_02[j] ){
				int temp;
				temp = input_02[j-1];
				input_02[j-1] = input_02[j];
				input_02[j] = temp;
			}
		}
	}
	for ( i = 0 ; i < 6 ; i ++ ){
		printf ( "座位編號%d：	" , i + 1 );
		for ( j = 0 ; j < 6 ; j ++ ){
			if ( input_02[i] == number[j] ){
			printf ( "學號%d 身高%d\n" ,  j + 1 ,input_02[i] );
			}
		}
	}
	printf ( "----------------------------\n" );
	printf ( "\n" );    

	//實作03
	char input_03[30], system_03[256];
	char cmp[3][10];
	char linsert[] = "insert left ";
	char rinsert[] = "insert right ";
	char kinsert[] = "insert k ";
	char ldelete[] = "delete left ";
	char rdelete[] = "delete right ";
	char kdelete[] = "delete ";
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
	//scanf ( "%[^\n]" , input_03);
	j = 0;
	t = 0;
	for ( i = 0 ; i < 3 ; i ++ ){
		while ( input_03[j] == '\0' ){
			if ( input_03[j] == ' ' ){
				for ( k = t ; k < j ; k ++ ){
					cmp[i][c] = input_03[k]; 
					c ++;
				}
				cmp[i][c] = '\0'; 
				c = 0;
			}
			j ++;
		}
	}
	for ( i = 0 ; i < 3 ; i ++ ){
		printf ( "%s\n" , cmp[i] );
	}
	while (0){
		//if (strncmp (input_03[n],"R2xx",2) == 0)
    	{
      		//printf ("found %s\n",str[n]);
    	}
	}
	
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

	//實作04
	int input_x, input_y, one[2], two[2], three[2], four[2], rand_04[2];
	printf ( "Test 4\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入座標：" );
	scanf ( "(%d,%d)" , &input_x, &input_y );
	printf ( "正方形角座標為" );
	one[0] = input_x - 2;
	one[1] = input_y - 2;
	two[0] = input_x - 2;
	two[1] = input_y + 2;
	three[0] = input_x + 2;
	three[1] = input_y + 2;
	four[0] = input_x + 2;
	four[0] = input_y - 2;
	printf ( "(%d,%d)" , one[0] , one[1] );
	printf ( "(%d,%d)" , two[0] , two[1] );
	printf ( "(%d,%d)" , three[0] , three[1] );
	printf ( "(%d,%d)" , four[0] , four[1] );
	printf ( "\n" );  
	for ( i = 0 ; i < 4 ; i ++ ){
		rand_04[0] = rand() % 11; 
		rand_04[1] = rand() % 11; 
		if ( rand_04[0] <= one[0] ){
			if ( rand_04[0] == one[0] ){
				printf ( "(%d,%d)在正方形邊上\n" ,rand_04[0] , rand_04[1] );
			}
			else printf ( "(%d,%d)在正方形外\n" ,rand_04[0] , rand_04[1] );
		}
		else if ( rand_04[1] <= one[1] ){
			if ( rand_04[1] == one[1] ){
				printf ( "(%d,%d)在正方形邊上\n" ,rand_04[0] , rand_04[1] );
			}
			else printf ( "(%d,%d)在正方形外\n" ,rand_04[0] , rand_04[1] );
		}
		else if ( rand_04[0] >= four[0] ){
			if ( rand_04[0] == four[0] ){
				printf ( "(%d,%d)在正方形邊上\n" ,rand_04[0] , rand_04[1] );
			}
			else printf ( "(%d,%d)在正方形外\n" ,rand_04[0] , rand_04[1] );
		}
		else if ( rand_04[1] >= four[1] ){
			if ( rand_04[1] == four[1] ){
				printf ( "(%d,%d)在正方形邊上\n" ,rand_04[0] , rand_04[1] );
			}
			else printf ( "(%d,%d)在正方形外\n" ,rand_04[0] , rand_04[1] );
		}
		else printf ( "(%d,%d)在正方形內\n" ,rand_04[0] , rand_04[1] );
	}
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

    return 0;
}
