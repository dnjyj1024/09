#include <stdio.h>
#define SIZE 5
int main(void)
{
int i;
int a[SIZE] = {1, 2, 3, 4, 5};
int b[SIZE] = {1, 2, 3, 4, 5};
int flag_same = 0;
for (i=0; i<SIZE; i++){
	if(a[i]!=b[i]){
	flag_same = 1;	
	printf("a is not the same with b\n ");
	break;	
	}
}
if(flag_same == 0)
printf("a is the same with b.\n");
return 0;
}
