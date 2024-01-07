#include <stdio.h>  
#include <math.h>

int HS ( int , int , int );

int main (){
	int input, output[2000] = {0}, counter = 0, i;
	printf ( "[Input]\n" );
	scanf ( "%d" , &input );
	while ( input != 0 ){
		int two = 0, sub = 0, sum = 0;
		input --;																		//將第一項(0)去掉
		while ( 1 ){
			sum += ( pow( 2, two ) );													//計算輸入值位於第幾行
			if ( sum >= input ) break;													//找到就跳出
			else two ++;																//不是就加一行
		}
		sub =  input - ( sum - pow ( 2 , two ) );										//計算輸入值為該行的第幾個
		output[counter] = HS ( two, sub , 1 );											//傳入計算函式，並將結果存在陣列中
		counter ++;																		//計算第幾組測資
		scanf ( "%d" , &input );														//讀入下一組測資
	}
	printf ( "[Output]\n" );
	for ( i = 0 ; i < counter ; i++ ){
		printf ( "%d\n" , output[i] );													//印出結果
	}
	return 0;
}

int HS ( int two, int sub, int swi){
	int temp_1 = 1, temp_2 = 1;
	int i, j ,sub_f = sub, sum = 0;
	if ( swi == 1 ){																	//第一次傳入，先判斷是否位於0和n+1那部分
		for ( i = two - 2 ; i >= 0 ; i -- ){
			for ( j = 1 ; j <= temp_1 ; j ++ ){
				sum += ( pow ( 2 , i ) );												//計算(0和n+1)之外有幾個數
			}
			temp_1 ++;
		}
		if ( sub > sum ){																//判斷是否位於0和n+1那部分
			sum += (temp_1 + 1); 														//判斷要回傳多少(0或1)
			if ( sub == sum ) return two + 1;
			else if ( two == 0 && sub == 1 ) return 1;									//處理特殊情況
			else return 0;
		}
	}
	if ( two >= 2 ) {																	//若不是在0和n+1那部分，執行此程式
		for ( i = two - 2; i >= 0 ; i -- ){
			for ( j = 1 ; j <= temp_2 ; j ++ ){
				if ( pow( 2, i ) > sub_f ) return HS ( i, sub_f , 0 );					//判斷是否繼續呼叫函示
				else if ( pow( 2, i ) == sub_f ) return i + 1;							//回傳該值
				else sub_f -= pow( 2, i );												//若不是該部分，就扣掉那幾位
			}
			temp_2 ++;
		}
	}
	return 0;
}