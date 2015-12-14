#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int n,k,t;
void PowerSet(int *set, int set_size)
{
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j,max=0,sum=0;

     for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
          {
            sum=sum^(set[j]);
          }
       }
       sum=sum^k;
       if(sum>max)
       	max=sum;
       sum=0;
    }
    printf("%d\n",max);
}
int main()
{
	int arr[1001];
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		PowerSet(arr,n);
		t--;
	}
	return 0;
}