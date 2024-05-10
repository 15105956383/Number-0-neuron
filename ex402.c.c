
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
int main(){
	int m,n;
	scanf("%d,%d",&m,&n);
	int fun(int m,int n);
	fun(m,n);
} 

int fun(int m,int n){
	int i,j,x,t;
	t=0;
	for(i=m;i<=n;i++){
		x=2;
		for(j=2;j<i;j++){
			if(i%j!=0)
			x=x+1;
		}
		if(x==i)
		t++;
	}
	int a[t];//t为n到m中质数的个数 
	int y;
	y=0;
	for(i=m;i<=n;i++){
		x=2;
		for(j=2;j<i;j++){
			if(i%j!=0)
			x=x+1;
		}
		if(x==i){
		a[y]=i;
		y++;
		}
	}
	for(i=0;i<=(t-2);i++){
		if(a[i+1]==a[i]+2)
		printf("%d,%d\n",a[i],a[i+1]);
	}
}


