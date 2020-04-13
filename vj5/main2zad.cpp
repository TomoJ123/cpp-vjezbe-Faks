#include "zad2.h"


int main1()
{
	Board a;
	Point b;
	Point c;
	b.x = 1;
	b.y = 3;
	c.x = 8;
	c.y = 15;
	//a.draw_char(b, 'x');
	a.draw_line(b, c, 'x');
	//a.draw_up_line(b, 'x');
	a.print_board();
	//Board g(a);
	//g.print_board();
	
	
	
	return 0;
}