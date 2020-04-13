#include "zad2.h"

Board::Board()
{
	height = 10;
	width = 20;
	edge = 'o';
	arr = new char*[height];
	for (int i = 0; i < height; i++)
	{
		arr[i] = new char[width];
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || i==height-1)
			{
				arr[i][j] = edge;
			}
			else
			{
				if (j == 0 || j == width-1)
				{
					arr[i][j] = edge;
				}
				else
					arr[i][j] = ' ';
			}
		}
	}
	
}

Board::Board(int h, int w, char edge)
{
	this->height = h;
	this->width = w;
	this->edge = edge;
	arr = new char*[height];
	for (int i = 0; i < height; i++)
	{
		arr[i] = new char[width];
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || i == height - 1)
			{
				arr[i][j] = edge;
			}
			else
			{
				if (j == 0 || j == width - 1)
				{
					arr[i][j] = edge;
				}
				else
					arr[i][j] = ' ';
			}
		}
	}
	
}

Board::~Board()
{
	delete[] arr;
	cout << "destruktor";
}
Board::Board(const Board& otherobject) {
	height = otherobject.height;
	width = otherobject.width;
	edge = otherobject.edge;
	arr = new char*[height];
	for (int i = 0; i < height; i++)
	{
		arr[i] = otherobject.arr[i];
	}

}
void Board::draw_char(Point p, char ch)
{
	int i= round(p.x);
	int j= round(p.y);
	if (i >= height-1 || j >= width-1 || i<=0 || j<=0)//jer nezelim da mi ulazi u edge znak ,obrub oduzima 2 mjesta pocetak i kraj
	{
		cout << "tocke izlaze iz boarda,smanjite ih, dimenzije su" << height-2 << '*' << width-2 << endl;
	}
	else
	{
		
		arr[i][j] = ch;
	}
}

void Board::print_board()
{
	int k = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}

void Board::draw_up_line(Point p,char ch)
{
	
	int j = p.x;
	int k = p.y;
	if (j >= height - 1 || k >= width - 1 || j <= 0 || k<=0)//jer nezelim da mi ulazi u edge znak ,obrub oduzima 2 mjesta pocetak i kraj
	{
		cout << "tocke izlaze iz boarda,smanjite ih, dimenzije su" << height - 2 << '*' << width - 2 << endl;
		
	}
	else {
		for (int i = 0; i < p.x; i++)
		{
			arr[j][k] = ch;
			j--;
			k--;
		}
	}
	
}

void Board::draw_line(Point a, Point b, char ch)
{	

	if (a.x >= height - 1 || a.y >= width - 1 || a.x <= 0 || a.y <= 0 || b.x >= height - 1 || b.y >= width - 1 || b.x <= 0 || b.y <= 0)
	{
		cout << "tocke izlaze iz boarda,smanjite ih, dimenzije su" << height - 2 << '*' << width - 2 << endl;
	}
	else {
		int Xdelta = abs(a.x - b.x);
		int Ydelta = abs(a.y - b.y);
		float Ykoef, Xkoef;
		int n;

		if (Xdelta > Ydelta)
		{
			Ykoef = float(Ydelta) / float(Xdelta);
			//cout << Ykoef << endl << endl;
			Xkoef = 1;
			n = Xdelta;
		}
		else
		{
			Xkoef = float(Xdelta) / float(Ydelta);
			//cout << Xkoef << endl << endl;
			Ykoef = 1;
			n = Ydelta;
		}
		if (a.x > b.x)
		{
			Xkoef *= -1;
		}
		if (a.y > b.y)
		{
			Ykoef *= -1;
		}
		for (int i = 0; i < n; i++)
		{
			a.x += Xkoef;
			a.y += Ykoef;
			round(a.x);
			round(a.y);
			//cout << a.x << endl << a.y << endl;
			arr[int(a.x)][int(a.y)] = ch;
		}
	}
}
