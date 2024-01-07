
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void sort ( int * , int *, int *);

int main(){

	//實作01
	int a = 500;
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	printf ( "Value of a = %d\n" , a );
	printf ( "Address of a = %p\n" , &a );
	printf ( "Value of adress '&a' = %d\n", *&a );						//印出該地址的值
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 

	//實作02													
	int n1 = 5, n2 = 3; 
	int * n1_p = &n1;
	int * n2_p = &n2;
	printf ( "Exercise 2\n" );
	printf ( "----------------------------\n" );
	printf ( "n1:" );
	scanf ( "%d" , &n1 );
	printf ( "n2:" );
	scanf ( "%d" , &n2 );
	printf ( "n1的地址:%p\n" , n1_p );
	printf ( "n2的地址:%p\n" , n2_p );
	printf ( "%d x %d = %d\n" , *n1_p, *n2_p, (*n1_p * *n2_p) );		//使用指標計算乘法
	printf ( "----------------------------\n" );
	printf ( "\n" );    

	//實作03
	int input3_1, input3_2, input3_3;
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入三變數（eg. 3 1 2）" );
	scanf  ( "%d %d %d" , &input3_1, &input3_2, &input3_3);
	printf ( "n1 = %d\n" , input3_1);
	printf ( "n2 = %d\n" , input3_2);
	printf ( "n3 = %d\n" , input3_3);
	sort   ( &input3_1, &input3_2, &input3_3 );							//傳入sort函式
	printf ( "三數由小排到大：\n" );
	printf ( "n1 = %d\n" , input3_1);
	printf ( "n2 = %d\n" , input3_2);
	printf ( "n3 = %d\n" , input3_3);
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

	//實作04
	char array[6] = {'a','b','c','d','e'};
	int i;
	char *c_pointer[6] = {NULL}; 
	printf ( "Exercise 4\n" );
	printf ( "----------------------------\n" );
	for ( i = 0 ; i < 5 ; i ++ ){
		printf ( "陣列%d的值為:%c\n" , i+1, array[i] );
		printf ( "陣列%d的地址為:%p\n" , i+1, &array[i] );
		c_pointer[i] = &array[i];										//將地址傳入指標中
		switch ( i )
		{
		case 0:
			printf ( "指標ㄧ指向的地址為:%p\n" ,c_pointer[i] );
			break;
		case 1:
			printf ( "指標二指向的地址為:%p\n" ,c_pointer[i] );
			break;
		case 2:
			printf ( "指標三指向的地址為:%p\n" ,c_pointer[i] );
			break;
		case 3:
			printf ( "指標四指向的地址為:%p\n" ,c_pointer[i] );
			break;
		case 4:
			printf ( "指標五指向的地址為:%p\n" ,c_pointer[i] );
			break;
		}
		printf ( "\n" );  
	}
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作05
	char input_5[1000];
	char *input_5_p[2];
	printf ( "Exercise 5\n" );
	printf ( "----------------------------\n" );
	fflush ( stdin );
	printf ( "輸入字串：" );
	gets ( input_5 );
	input_5_p[0] = input_5;
	printf ( "反轉字串：" );
	for ( i = strlen(input_5) - 2 ; i >= 0 ; i -- ){
		printf ( "%c" , *(input_5_p[0] + i) );							//用地址去計算反轉的字元位置
	}
	printf ( "\n" ); 
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

    return 0;
}

void sort ( int * n1, int * n2, int * n3 ){								//泡沫排序
	int sort[3], i , j, temp = 0;
	sort[0] = *n1;
	sort[1] = *n2;
	sort[2] = *n3;
	for ( i = 1 ; i < 3 ; i ++ ){
		for ( j = 0 ; j < 3 - i ; j ++ ){
			if ( sort[j] > sort[j + 1] ){
				temp = sort[j+1];
				sort[j+1] = sort[j];
				sort[j] = temp;
			}
		}
	}
	*n1 = sort[0];
	*n2 = sort[1];
	*n3 = sort[2];
}