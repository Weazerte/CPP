#include "../inc/Span.hpp"

int main()
{
    try 
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "the shortest one is : " << sp.shortestSpan() << std::endl;
        std::cout << "the longest one is : "<< sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Span sp1 = Span(10000);
	try
	{
		sp1.fill();
		std::cout << "the shortest one is : " << sp1.shortestSpan() << std::endl;
		std::cout << "the longest one is : " << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
return 0;
}