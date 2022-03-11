#include <iostream>
#include <string>
#include <vector>
#include <exception>

class MyMathException: public std::exception
{
public:
	MyMathException()
	{
	}

	MyMathException(char const* _Message)
		: exception(_Message)
	{
	}

	MyMathException(char const* _Message, int i)
		: exception(_Message, i)
	{
	}

	MyMathException(exception const& _Other)
		: exception(_Other)
	{
	}


	char const* what() const override
	{
		return "Ein Fehler ist aufgetreten. Ehrlich wahr!";
	}
};



int main()
{
	try {
		int a, b, c;

		a = b = 0;

		c = a / b;
		std::cout << c << std::endl;
	} catch(...)
	{
		std::cout << "Aua" << std::endl;
	}
	
  /* try {
        int a, b, c;
		throw std::out_of_range{ "hallo" };
        a = b = 0;
        if (b == 0) throw MyMathException{"Division durch null"};
        c = a / b;
        
     }
   catch (MyMathException& ex)
   {
	   std::cout << "MyMath:" << ex.what() << std::endl;
   }
	catch(std::exception &ex)
     {
         std::cout << "anderer Fehler:" << ex.what() << std::endl;
     }
	catch(...)
	{
		
	}
    

    std::cout << "Vielen Dank, Sie haben ein kleines Programm echt gluecklich gemacht" << std::endl;*/
}