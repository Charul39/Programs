#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void main()
{
	pid_t idx;
	idx = fork();
	printf("CHOR CHOR\n");
	if(!idx)
	{
		printf("Child Here\nId=%d\nParent Id=%d\n",getpid(),getppid());
		printf("pid=%d",idx);
	}
	else
	{
		printf("Parent Here\nId=%d\nParent Id=%d\n",getpid(),getppid());
		printf("pid=%d",idx);
	}
}
