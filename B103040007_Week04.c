#include <stdio.h>
#include <math.h>

int main(){

	//實作01
	float pi_f , Vr1 , r1 = 0.008;
    double pi_d , Vr2 , r2 = 0.008;
    pi_f = (4.0/3.0)*(3.14);											//計算體積公式用float
	pi_d = (4.0/3.0)*(3.14);											//計算體積公式用double
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	printf ( "體積f：%.12f\n" ,  (pi_f*r1*r1*r1) );				
	printf ( "體積d：%.12lf\n" , (pi_d*r2*r2*r2) );			  	   	
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 
	
	//實作02
	char input;
	printf ( "Exercise 2\n" );
	printf ( "----------------------------\n" );
	printf ( "Input a letter:" );				
	scanf  ( "%c" , &input );											//讀入一個字母
	printf ( "ASCII code of G is %d\n" , input );						//印出ASCII碼			  	   	
	printf ( "----------------------------\n" );	
	printf ( "\n" );

	//實作03
	float num;
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
	printf ( "Size of num is \\ %zu bytes  \\ \n" , sizeof(num) );	  	//印出float的大小   	
	printf ( "----------------------------\n" );	
	printf ( "\n" );

	//實作04
	float num04 = 52.782;
	printf ( "Exercise 4\n" );
	printf ( "----------------------------\n" );
	printf ( "%+09.4f\n" , num04 );										//印出九位加上正號以及小數點後四位
	printf ( "----------------------------\n" );	
	printf ( "\n" );
	
	//實作05
	int input_05;
	char input_051;
	printf ( "Exercise 5\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入一個數字："  );	  
	scanf  ( "%d" , &input_05 );
	printf ( "請輸入一個字母："  );
	fflush (stdin);														//清除標準輸入區
	scanf  ( "%c" , &input_051 );
	printf ( "我有%d個%c\n" , input_05 , input_051 );
	printf ( "----------------------------\n" );	
	printf ( "\n" );

	//實作06
	int input_06;
	printf ( "Exercise 6\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入一個數字："  );	  
	scanf  ( "%d" , &input_06 );
	printf ( "%d除以13的商數為%d, 餘數為%d\n" , input_06 , input_06/13 , input_06%13 );		//印出除以13的商數和餘數
	printf ( "----------------------------\n" );	
	printf ( "\n" );

	//實作07
	int input_07;
	printf ( "Exercise 7\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入一個數字："  );	  
	scanf  ( "%d" , &input_07 );
	if ( input_07 > 60 ) {												//用判斷if函式判斷是否大於60分
		printf ( "及格了\n" );											 //如果大於60分印出及格了
	}
	else {																//否則印出該分數加不及格
		printf ( "該分數%d為不及格\n" , input_07 );
	}
	printf ( "----------------------------\n" );	
	printf ( "\n" );
	
    return 0;
}