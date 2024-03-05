// Mateusz Kałwa

#include <iostream>
#include <sstream>

template<typename TargetType, typename SourceType>
TargetType convert_sc(const SourceType& value) {
    return static_cast<TargetType>(value);
}

template<typename TargetType, typename SourceType>
TargetType convert_ss(const SourceType& value) {
    std::stringstream ss;
    TargetType result;
    ss << value;
    ss >> result;
    return result;
}

int main() {

    std::cout << "Implementation using static_cast:" << std::endl;
    int number = 24;
    double double_number = convert_sc<double>(number);
    std::cout << "int -> double: " << double_number << std::endl;


    std::cout << std::endl << "Implementation using stringstream:" << std::endl;

    number = 37;
    double_number = convert_ss<double>(number);
    std::cout << "Int -> double: " << double_number << std::endl;

    std::string text = "123";
    int number_from_text = convert_ss<int>(text);
    std::cout << "string -> int: " << number_from_text << std::endl;

    return 0;
}