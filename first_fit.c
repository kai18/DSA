#include <stdio.h>
#include <stdlib.h>
int main()
{
	int bsize, n, i=0;
	int *fsize;
	int start=0, end=0;
	printf("Enter memory block size\n");
	scanf("%d", &bsize);
	printf("Enter no of files\n");
	scanf("%d", &n);
	fsize=(int*)malloc(sizeof(int)*n);
	while(i<n)
	{
		printf("Enter size for File%d",i+1);
		scanf("%d",&fsize[i++]);
	}
	for(i=0;i<n;i++)
	{
		if(fsize[i] > bsize)
		{
			printf("Insufficient Memory");
			exit(1);
		}
		else
		{
			bsize = bsize - fsize[i];
			end = end+fsize[i]-1;
			printf("Start for file%d is %d",i+1,start);
			printf("End of file%d is %d\n",i+1, end );
		}
		start = end+1;

	}
	return 0;
}