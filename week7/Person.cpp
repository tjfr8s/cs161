/************************************************************
 * Author: Tyler Freitas
 * Date: 5/9/2018
 * Description: This program implements a  class Person that 
 * has two member variables: a string that stores the person's
 * name and a double that stores the person's age. It has 
 * a constructor with a parameter for each of the member
 * variables, and a default constructor that initializes 
 * the name to an empty string and the age to 0.
************************************************************/
#include "Person.hpp"

// Constructor with string parameter for name and double for
// age.
Person::Person(std::string name, double age)
{
    m_name = name;
    m_age = age;
}

// Default constructor initializes name to an empty string
// and age to 0.
Person::Person()
{
    m_name = "";
    m_age = 0;
}
