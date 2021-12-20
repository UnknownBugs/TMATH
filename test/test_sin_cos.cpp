#include <iostream>
#include <function.hpp>

int main() {
    
    std::cout << "tmath::function::sinDegree(90): " << TMATH::FUNCTION::sinDegree(90) << std::endl;
    std::cout << "tmath::function::cosDegree(90): " << TMATH::FUNCTION::cosDegree(90) << std::endl;

    std::cout << std::endl;

    std::cout << "tmath::function::sinDegree(30): " << TMATH::FUNCTION::sinDegree(30) << std::endl;
    std::cout << "tmath::function::cosDegree(60): " << TMATH::FUNCTION::cosDegree(60) << std::endl;
    
    std::cout << std::endl;

    std::cout << "tmath::function::sinDegree(45): " << TMATH::FUNCTION::sinDegree(45) << std::endl;
    std::cout << "tmath::function::cosDegree(45): " << TMATH::FUNCTION::cosDegree(45) << std::endl;

    return 0;
}