/*
 * main.cpp
 *
 *  Created on: 02-Sep-2018
 *      Author: Admin
 */

#include "MyInt.h"

int main(int argc, char *argv[])
{
	MyInt i;
	i.printInt();
	i.printInt(100);
	i.printInt(100, 200);
	i.printInt(100, 200, 300);
	return 0;
}



