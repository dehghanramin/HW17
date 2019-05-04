//Ramin Dehghan
//fillarray.hpp
//Homework 17


template <typename T>
void fill_array(T[], int const&, int&);


//------------------------------

template <typename T>
void fill_array(T array[], int const& size, int& number_used)
{
    std::cout << "Enter up to " << size << " items.\n"
              << "Mark the end of the list with \"!\"" << std::endl;
    int index = 0;
    T next;
    while ((std::cin >> next) && (next != '!') && (index < size))
    {
        array[index] = next;
        ++index;
    }
    number_used = index;
}