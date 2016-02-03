#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double unique;
int repetitive, t, n;
int *a;

int main()
{
	a = (int*)calloc(500000, sizeof(int));
	scanf("%d", &t);
	while(t-- > 0)
	{
		int x, count = 0;
		unique = 0;
		repetitive = 0;
		scanf("%d", &n);
		int *frequency = (int*)calloc(n+1 ,sizeof(int));
		int freq[999999];
		int temp = n;
		while(temp-- >0)
		{
			scanf("%d",&x);
			if(frequency[count]==0)
				a[count++] = x;
			frequency[count] += 1;
		}
		for(int i = 0; i < count; i++)
			{
				if(frequency[a[i]] > 1)
					repetitive += frequency[a[i]];
				else if(frequency[a[i]]==1)
					unique++;

			}
		unique = ceil(unique/2);
		printf("%d\n",repetitive+(int)unique);

	}
	return 0;
}