// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include "format.h"
#include <iostream>

using std::format;
using std::cout;

int main() {
    int a {3};
    cout << format("Hello, World!\n {}",a);
}
