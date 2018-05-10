#include <iostream>

void smallSort(int& first, int& second, int& third);

int main()
{
    int first, second, third;
    std::cout << "enter three numbers: " << std::endl;
    std::cin >> first >> second >> third;
    
    smallSort(first, second, third);
    
    std::cout << "sorted: " << first << " " << second << " " 
              << third << std::endl;
    return 0;
}
