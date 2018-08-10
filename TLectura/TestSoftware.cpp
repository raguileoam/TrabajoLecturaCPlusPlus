#include "TestSoftware.h"
#include "Software.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {
    Software soft("Code::Blocks",143,"GLP","17.12");
    soft.mostrar();
    return 0;
}
