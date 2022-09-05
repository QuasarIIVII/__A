#include<stdio.h>
int main(){
	int i, j, k, n, tot, top;
	scanf("%d", &n);
	tot = (n*2)-1;
	top=1;
	for(i=0; i<n; i++){
		
	for(j=n-i-1; j>0; j--){
		printf(" ");
	}
	for(k=0; k<top; k++){
		printf("*");
	}
	top+=2;
	printf("\n"); 
}



top-=2;



for(i=n+1; i<=tot; i++){
	
	for(j=n; j<i; j++){
		printf(" ");
	}
	top-=2;
	for(k=top; k>0; k--){
		printf("*");
	}
	printf("\n");
}

}
