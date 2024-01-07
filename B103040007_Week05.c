
#include <stdio.h>

int main(){

	//實作01
	int integer1_1;
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入一個整數字(0-100)：");
	scanf  ( "%d" , &integer1_1 );
	if ( integer1_1 >= 0 && integer1_1 <= 33 ) {						//判斷是否在幸運區(0-33)
		printf ( "幸運區\n" );
	}
	else if ( integer1_1 > 33 && integer1_1 < 72 ) {					//判斷是否在GG區域
		printf ( "GG了\n" );
	}
	else if ( integer1_1 >= 72 && integer1_1 <= 100 ) {					//判斷是否在幸運區(72-100)
		printf ( "幸運區\n" );
	}
	else {
		printf ( "輸入的數字不在範圍，請重新輸入\n" );					//判斷數字是否在其他範圍
	}
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 

	//實作02
	int integer2_1;
	printf ( "Exercise 2\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入一個整數：");
	scanf  ( "%d" , &integer2_1 );
	if ( integer2_1 < 0 ) {
		printf ( "絕對值為：%d\n" , integer2_1*(-1) );					 //判斷是否為負數並輸出絕對值
	}
	else {
		printf ( "絕對值為：%d\n" , integer2_1);
	}
	printf ( "----------------------------\n" );	
	printf ( "\n" );     

	//實作03
	int integer3_1;
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入1~13整數：");
	scanf  ( "%d" , &integer3_1 );
	if ( integer3_1 > 7 ){												//判斷是否大於7							
		printf ( "該數大於7\n" );
	}
	else if ( integer3_1 == 7 ){										//判斷是否等於7	
		printf ( "該數等於7\n" );
	}
	else {
		printf ( "該數小於7\n" );										//判斷是否等於7	
	}
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

	//實作04
	int integer4_1;
	printf ( "Exercise 4\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入年份：");											
	scanf  ( "%d" , &integer4_1 );						
	if ( (integer4_1 % 4 == 0) && (integer4_1 % 100 != 0) || (integer4_1 % 400 == 0) && (integer4_1 % 3200 != 0) ){				//判斷是否閏年 
		printf ( "%d年是閏年\n" , integer4_1 );
	}
	else printf ( "%d年不是閏年\n" , integer4_1 );																				//如果不是閏年，印出不是閏年 
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作05
	int integer5_1;
	printf ( "Exercise 5\n" );
	printf ( "----------------------------\n" );
	printf ( "輸入一個數字：");
	scanf  ( "%d" , &integer5_1 );
	switch ( integer5_1 )
	{
	case 99:																					//用switch判斷是否為99 
		printf ( "輸入了99\n" );
		break;
	
	default:
		printf ( "輸入了例外數字：%d\n" , integer5_1 );
		break;
	}
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作06
	int switch_break = 0 ;	
	char character6_1;											
	printf ( "Exercise 6\n" );
	printf ( "----------------------------\n" );
	fflush(stdin);																				//清除標準輸入區 
	do																							//用do-while重複執行 
	{
		printf ( "輸入一個字元：" );
		scanf  ( "%c" , &character6_1 );
		switch ( character6_1 )																	//用switch判斷輸入的字元 
		{
		case 'A' :
			printf ( "進入新增\n" );
			break;
		case 'a' :
			printf ( "進入新增\n" );
			break;
		case 'D' :
			printf ( "進入刪除\n" );
			break;
		case 'd' :
			printf ( "進入刪除\n" );
			break;
		case 'U' :
			printf ( "進入修改\n" );
			break;
		case 'u' :
			printf ( "進入修改\n" );
			break;
		case 'Q' :
			printf ( "離開系統\n" );
			switch_break = 1;																	//用來判斷結束while
			break;
		case 'q' :
			printf ( "離開系統\n" );
			switch_break = 1;																	//用來判斷結束while 
			break;
		default:
			printf ( "沒有這個選項！\n" );
			break;
		}
		fflush(stdin);																			//清除標準輸入區 
	} while ( switch_break != 1 );
	printf ( "----------------------------\n" );		
	printf ( "\n" );
	
	//實作07
	int integer7_1, integer01, integer02;
	printf ( "Exercise 7\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入一個兩位數：");
	scanf  ( "%d" , &integer7_1 );
	printf ( "英文為：");
	if ( integer7_1 <= 20 ){																	//獨立處理10-20 
		switch (integer7_1)
		{
		case 10:
			printf ( "ten" );
			break;
		case 11:
			printf ( "eleven" );
			break;
		case 12:
			printf ( "twelve" );
			break;
		case 13:
			printf ( "thirteen" );
			break;
		case 14:
			printf ( "fourteen" );
			break;
		case 15:
			printf ( "fifteen" );
			break;
		case 16:
			printf ( "sixteen" );
			break;
		case 17:
			printf ( "seventeen" );
			break;
		case 18:
			printf ( "eighteen" );
			break;
		case 19:
			printf ( "nineteen" );
			break;
		case 20:
			printf ( "twenty" );
			break;
		}
	}
	else {
		integer01 = integer7_1 / 10;															//判斷十位數
		integer02 = integer7_1 % 10;															//判斷個位數 
		switch (integer01)
		{
			case 2:
				printf ( "twenty" );
				break;
			case 3:
				printf ( "thirty" );
				break;
			case 4:
				printf ( "forty" );
				break;
			case 5:
				printf ( "fifty" );
				break;
			case 6:
				printf ( "sixty" );
				break;
			case 7:
				printf ( "seventy" );
				break;
			case 8:
				printf ( "eighty" );
				break;
			case 9:
				printf ( "ninety" );
				break;
		}
		if ( integer02 != 0){																	//判斷是否需要"-" 號 
			printf ( "-" );
		}
		switch (integer02)
		{
			case 1:
				printf ( "one" );
				break;
			case 2:
				printf ( "two" );
				break;
			case 3:
				printf ( "three" );
				break;
			case 4:
				printf ( "four" );
				break;
			case 5:
				printf ( "five" );
				break;
			case 6:
				printf ( "six" );
				break;
			case 7:
				printf ( "seven" );
				break;
			case 8:
				printf ( "eight" );
				break;
			case 9:
				printf ( "nine" );
				break;
			case 0:
				printf ( "" );
				break;
		}
	}
	printf ( "\n" );
	printf ( "----------------------------\n" );		
	printf ( "\n" ); 

    return 0;
}
