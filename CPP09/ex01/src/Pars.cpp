#include "../inc/Pars.hpp"

Pars::Pars(){}

Pars::Pars(Pars const &src){
    *this = src;
}

Pars & Pars::operator=(Pars const &src){
    if (this != &src)
        return *this;
    return *this;
}

Pars::~Pars(){}

void Pars::calculate(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		char c = input[i];

		if (c == ' ')
			continue;
		else if (isdigit(c))
		{
			int number = c - '0';
			numbers.push(number);
		}
		else if (c == '+' && numbers.size() >= 2)
		{
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a + b);
		}
		else if (c == '-' && numbers.size() >= 2)
		{
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a - b);
		}
		else if (c == '*' && numbers.size() >= 2)
		{
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a * b);
		}
		else if (c == '/' && numbers.size() >= 2)
		{
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a / b);
		}
		else
		{
			std::cout << "Invalid input." << std::endl;
			return;
		}
	}

	if (numbers.size() == 1)
	{
		double result = numbers.top();
		numbers.pop();
		std::cout << "Result: " << result << std::endl;
	}
	else
	{
		std::cout << "Invalid input." << std::endl;
	}
}