#include <iostream>
double findMedian(int array[], int arraySize);

int main()
{
    const int ARRAY_SIZE = 6;
    int array[ARRAY_SIZE] = {66,65 , -32, 61, 13, -444};
    std::cout << "the median is: " << findMedian(array, ARRAY_SIZE) <<
                 " " << std::endl;
    return 0;
}
