
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
#include<math.h>
float fac(int n,int x){
	if(n==1){
		return(x);
	}else{
		if(n==0){
			return(1);
		}else{
		return(((2*n-1)*x-fac(n-1,x)-(n-1)*fac(n-2,x))/n);
	}
}
}



int main(){
	float fac(int n,int x);
	int n;
	int x;
	scanf("%d,%d",&n,&x);
	if(n<0){
		printf("error");
	}else{
		printf("%.2f",fac(n,x));
	}
}




