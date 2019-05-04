//Ramin Dehghan
//thesmallest.hpp
//Homework 17


template <typename T>
T theSmallest(T[], int const&, int&);


//-----------------------------------

template <typename T>
T theSmallest(T array[], int const& size, int& number_used)
{
    T smallest = array[0];
    for (int i = 1; i < number_used; ++i)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    return smallest;
}