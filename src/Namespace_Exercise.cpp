//============================================================================
// Name        : Namespace_Exercise.cpp
/*
 * 	-create 2 classes
 * 	-put one of each in different namespaces
 * 	-use 'using' and 'nameSpace::class' to refer to namespace in function
 */
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Numbers.h"
#include "Letters.h"

using namespace std;
using namespace Balls;

int main()
    {
    Numbers test;
    test.sumValue(10, 3);
    test.speak();

    Shit::Letters realTest;
    realTest.sayHello("Bill");
    realTest.speak();

    return 0;
    }
