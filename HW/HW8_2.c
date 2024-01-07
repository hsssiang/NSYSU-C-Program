#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main (){
	int T, i, ans[60] = {0}; 
	char output[256][1000] = {'0'};
	FILE *output_f = fopen ( "./output.txt" , "w" );				//開啟輸出檔
	scanf ( "%d" , &T );											
	for ( i = 0 ; i < T ; i ++ ){
		int m ,n, j, k, q;
		char input[60][1000];
		scanf ( "%d%d" , &m, &n );
		for ( j = 0 ; j < m ; j ++ ){
			scanf ( "%s" , input[j] );
		}
		for ( j = 0 ; j < n ; j ++ ){
			int max = 0, max_i = 0, detect[4] = {0};
			for ( k = 0 ; k < m ; k ++ ){
				switch (input[k][j]){								//計算字母出現幾個
					case 'A':
						detect[0] ++;
						break;
					case 'C':
						detect[1] ++;
						break;
					case 'T':
						detect[2] ++;
						break;
					case 'G':
						detect[3] ++;
						break;	
				}
			}
			for ( q = 0; q < 4 ; q ++ ){							//判斷出現最多次的字母
				if ( detect[q] > max ){
					max =  detect[q];
					max_i = q;										
				}
			}
			for ( q = 0; q < 4 ; q ++ ){							//計算漢明距離
				if ( detect[q] != 0 && q != max_i ){
					ans[i] += detect[q];
				}
			}
			switch (max_i){											//判斷輸出的字串
				case 0:
					output[i][j] = 'A' ;
					break;
				case 1:
					output[i][j] = 'C' ;
					break;
				case 2:
					output[i][j] = 'T' ;
					break;
				case 3:
					output[i][j] = 'G' ;
					break;	
			}
		}
	}
	printf  ( "\n" );
	for ( i = 0 ; i < T ; i ++ ){
		printf  ( "%s\n" , output[i] );								//印出字串
		printf  ( "%d\n" , ans[i] );								//印出漢明距離
		fprintf ( output_f, "%s\n" , output[i] );					//輸出結果到輸出檔
		fprintf ( output_f, "%d\n" , ans[i] );						//輸出漢明距離到輸出檔
	}
	fclose ( output_f );											//關閉檔案
	return 0;
}

