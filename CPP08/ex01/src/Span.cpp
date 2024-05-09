#include "../inc/Span.hpp"
#include <algorithm>
#include <climits>

Span::Span(unsigned int n) : _n(n) {}

Span::Span(Span const &other) : _n(other._n), _numbers(other._numbers) {}

Span &Span::operator=(Span const &other)
{
    _n = other._n;
    _numbers = other._numbers;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (_numbers.size() == _n)
        throw std::exception();
    _numbers.push_back(number);
}

void Span::fill(void)
{
    if (_numbers.size() == _n)
        throw std::exception();
    for (unsigned int i = 0; _numbers.size() < _n; i++)
        _numbers.push_back(rand() % _n);
}

int	Span::shortestSpan(void) const
{
	if (_numbers.size() < 2)
		throw std::exception();
	std::vector<unsigned int>copy = _numbers;
	std::sort(copy.begin(), copy.end());
    int ret = INT_MAX;
    for (std::vector<unsigned int>::iterator it = copy.begin(); it != copy.end(); it++) {
        for (std::vector<unsigned int>::iterator it2 = it + 1; it2 != copy.end(); it2++) {
            if (ret > static_cast<int>(*it2 - *it) && *it2 - *it > 0)
                ret = *it2 - *it;
        }
    }
	return (ret);
}

int Span::longestSpan(void) const
{
	if (_numbers.size() < 2)
		throw std::exception();
	std::vector<unsigned int>copy = _numbers;
	std::sort(copy.begin(), copy.end(), std::greater<unsigned int>());
    
    return (*(copy.begin()) - *(copy.end() - 1));
}