#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
class card
{
public:
	bool face;
	int rank;
	int type;
	card(bool f,int r,int t)
	{
		face=f;
		rank=r;
		type=t;
	}
	card()
	{
		face=0;
		rank=0;
		type=0;
	}
};
std::vector<card> dek(53);
class deck:public card
{
public:
	void init();
	void shuffle();
	void throwCard();
	void match();
	void printCard(card ob);
	void printDeck();
};
void deck::shuffle()
{
	srand(time(NULL));
	for(int i=1;i<53;i++)
	{
		int x=rand()%(i+1);
		card temp=dek[i];
		dek[i]=dek[x];
		dek[x]=temp;
	}
}
void deck::init()
	{
		int c=1;
		for(int i=1;i<=4;i++)
		{
			for(int j=1;j<=13;j++)
			{
				card ob(0,j,i);
				dek[c]=ob;
				c++;
			}
		}
	}
int main()
{
	clrs();
	deck  player;
	player.init();
	for(int i=1;i<53;i++)
	{
		std::cout<<"-----CARD-----\n";
		std::cout<<"face"<<dek[i].face<<"\n";
		std::cout<<"type"<<dek[i].type<<"\n";
		std::cout<<"-----END------\n";
	}
	player.shuffle();
	for(int i=1;i<53;i++)
	{
		std::cout<<"-----CARD-----\n";
		std::cout<<"face"<<dek[i].face<<"\n";
		std::cout<<"type"<<dek[i].rank<<"\n";
		std::cout<<"-----END------\n";
	}

	return 0;
}