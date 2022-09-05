#include<stdio.h>
#include<stdint.h>
#include<memory.h>
__asm__("#You can custom this constant (MAX_LENGTH)");
#define MAX_LENGTH 1024LL
char s0[MAX_LENGTH], s1[MAX_LENGTH];
int main(){
	memset(s0,' ',sizeof(s0)-1);
	memset(s1,'*',sizeof(s1)-1);
    int64_t n;
    scanf("%lld",&n);
    __asm__("#=============== S ================");
	for(register int64_t i=n;i;i--){
		s0[i-1]=0;
		s1[(n-i<<1)+1]=0;
		fputs(s0,stdout);
		fputs(s1,stdout);
		putchar('\n');
		s1[(n-i<<1)+1]='*';
		s0[i-1]=0x20;
	}
	__asm__("#=============== M ================");
	for(register int64_t i=n-1;i;i--){
		s0[n-i]=0;
		s1[(i<<1)-1]=0;
		fputs(s0,stdout);
		fputs(s1,stdout);
		putchar('\n');
		s1[(i<<1)-1]='*';
		s0[n-i]=0x20;
	}
	__asm__("#=============== E ================");
}
