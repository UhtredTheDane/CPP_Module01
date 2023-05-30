#include <iostream>

int main(void)
{
    std::string myString("HI THIS IS BRAIN");
    std::string *strintPTR(&myString);
    std::string& stringREF(myString);

    std::cout << "Adresse myString en mémoire:" << &myString << std::endl;
    std::cout << "Adresse stockée dans stringPTR:" << stringPTR << std::endl;
    std::cout << "Adresse stockée dans stringREF:" << &stringREF << std::endl;

    std::cout << "Valeur myString:" << myString << std::endl;
    std::cout << "Valeur pointée par stringPTR" << *stringPTR << std::endl;
    std::cout << "Valeur pointée par stringREF:" << stringREF << std::endl;
    return (0);
}