#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void) {
	pid_t pid;
	int status;

	if ((pid = fork())<0) {
		//pid handle
                perror("fork() error occured\n");
        }

        else if (pid ==0) {
		//if child run, execl bin ls 
		// the given problem has no option just use ls,
		printf("execl() function execution");
		execl("/bin/ls", "ls", NULL, (char *)0);
		perror("execl() function execution failed...");
	}
	else {
		//wait for the child terminated
		wait(&status);
		exit(0);
	}


	return 0;
}
