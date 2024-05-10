
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
#include<math.h>
int main(){
	int i,j,w,s;
	int k=0;
	int a=0;
	scanf("%d",&i);
	for(j=0;j<=i;j++){
		w=j;
		s=j;
		while(w!=0){
			k=k*10+w%10;
			w/=10;
		}
		if(k==s){
			a++;
			if(a<=10){
				printf("%d,",k);
			}else{
				printf("\n");
				printf("%d,",k);
				a=1;
			}
			k=0;
		}else{
			k=0;
		}
	}
	return 0;
}

