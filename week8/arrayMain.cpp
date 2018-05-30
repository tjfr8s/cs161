#include <iostream>

void transformArray(int*& arrayIn, int arraySize);

int main()
{
    const int ARRAY_SIZE = 5;
    int* array = new int[ARRAY_SIZE];
    array[0] = 0;
    array[1] = 12;
    array[2] = 5;
    array[3] = 3;
    array[4] = 2;
    
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << array[i] << std::endl;
    }

    std::cout << "\n";

    transformArray(array, ARRAY_SIZE);


    for(int i = 0; i < ARRAY_SIZE * 2; i++)
    {
        std::cout << array[i] << std::endl;
    }
    
    delete [] array;

    return 0;
}
