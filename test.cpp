#include <iostream>
#include <vector>
#include <utility>

using namespace std;
vector< vector<pair<int, int> > >v(100);
int main()
{
	int x=1;
	v[x].push_back(pair<int,int>(3,4));
	cout<<v[x][0].first<<endl;
	cout<<v[0][0].first<<endl;
	return 0;
}
