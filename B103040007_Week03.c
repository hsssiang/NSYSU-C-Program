
#include <stdio.h>

int main(){

	//實作01
	int a = 22;
	float b = 3.14;
	char c = 'A';
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	printf ( "年齡：%d\n" , a );						//印出 年齡22歲		
	printf ( "圓周率：%f\n" , b );			  	   		//印出 圓周率3.14
	printf ( "第一個英文字母：%c\n" , c );				  //印出 第一個英文字母A
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 

	//實作02
	int n1 = 123;
	float  f1 = 123.4567;
	double f2 = 123.4567;
	printf ( "Exercise 2\n" );
	printf ( "----------------------------\n" );
	printf ( "整數n1：%d\n" , n1 );						//印出整數n1 123
	printf ( "----------------------------\n" );
	printf ( "%%8d  結果：%8d\n" , n1 );				//印出八個位元結果
	printf ( "%%.8d 結果：%.8d\n" , n1);				//印出小數點後八位（？）結果
	printf ( "%%06d 結果：%06d\n" , n1);				//印出退六位補零的結果
	printf ( "---------我是分隔線-----------\n" );
	printf ( "單精度浮點數f1：%f\n" , f1 );				 //印出單精度浮點數f1
	printf ( "雙精度浮點數f2：%lf\n" , f2);				 //印出雙精度浮點數f2
	printf ( "----------------------------\n" );
	printf ( "%%.4f   結果：%.4f\n" , f1  );			//印出小數點後四位的結果
	printf ( "%%10.4f 結果：%10.4f\n" , f1);			//印出十個位元&&小數點後四位的結果
	printf ( "%%lf    結果：%lf\n" , f2   );			//印出雙精度浮點數的結果
	printf ( "\n" );    
	printf ( "----------------------------\n" );
	printf ( "\n" );    

	//實作03
	int d = 10;
	int e = 8;
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
	printf ( "a = %d\n" , d );							//印出數字A
	printf ( "b = %d\n" , e );			  	   			//印出數字B
	printf ( "兩數之和：%d\n" , ( d + e ) );			 //兩數之和
	printf ( "兩數之積：%d\n" , ( d * e ) );			 //兩數之積
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

	//實作04
	char input;
	printf ( "Exercise 4\n" );
	printf ( "----------------------------\n" );
	printf ( "\t輸入一字元:" );							 //印出 輸入一字元
	scanf  ( "%c" , &input );							//從鍵盤輸入一字元
	printf ( "\t剛剛輸入了 %c 字元\n" , input);			  //印出剛剛輸的字元
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作05
	int remain , input_Cmoney , input_Cnumber , temp , total , receive ;
	printf ( "Exercise 5\n" );
	printf ( "----------------------------\n" );
	printf ( "====找錢系統====\n" );								
	printf ( "歡迎來到找錢系統 0_0\n" );							 
	printf ( "單價：" );											
	scanf ( "%d" , &input_Cmoney );								    
	printf ( "數量：" );											
	scanf ( "%d" , &input_Cnumber );
	printf ( "金額：%d\n" , ( input_Cmoney * input_Cnumber ) );
	printf ( "實收：" );
	scanf ( "%d" , &receive );
	printf ( "=====================\n" );
	total = ( receive - (input_Cmoney * input_Cnumber )); 			//計算總金額
	printf ( "找零：%d\n" , total );
	printf ( "***應找鈔票如下：\n" );
	temp = total / 500 ;											//計算要找多少張500元
	printf ( "1.500元：%d張\n" , temp );
	remain = total - ( temp * 500 );								//計算剩多少
	temp = remain / 100 ;											//計算要找多少張100元
	printf ( "2.100元：%d張\n" , temp );
	remain = remain - ( temp * 100 );								//計算剩多少
	temp = remain / 50 ;											//計算要找多少枚50元
	printf ( "3.50元：%d枚\n" , temp  );
	remain = remain - ( temp * 50 );								//計算剩多少
	temp = remain / 10 ;											//計算要找多少枚10元
	printf ( "4.10元：%d枚\n", temp  );
	remain = remain - ( temp * 10 );								//計算剩多少
	temp = remain / 5 ;												//計算要找多少枚5元
	printf ( "5.5元：%d枚\n" , temp  );
	remain = remain - ( temp * 5 );									//計算剩多少
	printf ( "6.1元：%d枚\n" , remain  );
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作06
	int f = 32767 ;													//宣告整數F
	short int g = 32767 , summmm;									//宣告短整數G以及summmm
	summmm = g + 1;													
	printf ( "Exercise 6\n" );
	printf ( "----------------------------\n" );
	printf ( "整數i＝%d\n" , f );
	printf ( "短整數s＝%d\n" , g );			  	   
	printf ( "i+1＝%d\n" , (f + 1) );		
	printf ( "s+1＝%d\n" , summmm );								//溢位
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

    return 0;
}
