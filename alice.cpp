#include <stdio.h>
#include <iostream>
#include <stdlib.h>
long unsigned int gcd(long unsigned int u, unsigned int v)
{
  long unsigned int shift;
  if (u == 0) return v;
  if (v == 0) return u;
  for (shift = 0; ((u | v) & 1) == 0; ++shift) {
         u >>= 1;
         v >>= 1;
  }
 
  while ((u & 1) == 0)
    u >>= 1;
  do {
        while ((v & 1) == 0)  
           v >>= 1;
       if (u > v) {
         unsigned int t = v; v = u; u = t;}  
       v = v - u;                    
     } while (v != 0);
 
  return u << shift;
}
int main()
{
	long unsigned int t,m,n,y,z,x;
	scanf("%ld",&t);
	while(t>0)
	{
		scanf("%lu %lu",&n,&m);
		z=m*n;
		y=((n+1)/2)*(m/2);
		x=gcd(y,z);
		printf("%lu %lu %lu\n",z,y,x);
		printf("%lu/%lu\n",y/x,z/x);
		t--;
	}

	return 0;
}