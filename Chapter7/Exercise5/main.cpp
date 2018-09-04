/*
 * main.cpp
 *
 *  Created on: 04-Sep-2018
 *      Author: ochavan9
 */
#include <iostream>

/*void func(int i, float f, char c, double d)
{
	std::cout << i << '\n' << f << '\n' << c << '\n' << d << std::endl;
}*/

void func(int i, float , char c, double )
{
	std::cout << i << '\n'  <<  c << std::endl;
}

int main(int argc, char *argv[])
{
	func(1, 2.3f, 'a', 3.4);
	return 0;
}

