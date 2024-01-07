#include <stdio.h>

int main(){
	int month = 0, date = 0;
	scanf ( "%d %d" , &month, &date );
	while ( month != 0 && date != 0 ){
		if ( (month == 1 && date > 20) || (month == 2 && date < 20) ){
			printf ( "Aquarius\n" );
		}
		else if ( (month == 2 && date > 19) || (month == 3 && date < 21) ){
			printf ( "Pisces\n" );
		}
		else if ( (month == 3 && date > 20) || (month == 4 && date < 21) ){
			printf ( "Aries\n" );
		}
		else if ( (month == 4 && date > 20) || (month == 5 && date < 22) ){
			printf ( "Taurus\n" );
		}
		else if ( (month == 5 && date > 21) || (month == 6 && date < 22) ){
			printf ( "Gemini\n" );
		}
		else if ( (month == 6 && date > 21) || (month == 7 && date < 23) ){
			printf ( "Cancer\n" );
		}
		else if ( (month == 7 && date > 22) || (month == 8 && date < 22) ){
			printf ( "Leo\n" );
		}
		else if ( (month == 8 && date > 23) || (month == 9 && date < 24) ){
			printf ( "Virgo\n" );
		}
		else if ( (month == 9 && date > 23) || (month == 9 && date < 24) ){
			printf ( "Libra\n" );
		}
		else if ( (month == 10 && date > 23) || (month == 11 && date < 23) ){
			printf ( "Scorpio\n" );
		}
		else if ( (month == 11 && date > 22) || (month == 11 && date < 23) ){
			printf ( "Sagittarius\n" );
		}
		else {
			printf ( "Capricorn\n" );
		}
		scanf ( "%d %d" , &month, &date );
	}
	return 0;
}
