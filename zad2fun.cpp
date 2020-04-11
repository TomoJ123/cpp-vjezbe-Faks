#include "zad2.h"

Board::Board()
{
	height = 10;
	width = 20;
	arr = new char[height * width];
	edge = 'o';
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || i == height - 1)
			{
				arr[i * width + j] = edge;
			}
			else
			{
				if (j == 0 || j == width - 1)
				{
					arr[i * width + j] = edge;
				}
				else {
					arr[i * width + j] = ' ';
				}
			}

		}
	}
}

Board::Board(int h, int w, char edge)
{
	this->height = h;
	this->width = w;
	this->edge = edge;
	arr = new char[height * width];
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || i == height - 1)
			{
				arr[i * width + j] = edge;
			}
			else
			{
				if (j == 0 || j == width - 1)
				{
					arr[i * width + j] = edge;
				}
				else {
					arr[i * width + j] = ' ';
				}
			}

		}
	}
	
}

Board::~Board()
{
	delete[] arr;
}
Board::Board(const Board& otherobject) {
	height = otherobject.height;
	width = otherobject.width;
	edge = otherobject.edge;
	arr = new char[height * width];
	for (int i = 0; i < height * width; i++)
	{
		arr[i] = otherobject.arr[i];
	}

}
void Board::draw_char(Point p, char ch)
{
	int i= round(p.x)-1;//jer krece od nule
	int j= round(p.y)-1;
	if (i >= height || j >= width || i<=0)
	{
		cout << "tocke izlaze iz boarda,smanjite ih, dimenzije su" << height << '*' << width << endl;
	}
	else
	{
		
		arr[i * width + j]=ch;
	}
}

void Board::print_board()
{
	int k = 0;
	for (int i = 0; i < height * width; i++)
	{
		if (k == width) {
			cout << endl;
			k = 0;
		}
		k++;
		cout << arr[i];

	}
}

void Board::draw_up_line(Point p,char ch)
{
	
	int i = p.x;
	int j = p.y;
	if (i > j)
	{
		for (int k = 0; k < p.y ; k++)
		{

			arr[i * width + j] = ch;
			i--;
			j--;

		}
	}
	else {
		for (int k = 0; k < p.x ; k++)
		{
			arr[i * width + j] = ch;
			i--;
			j--;

		}
	}
	
}

void Board::draw_line(Point a, Point b, char ch)
{
	int Xdelta = abs(a.x - b.x);
	int Ydelta = abs(a.y - b.y);
	float Ykoef,Xkoef;
	int n;

	if (Xdelta > Ydelta)
	{
		Ykoef = float(Ydelta) / float(Xdelta);
		cout << Ykoef << endl << endl;
		Xkoef = 1;
		n = Xdelta;
	}
	else
	{
		Xkoef =  float(Xdelta) / float(Ydelta);
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
		arr[int(a.x) * width + int(a.y)]=ch;
	}
		
}