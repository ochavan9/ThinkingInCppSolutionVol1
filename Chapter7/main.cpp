#include <iostream>
#include "Test.h"

int main(int argc, char *argv[])
{
    Test t("Example.txt");
    std::cout << t.contents() << std::endl;
    return 0;
}
