#include <iostream>
#include <limits>
#include <iomanip>
#include <string>

// Function to display information about given type
template <typename T>
void type_info(std::string description) {
    std::cout << std::setw(18) << description << std::setw(3) << sizeof(T) << "|" << std::setw(2)
    << std::numeric_limits<T>::digits<< (std::numeric_limits<T>::is_signed ? "| signed |" : "|unsigned|")
    << "[" << std::numeric_limits<T>::min() << ", " << std::numeric_limits<T>::max() << "]" << std::endl;
}

int main() {

    std::cout << std::endl << "************ System data type sizes ************" << std::endl << std::endl; 
    type_info<char>("char");
    std::cout << std::endl;

    type_info<short int>("short int");
    type_info<signed short  int>("signed short int");
    type_info<unsigned short >("unsigned short ");
    std::cout << std::endl;

    type_info<int>("int");
    type_info<unsigned int>("unsigned int");
    type_info<signed int>("signed int");
    std::cout << std::endl;

    type_info<long int>("long int");
    type_info<unsigned long int>("unsigned long int");
    type_info<signed long int>("signed long int");
    std::cout << std::endl;

    type_info<long int>("long int");
    type_info<unsigned long int>("unsigned long int");
    type_info<signed long int>("signed long int");
    std::cout << std::endl;

    type_info<float>("float");
    type_info<double>("double");
    type_info<long double>("long double");
    std::cout << std::endl;

}