//
//  arrayController.hpp
//  Array
//
//  Created by Dela Cruz, Juan on 1/25/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef arrayController_hpp
#define arrayController_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class arrayController{
public:
    arrayController();
    int numberArray[3];
    string stringArray[3];
    double doubleArray[3];
    void start();
private:
    void setupArrays();
    string printArrays();
protected:

};

#endif /* arrayController_hpp */
