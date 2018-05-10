/************************************************************
 * Author: Tyler Freitas
 * Date: 5/9/2018
 * Description: This program defines a class Person that has
 * two member variables: a string that stores the person's
 * name and a double that stores the person's age. It has 
 * a constructor with a parameter for each of the member
 * variables, and a default constructor that initializes 
 * both member variables to 0.
************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
private:
    std::string m_name;
    double m_age;    
public:
    Person(std::string name, double age);
    Person();

    std::string getName() {return m_name;}
    double getAge() {return m_age;}
};

#endif
