#include<stdio.h>

main(){
	int n,i,j;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){    //���κ�  
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<n;i++){  //�Ʒ��κ� 
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=1;j<=2*n-2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}


