#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Point
{
public:
	double x;
	double y;
};

class Board
{
	char* arr;
	int height;
	int width;
	char edge;

public:
	
	Board();
	Board(int,int,char);
	~Board();
	Board(const Board&);
	void draw_char(Point, char);
	void print_board();
	void draw_up_line(Point,char);
	void draw_line(Point, Point, char);
	
};


