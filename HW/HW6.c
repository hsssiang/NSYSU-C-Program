#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int L, R, C, min_ouput = 0, pace = 1, pace_b = 0, detect = 0, detect_p = 0;
void trace ( int [50][50][50] , int , int, int);											//宣告trace函式用來判斷是否有路
void maze ( int [50][50][50] );																//宣告maze函式用來印出迷宮

int main (){
    char dungeon [50][50][50];
    int  digital [50][50][50];
    int i, j, q, sum = 0, temp, min, counter_p = 0;
    int S[3], E[3];
    scanf ( "%d %d %d" , &L,&R,&C );														//讀入迷宮長寬高
    while ( L != 0 && R != 0 && C != 0 ){													//用While迴圈重複輸入地牢
		for ( i = 0; i < L ; i ++ ){
			for ( j = 0 ; j < R ; j++ ){
				scanf ( "%s" , dungeon[i][j] );												//讀入地牢資料
			}
			printf ( "\n" );
		}
		for ( i = 0; i < L ; i ++ ){														//把地牢轉成數值地圖
			for ( j = 0 ; j < R ; j++ ){
				for ( q = 0 ; q < C ; q++ ){
					if ( dungeon [i][j][q] == '.' ){										//判斷地牢的路
						digital [i][j][q] = 0;												//將路在數值地圖設為-1
					}
					else if ( dungeon [i][j][q] == 'S' || dungeon [i][j][q] == 'E'){		//判斷地牢出口和入口
						if ( dungeon [i][j][q] == 'S' ) {
							digital [i][j][q] = 9;											//將入口在數值地圖設為9
							S[0] = i;														//儲存入口的座標
							S[1] = j;
							S[2] = q;
						}
						else if ( dungeon [i][j][q] == 'E' ) {
							digital [i][j][q] = 0;											//將出口在數值地圖設為9
							E[0] = i;														//儲存出口的座標
							E[1] = j;
							E[2] = q;
						}
					}
					else if ( dungeon [i][j][q] == '#' ){									//判斷地牢的牆壁
						digital [i][j][q] = -1;												//將牆壁在數值地圖設為-1
					}
					
				}
			}
		}
		trace ( digital , S[0] , S[1] , S[2] );												//傳入偵測函式
		if ( detect != 6 ){																	//判斷是否撞牆
			pace_b = pace;																	//沒有的話將上一個步數存下來
			pace ++;																		//把步數加一
			detect = 0;																		//把撞牆檢測(幾個方向撞牆)歸零
		}
		do{
			detect_p = 0;																	//把撞牆檢測(幾條路撞牆)歸零
			counter_p = 0;
			detect = 0;
			for ( i = 0 ; i < L ; i ++ ){
				for ( j = 0 ; j < R ; j ++ ){
					for ( q = 0 ; q < C ; q ++ ){
						if ( digital[i][j][q] == pace_b ){									//判斷有幾條路可以走
							detect_p ++;													//計算有幾條路
						}
					}
				}
			}
			for ( i = 0 ; i < L ; i ++ ){
				for ( j = 0 ; j < R ; j ++ ){
					for ( q = 0 ; q < C ; q ++ ){
						if ( digital[i][j][q] == pace_b ){									//判斷有幾條路可以走
							trace ( digital , i , j , q );									//檢查每一個路口的六個方向是否有新的路
						}
					}
				}
			}
			if ( detect == 6 ){																//檢查是不是死路
				counter_p ++;																//計算有幾條路是死路
			}
			pace_b = pace;																	//更新下一個要找的步數
			pace ++;																		//更新下一個步數
		} while ( detect_p != counter_p );													//如果所有路在六個都是死路就結束迴圈

		min_ouput = digital[E[0]][E[1]][E[2]];												//讀取步數(如有答案就會出現在終點)
		if ( min_ouput == 0 )	printf ( "Trapped!\n" );									//終點步數為零，表示沒有路可到達
		else printf ( "Escaped in %d minute(s)\n" , min_ouput );							//印出步數
		pace = 1;																			//初始化步數
		scanf ( "%d %d %d" , &L,&R,&C );													//讀入新的長寬高
	}
	return 0;
}

void maze ( int digital [50][50][50] ){
	printf ( "\n" );
	printf ( "______________________\n" );
	int i, j, q;
	for ( i = 0; i < L ; i ++ ){
        for ( j = 0 ; j < R ; j++ ){
            for ( q = 0 ; q < C ; q++ ){
				printf ( "%3d" , digital[i][j][q] );										//印出地牢
			}
			printf ( "\n" );
        }
		printf ( "\n" );
    }
	printf ( "\n" );
	printf ( "______________________\n" );
}


void trace ( int digital [50][50][50] , int i , int j, int q){
	detect = 0;																				//歸零死路計數器
	if ( i - 1 >= 0 && digital[i - 1][j][q] == 0 )	digital[i - 1][j][q] = pace;			//偵測不是邊遠和上面是否有路
	else detect ++;																			//沒有就將死路計數器加ㄧ
	if ( i + 1 < L && digital[i + 1][j][q] == 0 )	digital[i + 1][j][q] = pace;			//偵測不是邊遠和下面是否有路
	else detect ++;																			//沒有就將死路計數器加ㄧ
	if ( q - 1 >= 0 && digital[i][j][q - 1] == 0 )	digital[i][j][q - 1] = pace;			//偵測不是邊遠和左邊是否有路
	else detect ++;																			//沒有就將死路計數器加ㄧ
	if ( q + 1 < C && digital[i][j][q + 1] == 0 )	digital[i][j][q + 1] = pace;			//偵測不是邊遠和右邊是否有路
	else detect ++;																			//沒有就將死路計數器加ㄧ
	if ( j - 1 >= 0 && digital[i][j - 1][q] == 0 )	digital[i][j - 1][q] = pace;			//偵測不是邊遠和後面是否有路
	else detect ++;																			//沒有就將死路計數器加ㄧ
	if ( j + 1 < R && digital[i][j + 1][q] == 0 )	digital[i][j + 1][q] = pace;			//偵測不是邊遠和前面是否有路
	else detect ++;																			//沒有就將死路計數器加ㄧ
}