#include <stdio.h>
#include <stdlib.h>

int *que;
int n;
void input()
{
	int i=0;
	printf ("Enter No. of processes\n");
	scanf("%d", &n);
	que=(int*)malloc(sizeof(int)*n);
	printf("Enter Burst time for each process\n");
	while(i<=n)
	{
		printf ("P%d",i+1);
		scanf("%d",&que[i++]);
	}
}

int main()
{
	int waiting_time=0;
	input();
	int i=0;
	printf("Process\tBurst Time\tWaiting Time\n");
	while(i<=n)
	{
		printf("P%d\t",i+1);
		printf("%d\t",que[i]);
		if(i>0)
		{
			waiting_time=waiting_time+que[i-1];
			printf("%d\n",waiting_time);
		}
		else
			printf("%d\n",0);
		i++;
	}
	return 0;
}