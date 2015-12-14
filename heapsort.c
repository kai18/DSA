#include <stdio.h>
#include <stdlib.h>

int n;
int *heap;

void heapify(int i, int size)
{
	int lchild, rchild, max, temp;
	lchild = 2*i+1;
	rchild = 2*i+2;
	if(lchild < size && heap[lchild] > heap[i])
		max = lchild;
	else
		max = i;
	if(rchild < size && heap[rchild] > heap[max])
		max = rchild;
	if(max != i)
	{
		temp = heap[max];
		heap[max] = heap[i];
		heap[i] = temp;
		heapify(max, size);
	}

}

void createHeap()
{
	int i;
	for(i = (n-1)/2; i >= 0; i--)
		heapify(i, n);
}

void heapsort()
{
	int temp;
	int size = n;
	createHeap();
	while(size > 0)
	{
		temp = heap[0];
		heap[0] = heap[size-1];
		heap[size-1] = temp;
		size--;
		heapify(0,size);
	}
}

int main()
{
	int i;
	scanf("%d",&n);
	heap =(int*) malloc(n*(sizeof(int)));
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&heap[i]);
	}
	heapsort();
	for (i = 0; i < n; ++i)
	{
		printf("%d\n", heap[i]);
	}
		return 0;


}