#include <stdio.h>

int main(){
	int n, space_num, star_num, max_star;
	
	scanf("%d", &n);
	
	space_num = n - 1;
	star_num = 1;
	max_star = 2*n - 1;
	
	int i, j;
	
	for(i = max_star; i > 0; i--){
		space(space_num);
		star(star_num);
		space_num--;
		
		if(star_num < max_star){
			star_num = star_num + 2;
		} 
		else if(star_num >= max_star){
			star_num = star_num -2;
			max_star = star_num;
		}
		printf("\n");
	}
	
} 

int space(int num){
	int i;
	
	if(num < 0){
		num = num * (-1);
	}
	
	for(i = num; i > 0; i--){
		printf(" ");
	}
}

int star(int num){
	int i;
	
	for(i = num; i > 0; i--){
		printf("*");
	}
}
