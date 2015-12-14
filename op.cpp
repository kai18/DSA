#include <stdio.h>
#include <iostream>
using namespace std;
class Box
{
public:
	void getside();
	void setvolume();
	Box operator+(Box b2);
	double volume;
	double side;
	Box()
	{
	volume=0;
	side=0;
	}
};
void Box::getside()
{
	cin>>side;
}
void Box::setvolume()
{
	volume=side*side*side;
}
Box Box::operator+(Box b2)
{
	Box b;
	b.side=b2.side+side;
	b.volume=b.side*b.side*b.side;
	return b;
}
int main()
{
	Box b3;
	Box b4;
	Box b5;
	b3.getside();
	b4.getside();
	b3.setvolume();
	b4.setvolume();
	b5=b3+b4;
	cout<<b5.volume<<endl;
	cout<<b5.side<<endl;
	return 0;
}