/*
 * Letters.cpp
 *
 *  Created on: Mar 12, 2018
 *      Author: jpetterson
 */

#include "Letters.h"

namespace Shit
    {
    
    Letters::Letters()
	{
	// TODO Auto-generated constructor stub
	
	}
    
    Letters::~Letters()
	{
	// TODO Auto-generated destructor stub
	}
    
    string Letters::sayHello(string inputName)
	{
	this->name = inputName;
	cout << "Name set as: " << name << endl;
	}
    void Letters::speak()
	{
	cout << "This is where we say hello to " << name << "!" << endl;
	}

    } /* namespace Shit */
