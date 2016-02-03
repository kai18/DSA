#include <stdio.h>
#include <stdlib.h>
#include <iostream>

static inline int mini(int m, int n)
{
	if(n > m)
		return m;
	else
		return n;
}
static inline int max(int n, int m)
{
	if(n > m)
		return n;
	else
		return m;
}
 int main()
 {
 	int n, m, k, t, dif, mn;
 	scanf("%d",&t);
 	while(t-- > 0)
 	{
 		scanf("%d %d %d", &n, &m, &k);
 		dif=max(n, m) - mini(n,m);

 		if(n==m)
 			printf("%d\n",0);

 		else if(dif <= k)
 			printf("%d\n",0);
 		
 		else if(dif > k)
 		{
 			mn = mini(n,m) + k;
 			dif = max(n,m) - mn;
 			printf("%d\n", dif);
 		}
 	}	
 	return 0;
 }