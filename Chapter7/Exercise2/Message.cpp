/*
 * Message.cpp
 *
 *  Created on: 02-Sep-2018
 *      Author: ochavan9
 */

#include <iostream>
#include "Message.h"

Message::Message(){}

Message::Message(std::string str) :
		m_str(str)
{

}

//void Message::print()
//{
//	std::cout << m_str << std::endl;
//}

//void Message::print(const std::string& str)
//{
//	std::cout << m_str << ' ' << str << std::endl;
//}

void Message::print(std::string str/*=""*/)
{
	std::cout << m_str << ' ' << str << std::endl;
}
