/************************************************************
 * Author: Tyler Freitas
 * Date: 05/16/2018
 * Description: This program defines a funciton that takes
 * the addresses of three int variables and sorts them in
 * ascending order. 
************************************************************/


void smallSort2(int *num1, int *num2, int *num3)
{
    int temp(0);

    if(*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

    if(*num2 > *num3)
    {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }

    if(*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
