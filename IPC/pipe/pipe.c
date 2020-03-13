/*************************************************************************
	> File Name: channel.c
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Fri Mar 13 01:06:33 2020
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main(){
	int fd[2];
	pid_t pid;
	char buff[20];

	if (pipe(fd) < 0) {
		printf("create pipe failed error");
		return -1;
	}

	if ((pid = fork()) < 0) {
		printf("fork failed error");
		return -1;
	} else if (pid > 0) {
		close(fd[0]);
		write(fd[1], "hello world\n", 12);
	} else {
		close(fd[1]);
		read(fd[0], buff, 20);
		printf("%s\n",buff);
	}

	return 0;
}

