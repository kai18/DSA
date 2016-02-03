#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct comparator {
 bool operator()(int i, int j) {
 return i > j;
 }
};

int n,k,a;
priority_queue<int, std::vector<int>, comparator> minHeap;

int main()
{
	scanf("%d %d",&n,&k);
	while(n-- > 0)
	{
		scanf("%d",&a);
		minHeap.push(a);
	}
	while(k-- > 1)
		minHeap.pop();
	int ans = minHeap.top();
	printf("%d\n",ans);
	return 0;
}