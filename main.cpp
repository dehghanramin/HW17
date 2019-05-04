//Ramin Dehghan
//main.cpp
//Homework 17


#include <iostream>
#include "fillarray.hpp"
#include "thesmallest.hpp"



int main(void)
{
    double array[10];
    int  number_used;
    const int SIZE = static_cast<int>(sizeof(array)/sizeof(*array));
    fill_array(array, SIZE, number_used);
    std::cout << std::endl;
    for (int i = 0; i < number_used; ++i)
    {
        std::cout << array[i] << std::endl;
    }
    std::cout << "\nThe smallest is:  " << theSmallest(array, SIZE, number_used) << std::endl;
    return 0;
}
