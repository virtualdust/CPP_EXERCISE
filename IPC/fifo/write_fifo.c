/*************************************************************************
	> File Name: fifo.c
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Fri Mar 13 01:15:30 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<time.h>


int main(){
	int fd;
	int n, i;
	char buf[1024];
	time_t tp;

	printf("I am %d process.\n", getpid());

	if((fd = open("fifo.md", O_WRONLY)) < 0) {
		perror("Open FIFO Failed");
		exit(1);
	}

	for (i = 0; i < 10; i++) {
		time(&tp); //get system current time
		n = sprintf(buf, "Process %d's time is %s", getpid(), ctime(&tp));
		printf("Send message: %s", buf);
		if(write(fd, buf, n+1) < 0)
		{
			perror("Write FIFO Failed");
			close(fd);
			exit(1);
		}
		sleep(1);
	}

	close(fd);
	return 0;
}

