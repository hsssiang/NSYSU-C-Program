#include <stdio.h>
#include <math.h>

int main(){
	int month ;																		//宣告一個整數month
	printf ( "Question 2.2\n" );
    printf ( "-----------------------\n" );
	printf ( "請輸入月份：\n" );					
	scanf  ( "%d" , &month );
	if ( ( month % 2 != 0 && month < 8 ) || ( month % 2 == 0 && month > 7 ) ){		//判斷輸入的月份是否是31天							
		printf ( "%d月有31天\n" , month );
	}
	else if ( month == 2 ){																		
		printf ( "2月有28天\n" );									 				 //判斷輸入的月份是否是二月
	}
	else {
		printf ( "%d月有30天\n" , month );							 				 //判斷輸入的月份是否是30天	
	}
	return 0;
}