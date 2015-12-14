#include <stdio.h>
#include <stdlib.h>

char str[] = "lthlo";
char sub_str[] = "thlol";
int  *p_table;

void prefix_table()
{
	int i = 1, j = 0, m;
	p_table[0] = 0;

	while(i < m)
	{
		if(sub_str[i] == sub_str[j])
		{
			p_table[i] = j+1;
			j++;
			i++;
		}
		else if(j > 0)
			j = p_table[j-1];
		else
		{
			p_table[i] = 0;
			i++;
		}

	}
}

int kmp(int n1, int n2)
{
	int size = n1, size2 = n2, i=1,j=0, count =0;

	while(count > 0 && !(i==j==0)||j < size2)
	{
		printf("Finding\n");
		if(i == size)
		{
			i=0;
			count++;
		}
		if(str[i] == sub_str[j])
		{
			i++;
			j++;
		}
		else if(j > 0)
		{
			j = p_table[j-1];
		}
		else i++;
		if(j >= size2)
			return 1;
	}
}

int main()
{
	int n1=5, n2=5, status;
	
	fgets(str, n1, stdin);
	fgets(sub_str, n2, stdin);
	if(status = kmp(n1,n2))
		printf("FOund\n");

	return 0;
}