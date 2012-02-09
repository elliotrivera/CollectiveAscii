#include <iostream>
#include <vector>
#include <algorithm>
#include "Items.h"

using namespace std;

class cObject // Default class for all objects, other objects will be derived or inheritated from this.
{
	public:
		cObject(int, int);
		cObject(int, int, char);
		cObject(int, int, char, int);
		void DrawObject(int, int, char);
		void setImage(char);
		void printInv(int arraylocation) { cout << Inv[arraylocation].name; }
		void setX(int);
		void setY(int);
		char getImage() { return image; }
		int getY() { return y; }
		int getX() { return x; }
		vector<Item> Inv;
	protected:
		char image;
		int x, y;
};

void cObject::DrawObject(int xx, int yy, char img)
{
	for (int i=0; i<=yy; i++)
	{
		if (i != yy)
		{
			cout << i << endl;
		}
		if (xx == 0 && i == yy)
		{
			cout << image;
		}
		if (i == yy)
		{
			for (int ix=0; ix<=xx; ix++)
			{
				if (ix != xx)
				{
					cout << ix;
				}
				if (ix == xx)
				{
					cout << image;
				}
			}
		}
	}
}

cObject::cObject(int xx, int yy)
{
	x = xx;
	y = yy;
}
cObject::cObject(int xx, int yy, char img)
{
	x = xx;
	y = yy;
	image = img;
}

cObject::cObject(int xx, int yy, char img, int size)
{
	x = xx;
	y = yy;
	image = img;
	vector<int> Inv(size);
}

void cObject::setX(int _x)
{
	x = _x;
}

void cObject::setY(int _y)
{
	y = _y;
}

void cObject::setImage(char img) // char 0-255
{
	image = img;
}

int main() {
	bool gameloop; gameloop = true;
	cObject cc(0, 0, 1, 20);
	cc.setImage(64);
	cc.setX(5);
	cc.setY(5);
	cc.Inv.push_back(155);
	{
		cc.printInv(0);
	}
	while(gameloop);
	return 0;
}