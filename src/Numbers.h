/*
 * Numbers.h
 *
 *  Created on: Mar 12, 2018
 *      Author: jpetterson
 */

#ifndef NUMBERS_H_
#define NUMBERS_H_

#include <iostream>
using namespace std;

namespace Balls
    {
    class Numbers
	{
	private:
	    int sum;

	public:
	    Numbers(); //constructor
	    virtual ~Numbers(); //destructor
	    int sumValue(int x, int y);
	    void speak();

	};
    }
#endif /* NUMBERS_H_ */
