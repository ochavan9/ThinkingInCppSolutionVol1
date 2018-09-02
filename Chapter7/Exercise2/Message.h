/*
 * Message.h
 *
 *  Created on: 02-Sep-2018
 *      Author: ochavan9
 */

#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <string>

class Message {
public:
	Message();
	Message(std::string str);

	//void print();
	//void print(const std::string& str);
	void print(std::string str="");

private:
	std::string m_str;
};

#endif /* MESSAGE_H_ */
