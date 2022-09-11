#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(void){

	pid_t child_id;	//creating a variable with a data type to hold process id 
	child_id = fork();	//storing the process id we get from fork()

	printf("child_id: %d",child_id);	//printing the child_id

	if(child_id>0)	//if child_id > 0  we instruct the parent process to sleep while the child finishes its work
		sleep(40);
	else
		exit(0);	//else the child finishes its work with exit()

	return 0;
}