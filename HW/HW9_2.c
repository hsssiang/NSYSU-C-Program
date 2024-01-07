
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>



int main(){
	int counter = 0, i, j, k;
	int alphabet[200][27] = {0};
	char input01[1010], input02[1010];
	FILE *input = fopen( "./input.txt", "r" );
	fgets( input01, 1010, input );
	while ( fgets( input01, 1010, input ) != NULL ){
		fgets( input02, 1010, input );
		for ( j = 0 ; j < strlen( input01 ) ; j ++ ){
			for ( k = 0 ; k < strlen( input02 ) ; k ++ ){
				if ( input01[j] == input02[k] ){								//嚙踝蕭���嚙賜��嚙質岳嚙踝蕭��殷蕭嚙踝蕭嚙�
					if ( input01[j] > 96 && input01[j] < 122 ){
						alphabet[counter][input01[j] - 96] ++;					//���嚙踝蕭嚙質岳嚙踝蕭��殷蕭嚙踝蕭嚙踝蕭嚙踝蕭嚙踝蕭鞈�嚙踝蕭嚙踝蕭���嚙踝蕭������嚙踝蕭
					}
					break;												
				}
			}
		}
		fgets( input01, 1010, input );
		counter ++;
	}
	printf ( "\n");
	for ( i = 0 ; i < counter ; i ++ ){
		for ( j = 1 ; j < 27 ; j ++ ){
			if ( alphabet[i][j] != 0 ){
				for ( k = 0 ; k < alphabet[i][j]; k ++ ){
					printf ( "%c" , j + 96 );									//���嚙賣�殷蕭��殷蕭������嚙賢��嚙踝蕭
				}
			}
		}
		printf ( "\n");
	}
	fclose ( input );
    return 0;
}

