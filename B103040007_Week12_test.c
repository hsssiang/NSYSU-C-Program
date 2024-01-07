
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int lv, exper, hp, money, exp_b, game_switch = 1;
char name[256];
int Countinue_Game ( int );
void game_mode ( int );
void Show_state ( int );
void Show_Move  ( int );
int Fib ( int );

int main(){
	srand ( time(0) );
	int mode, Option_Switch = 0;
	int switchh;
	FILE *output = fopen ( "./output.txt" , "w" );
	printf ( "Wellcome to Monster and Man !!\n" );
	printf ( "1. New Game\n" );
	printf ( "2. Continue\n" );
	printf ( "3. Exit\n" );
	printf ( "Select: " );
	scanf  ( "%d" , &mode );
	while ( mode != 3 ){
		if ( mode == 1 ){
			lv = 1;
			hp = 100;
			exper = 0;
			printf ( "Please enter player name:\n" );
			scanf  ( "%s" , name );
			printf ( "Wellcome to the game world ""%s"".\n" , name );
			fprintf ( output, "Player Name: %s\n" , name );
			fprintf ( output, "Player LV: %d\n" , lv );
			fprintf ( output, "Player EXP: %d\n" , exper );
			fprintf ( output, "Player HP: %d\n" , hp );
			printf ( "System: Game saved.\n\n" );
			game_mode ( mode );
			if ( game_switch == 0 ){
				break;
			}
		}
		if ( mode == 2 ) {
			Countinue_Game( Option_Switch );
			Show_state ( switchh );
			game_mode ( mode );
			if ( game_switch == 0 ){
				break;
			}
		}
		if ( game_switch != 0 ){
			printf ( "Wellcome to Monster and Man !!\n" );
			printf ( "1. New Game\n" );
			printf ( "2. Continue\n" );
			printf ( "3. Exit\n" );
			printf ( "Select: " );
			scanf  ( "%d" , &mode );
		}
	}
	fclose(output);
    return 0;
}


int Fib ( int input_3 ){
	int returnV1, returnV2;
	if ( input_3 < 3 ){																						//??´å?°å????¼ä??å°±å?????1
		return 1;
	}
	else {
		return Fib ( input_3 - 1 ) + Fib ( input_3 - 2 );													//?????³ç?¸å???????©æ??
	}
}

void game_mode ( int i ){
	int mode, Option_Switch, switchh;
	printf ( "It's your turn:\n" );
	printf ( "1.Move\n" );
	printf ( "2.Show state\n" );
	printf ( "3.Save Game\n" );
	printf ( "4.Back to title\n" );
	printf ( "Select: " );
	scanf ( "%d" , &mode );
	printf ( "------\n" );
	while ( mode != 4 ){
		if ( mode == 1 ) {
			int i = 0, j;
			i = rand() % 5 + 1;
			printf ( "You move %d time\n" , i );
			for ( j = 0 ; j < i ; j ++){
				printf ( "\n" );
				Show_Move ( j );
				printf ( "\n" );
				if ( game_switch == 0 ){
					break;
				}
			}
		}
		else if ( mode == 2 ) {
			printf ( "------\n" );
			Show_state ( switchh );
			printf ( "------\n" );
		}
		else if ( mode == 3 ) {
			printf ( "------\n" );
			printf ( "System: Game saved.\n" );
			printf ( "------\n" );
			game_switch = 0;
			break;
		}
		if ( game_switch != 0 ){ 
			printf ( "\n" );
			printf ( "It's your turn:\n" );
			printf ( "1.Move\n" );
			printf ( "2.Show state\n" );
			printf ( "3.Save Game\n" );
			printf ( "4.Back to title\n" );
			printf ( "Select: " );
			scanf  ( "%d" , &mode );
			printf ( "------\n" );
		}
		else {
			break;
		}
	}
}

int Countinue_Game ( int Option_Switch ){
	FILE *output = fopen ( "./output.txt" , "r" );
	printf ( "Welcome back player, here is your state:\n" );
	fscanf  ( output, "Player LV: %s" , name );
	fscanf  ( output, "Player LV: %d\n" , &lv );
	fscanf  ( output, "Player EXP: %d\n" , &exper );
	fscanf  ( output, "Player HP: %d\n" , &hp );
	printf ( "Player Name: %s\n" , name );
	printf ( "Player LV: %d\n" , lv );
	printf ( "Player EXP: %d\n" , exper );
	printf ( "Player HP: %d\n" , hp );
	fclose(output);
	return 0;
}

void Show_state ( int exp_before ){
	FILE *output = fopen ( "./output.txt" , "a+" );
	int	Fibb = 1, expU = 0;
	if ( exper > expU ){
		expU = Fib (Fibb);
		Fibb ++;
	}
	lv = Fibb;
	printf ( "Player Name: %s\n" , name );
	printf ( "Player LV: %d\n" , lv );
	printf ( "Player EXP: %d\n" , exper );
	printf ( "Player HP: %d\n" , hp );
	printf ( "Player Money: %d\n" , money );
	printf ( output, "\n" );
	fprintf ( output, "Player Name: %s\n" , name );
	fprintf ( output, "Player LV: %d\n" , lv );
	fprintf ( output, "Player EXP: %d\n" , exper );
	fprintf ( output, "Player HP: %d\n" , hp );
	fprintf ( output, "Player Money: %d\n" , money );
	printf ( output, "\n" );
}

void Show_Move  ( int j ){
	FILE *output = fopen ( "./output.txt" , "a+" );
	FILE *die = fopen ( "./output.txt" , "w" );
	int rand_m, rand_n;
	rand_m = rand() % 100 + 1;
	if ( rand_m  == 1 ){
		printf ( "Oops... You step on a mine!!!!\n" );
		printf ( " ~~GameOevr~~\n" );
		printf ( " ==========bye\n" );
		fscanf  ( die, "" );
		game_switch = 0;
	}  
	else if ( rand_m > 1 && rand_m <= 34 ){
		rand_n = rand() % 6 + 1;
		money += rand_n;
		printf ( "You found a dirty box! + %d Money\n" , rand_n );
		Show_state ( rand_n );
	}
	else if ( rand_m > 34 && rand_m <= 67 ){
		hp -= 10;
		printf ( "A monster shows up! -10HP + 5Money + 5Exp\n" );
		if ( hp <= 0 ){
			printf ( " ~~GameOevr~~\n" );
			game_switch = 0;
		}
		else {
			money += 5;
			exper += 5;
			Show_state ( rand_n );
		}
	}
	else if ( rand_m > 67 && rand_m <= 100 ){
		rand_n = rand() % 3 + 1;
		printf ( "Help poor peopl + %d Exp\n" , rand_n);
		exper += rand_n;
		Show_state ( rand_n );
	}
	fclose(output);
	fclose(die);
}