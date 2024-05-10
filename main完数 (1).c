
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
#include<math.h>
int ysh(int n){
	int i;
	int sum=0;
	for(i=1;i<=(n-1);i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	return sum;
}
int main(){
	int ysh(int n);
	int n,j,k,w;
	w=0;
	scanf("%d,%d",&j,&k);
	if(j<=0 || k<=0 || j>=10000 || k>=10000){
		printf("error");
	}else{
		if(j>k){
		int c=0;
		c=j;
		j=k;
		k=c;
		}
	for(n=j;n<=k;n++){
		if(n==ysh(n)){
		w=w+1;
			if(w==1){
				printf("%d",n);
			}else{
			printf(",%d",n);
			}	
		}
	}
}
	return 0;
}




