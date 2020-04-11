#include <iostream>
#include <iomanip>
int main()
{
bool flag;
std::cout << "unesi " << true << " - " << false << std::endl;
std::cin >> flag;
std::cout << std::boolalpha << flag << std::endl;
int a = 255;
std::cout << "hex " << std::hex << a << std::endl;
std::cout << "dec " << std::dec << a << std::endl;
std::cout << "oct " << std::oct << a << std::endl;
double pi = 3.141592;
std::cout << "pi = " << std::scientific << std::uppercase;
std::cout << std::setprecision(7) << std::setw(20) << std::setfill('0');
std::cout << pi << std::endl;

std::cout << "hello" << std::endl;
int d=5;
if(d==6)
{
    std::cout << "tocno" << std::endl;
}
else
{
    std::cout << "faliveno" << std::endl;
}

float t= 2.578;
std::cout <<  t << :: std::endl;

float p= 4.2578;
std::cout << std::setprecision(8) << p-t << std::endl;



}