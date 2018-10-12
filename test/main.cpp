#include "stdio.h"
#include "configure.h"

int main(int argc, char const *argv[])
{
    CConfigure::getInstance()->parese("configure.xml");

    return 0;
}

