#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int a[1000][1000];

void spiralPrint(int m, int n)
{
    int i, k = 0, l = 0;

    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            printf("%d ", a[k][i]);
        }
        k++;

        for (i = k; i < m; ++i)
        {
            printf("%d ", a[i][n-1]);
        }
        n--;

        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf("%d ", a[m-1][i]);
            }
            m--;
        }

        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                printf("%d ", a[i][l]);
            }
            l++;    
        }        
    }
}



int main()
{
	int n, m, x;
	std::cin>>n>>m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &x);
			a[i][j] = x;
		}
	}
	spiralPrint(n, m);
	return 0;
}