#include <stdio.h>

int main(){
	float x, y, z;
	printf ( "x = "  );
	scanf ("%f" , &x);
	printf ( "y = "  );
	scanf ("%f" , &y);
	printf ( "z = "  );
	scanf ("%f" , &z);
	printf ( "(%.4f+%.4f*%.4f)/%.4f = %.4f\n" , x, y, x, z, (x+x*y)/z );
	return 0;
}
