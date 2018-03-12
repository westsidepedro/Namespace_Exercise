/*
 * Numbers.cpp
 *
 *  Created on: Mar 12, 2018
 *      Author: jpetterson
 */

#include "Numbers.h"

namespace Balls
    {
    
    Numbers::Numbers()
	{

	}

    Numbers::~Numbers()
	{

	}

    int Numbers::sumValue(int x, int y)
	{
	int inputSum = x + y;
	this->sum = inputSum;
	return sum;
	}

    void Numbers::speak()
	{
	cout << "The sum of inputed numbers is= " << sum << endl;
	}
    }
