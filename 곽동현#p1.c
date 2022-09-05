#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int i,j,k;
	for(i=1;i<=a;i++){
		for(k=0;k<a-i;k++){
			printf(" ");
		}
		for(j=0;j<2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=a-1;i>=0;i--){
		for(k=0;k<a-i;k++){
			printf(" ");
		}
		for(j=0;j<2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
