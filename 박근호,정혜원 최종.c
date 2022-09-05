#include <stdio.h>

main(){
	int i,j,a,b,k;
	scanf("%d",&a);
	
	for(i =0;i<a;i++){
		for(j=i;j<a-1;j++)
			{printf(" ");
			}
		for(k=0;k<(i*2)+1;k++){
			printf("*");
		}
		printf("\n");
	} 
	for(i =a-1;i>0;i--){
		for(j=i;j<a;j++)
			{printf(" ");
			}
		for(k=0;k<(i*2)-1;k++){
			printf("*");
		}
		printf("\n");
	} 
}

