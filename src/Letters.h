/*
 * Letters.h
 *
 *  Created on: Mar 12, 2018
 *      Author: jpetterson
 */

#ifndef LETTERS_H_
#define LETTERS_H_

#include <iostream>

using namespace std;
namespace Shit
    {
    
    class Letters
	{
	private:
	    string name;
	public:
	    Letters();
	    virtual ~Letters();
	    string sayHello(string inputName);
	    void speak();
	};
    
    } /* namespace Shit */

#endif /* LETTERS_H_ */
