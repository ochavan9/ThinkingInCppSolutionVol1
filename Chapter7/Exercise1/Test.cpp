#include <fstream>
#include <iostream>
#include "Test.h"

Test::Test(){}

Test::Test(std::string fname)
{
   std::ifstream inFile(fname.c_str());
   std::string line;
   while(getline(inFile, line))
   {    
       data += line + '\n';
   } 
}

std::string Test::contents()
{
    return data;
}



