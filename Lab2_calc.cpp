//Lab2_num_obj.cpp
/***
 * {This program takes two integers(1 and 2) and divides them to result in another integer and takes one integer and a double value(1 and 2.0) and divides them to result in a double} 
***/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //numerical
    int int_x = 1;
    int int_y = 2;
    double double_z = 2.0;

    cout << "int divided by int: " << int_x / int_y << endl;
    cout << "int divided by double: " << int_x / double_z << endl;
}