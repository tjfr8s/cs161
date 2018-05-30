/************************************************************
 * Author: Tyler Freitas
 * Date: 05/16/2018
 * Description: This program defines a void function that 
 * takes two parameters: a reference pointer to a dynamic 
 * array and the size of the array. The function dynamically
 * allocates an array twice the size and populates it with 
 * the values from the old array, followed by those values
 * plus one.
 ************************************************************/

void transformArray(int*& arrayIn, int arraySize)
{
    // Create new array that is double the size of the passed
    // array.
    int* newArray = new int[2*arraySize];

    // Copy elements from old array to first arraySize number
    // of elements of the new array and copy the values of 
    // the original plus one to the next arraySize number 
    // of elements. 
    for(int i = 0; i < 2 * arraySize; i++)
    {
        if(i < arraySize)
        {
            newArray[i] = arrayIn[i];
        }
        else
        {
            newArray[i] = arrayIn[i - arraySize] + 1;
        }
    }

    // Deallocate memory pointed to by the passed array
    delete []arrayIn;
    // Make the passed array point to the new array
    arrayIn = newArray;
    newArray = 0;
}
