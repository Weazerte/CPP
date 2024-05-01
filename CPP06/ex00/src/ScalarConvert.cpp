#include "../inc/ScalarConvert.hpp"

ScalarConvert::ScalarConvert() {
}

ScalarConvert::ScalarConvert(ScalarConvert const &src) {
    *this = src;
}

ScalarConvert::ScalarConvert(std::string str) {
    convert(str);
}

ScalarConvert::~ScalarConvert() {
}

ScalarConvert &ScalarConvert::operator=(ScalarConvert const &rhs) {
    if (this != &rhs) {
        *this = rhs;
    }
    return *this;
}

void ScalarConvert::convert(std::string str) {

    try {
        char c = static_cast<char>(std::atoi(str.c_str()));
        double d = std::atof(str.c_str());
        if (c < 32 || c > 126){
			std::cout << "char : ";
            throw nonDisplayableException();
		}
        else if (d == -INFINITY || d == +INFINITY || std::isnan(d)) {
            std::cerr << "char : ";
			throw ImpossibleException();
        }
        else
            std::cout << "char : '" << c << "'" << std::endl;

    } catch (std::exception &e) {
        e.what();
    }

    try {
        int i = std::atoi(str.c_str());
        double d = std::atof(str.c_str());
        if (d == -INFINITY || d == +INFINITY || std::isnan(d)){
            std::cerr << "int : ";
			throw ImpossibleException();
		}
        else
            std::cout << "int : "<< i << std::endl;
    } catch (std::exception &e) {
        e.what();
    }

    float f = static_cast<float>(std::atof(str.c_str()));
    if (f == -INFINITY || f == +INFINITY)
        std::cout << "float : " << f << std::endl;
    else if (f == std::floor(f))
        std::cout << "float : " << f << ".0f" << std::endl;
    else
        std::cout << "float : " << f << "f" << std::endl;

    double d = std::atof(str.c_str());
    if (d == -INFINITY || d == +INFINITY)
        std::cout << "double : " << d << std::endl;
    else if (d == std::floor(d))
        std::cout << "double : " << d << ".0" << std::endl;
    else
        std::cout << "double : " << d << std::endl;
}

const char *ScalarConvert::ImpossibleException::what() const throw() {
    std::cout << "Impossible" << std::endl;
	return "";
}

const char *ScalarConvert::nonDisplayableException::what() const throw() {
	std::cout << "Non displayable" << std::endl;
	return "";
}
