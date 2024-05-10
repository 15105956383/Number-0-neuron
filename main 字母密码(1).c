#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a,b,c,d,e;
	
	a=getchar();
	b=getchar();
	c=getchar();
	d=getchar();
	e=getchar();
	a=a+4;
	b=b+4;
	c=c+4;
	d=d+4;
	e=e+4;
	if(a>121){
		a=a-26;
	}if(b>121){
		b=b-26;
	}if(c>121){
		c=c-26;
	}if(d>121){
		d=d-26;
	}if(e>121){
		e=e-26;
	}
		printf("%c%c%c%c%c",a,b,c,d,e);
	return 0;
}



