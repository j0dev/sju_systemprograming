#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(void) {
	//pid 
	pid_t pid;

	if ((pid = fork())<0) {
		//pid error handle
		perror("fork() error occured\n");
	}

	else if (pid ==0) {
		//child pid run and print child pid and parent pid
		printf("Child PID is %d, Parent PID is %d.\n", getpid(), getppid());
	}

	else {
		//if not child pid print parent pid
		printf("Parent PID is %d\n", getpid());
	}

	//end
	exit(EXIT_SUCCESS);

}
