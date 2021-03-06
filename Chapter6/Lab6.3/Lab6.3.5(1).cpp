// Lab 6.3.5 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class DrawTree
{
public:
	virtual void Draw()
	{
		cout << " /\\ " << endl;
	}
};

class DrawTreeLine : public DrawTree
{
	void Draw()
	{
		DrawTree::Draw();
		cout << "//\\\\" << endl;
	}
};

class DrawTreeAddPlus : public DrawTree
{
	void Draw()
	{
		DrawTree::Draw();
		cout << "/++\\" << endl;
	}
};

class DrawTreeAddStars : public DrawTree
{
	void Draw()
	{
		DrawTree::Draw();
		cout << "/**\\" << endl;
	}
};

int main()
{
	DrawTree** drawers = new DrawTree*[3];

	drawers[0] = new DrawTreeLine();
	drawers[2] = new DrawTreeAddPlus();
	drawers[1] = new DrawTreeAddStars();

	for (int i = 0; i < 3; i++)
	{
		cout << "Drawing " << i + 1 << ":" << endl;
		drawers[i]->Draw();
	}

	return 0;
}

