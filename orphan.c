#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){

	int pid; 
	pid = fork();

	if(pid == 0){		
		printf("\nI am the child, my process id is: %d", getpid());
		printf("\nMy parent's process id is: %d", getppid());
		sleep(10);

		printf("\n\nAfter sleep\nMy process id is: %d", getpid());
		printf("\nMy Parents process id is: %d\n",getppid());
		exit(0);
	}

	else{

		sleep(5);
		printf("\nI am the parent, my process id is: %d", getpid());
		printf("\nI am parent's parent, process id is: %d", getppid());
		printf("\nParent Terminates !!!\n");
	}
}