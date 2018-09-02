#ifndef TEST_H
#define TEST_H

#include <string>

class Test{
    public:
    Test();
    Test(std::string fname);

    std::string contents();
    
    private:
    std::string data;

};
#endif