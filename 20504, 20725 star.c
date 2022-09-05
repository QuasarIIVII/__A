#include <stdio.h>

main(){
	int i,j,n;
	scanf("%d",&n);
	puts("--------------------------------\n");
	for(i=0;i<(2*n-1)/2;i++){
		for(j=n-1;j>i;j--){
			printf("  ");
		}
		for(j=0;j<2*i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=0;i<(2*n-1)/2+1;i++){
		for(j=0;j<i;j++){
			printf("  ");
		}
		for(j=n*2-1;j>2*i;j--){
			printf("* ");
		}
		printf("\n");
	}
}
