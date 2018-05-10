#include <iostream>
#include "Person.hpp"

double stdDev(Person personArray[], int arraySize);

int main()
{
    const int ARRAY_SIZE = 5;
    Person array[ARRAY_SIZE] = { Person("bob", 15.0),
                                 Person("jane", 21.0),
                                 Person("rick", 50.0),
                                 Person("betty", 13.0),
                                 Person("lisa", 18.0) };

    std::cout << "std: " << stdDev(array, ARRAY_SIZE) << std::endl;
    return 0;
}
