#include<iostream.h>
void main()
{
	int st[10],bt[10],wt[10],tat[10],n,tq;
	int i,count=0,sq=0,temp;
	clrscr();
	cout<<"Enter the no. of processes:";
	cin>>n;
	cout<<"Enter the burst time:";
	for (int i = 0; i < n; i++)
	{
	cin>>bt[i];
	st[i]=bt[i];
	}
	cout<<"Enter the Quant time:";
	cin>>tq;
	while(1)
		for (int i = 0; i < n; i++)
		{
		  temp=tq;
		  if (st[i]==0)
		  {
		  	count++;
		  	continue;
		  }
		  if (st[i]>tq)
		  {
		  	st[i]=st[i]-tq;
		  }
		  else
		  {
		  	temp=st[i];
		  	st[i]=0;

		  }
		  sq=sq+temp;
		  tat[i]=sq;
		  }
		  if (n==count)
		  {
		  	break;
		  }
		  for (int i = 0; i < n; i++)
		  {
		  	wt[i]=tat[i]-bt[i];
		  	swt=swt+wt[i];
		  	stat=stat+tat[i];
		  }
		  cout<<Pno BTIME WTIME  TTIME\n";
		  for (int i = 0; i < n; i++)
		  {
		  cout<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<"\n";}
		}
}