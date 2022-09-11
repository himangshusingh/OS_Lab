#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	int p, i=5;
	p=fork();
	if(p==0)
		printf("p: %d\nChild Processes %d\n",p,++i );
	if(p>0)
		printf("p: %d\nParent Process: %d\n",p,i);
	else
		printf("Error !!!\n");

	return 0;	
}