
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%3==0 && a%5==0 && a%7==0){
		printf("Can be divisible by 3,5,7.");
	}
	if(a%3==0 && a%5==0 && a%7!=0){
		printf("Can be divisible by 3,5.");
	}
	if(a%3==0 && a%5!=0 && a%7==0){
		printf("Can be divisible by 3,7.");
	}
	if(a%3!=0 && a%5==0 && a%7==0){
		printf("Can be divisible by 5,7.");
	}
	if(a%3==0 && a%5!=0 && a%7!=0){
		printf("Can be divisible by 3.");
	}
	if(a%3!=0 && a%5==0 && a%7!=0){
		printf("Can be divisible by 5.");
	}
	if(a%3!=0 && a%5!=0 && a%7==0){
		printf("Can be divisible by 7.");
	}
	if(a%3!=0 && a%5!=0 && a%7!=0){
		printf("Can not be divisible by 3,5,7." );
	}
	
	return 0;
}


