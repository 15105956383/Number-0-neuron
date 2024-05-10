
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
#include<math.h>

int fac(int n){
	if(n<=2){
		return(1);
	}else{
		return(fac(n-1) + fac(n-2));
	}
}
int fuck(int m){
	if(m<=2){
		return(1);
	}else{
		return(fuck(m-1) + fuck(m-2));
	}
}
float sl(int n){
	float w,a,b;
	int fac(int n);
	int fuck(int m);
		a=fac(n+2);
		b=fuck(n+1);
		w=a/b;
		return w;
}
int main(){
	float sl(int n);
	int j,n;
	float z,sum;
	sum = 0;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		sum=sum+sl(j);
	}
	printf("%.2f",sum);
}




