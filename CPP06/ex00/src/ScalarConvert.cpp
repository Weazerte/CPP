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
        if (c < 32 || c > 126)
            throw nonDisplayableException(std::string("char"));
        else if (d == -INFINITY || d == +INFINITY || std::isnan(d)) {
            throw ImpossibleException("char");
        }
        else
            std::cout << "char : '" << c << "'" << std::endl;

    } catch (std::exception &e) {
        e.what();
    }

    try {
        int i = std::atoi(str.c_str());
        double d = std::atof(str.c_str());
        if (d == -INFINITY || d == +INFINITY || std::isnan(d))
            throw ImpossibleException(std::string("int"));
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

const char *ScalarConvert::ImpossibleException::what(std::string type) const throw() {
    std::cout << type << ": Impossible" << std::endl;
}

const char *ScalarConvert::nonDisplayableException::what(std::string type) const throw() {
    std::cout << type << ": Non displayable" << std::endl;
}