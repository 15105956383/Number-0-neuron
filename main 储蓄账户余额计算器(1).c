
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
#include<math.h>
int main(){
	int a,c,i,e = 12;
	float b,sum = 0;
	scanf("%d,%f,%d",&a,&b,&c);
	double result;
	result =(double) b / e;
	for(i=1;i<=c;i++){
		sum=(sum+a)*(1+result);
	}
	printf("%.2f",sum);
}
 


