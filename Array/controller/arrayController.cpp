//
//  arrayController.cpp
//  Array
//
//  Created by Dela Cruz, Juan on 1/25/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#include "arrayController.hpp"
using namespace std;

arrayController :: arrayController()
{
    
}

void arrayController :: start(){
    setupArrays();
    cout << printArrays();
}
void arrayController:: setupArrays(){
    numberArray[0] = 1;
    numberArray[1] = 2;
    numberArray[2] = 3;
    stringArray[0] = "What";
    stringArray[1] = " is";
    stringArray[2] = " life?";
    doubleArray[0] = 1.0;
    doubleArray[1] = 1.1;
    doubleArray[2] = 1.2;
}

string arrayController :: printArrays()
{
    string output = "";
    for (int index = 0; index < 3; index++){
        output += std::to_string(numberArray[index]) + " ";
        output += stringArray[index] + " ";
        output += std::to_string(doubleArray[index]) + " ";
    }
    return output;
}
