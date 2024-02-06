#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../includes/Array.hpp"


int main(int, char**)
{
    Array<int> numbers(12);
    int* mirror = new int[12];
    srand(time(NULL));
    for (int i = 0; i < 12; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    for (int i = 0; i < 12; i++)
    {
        std::cout << "number : " << numbers[i] << "\tmirror : " << mirror[i] << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    delete [] mirror;

    std::cout << std::endl << std::endl;

    Array <int>numberCopy(numbers);
    for (int i = 0; i < 12; i++)
    {
        std::cout << "number : " << numbers[i] << "\nnumberCopy : " << numberCopy[i] << std::endl;
        if (numberCopy[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    
    return 0;
}

template <typename T>
void printArray(Array<T> &a)
{
    for (unsigned int i = 0; i < a.getSize(); i++)
    {
        if (i != a.getSize() - 1)
            std::cout << a[i] << ", ";
        else
            std::cout << a[i];
    }
    std::cout << std::endl;
}

int main(void)
{
	{
		std::cout << BLUE << "\n------- EMPTY ARRAY -------\n" << WHITE << std::endl;
		Array<int> empty;
		std::cout << "Empty: ";
		printArray(empty);
	}
	
	{
		std::cout << BLUE << "\n------- INT ARRAY -------\n" << WHITE << std::endl;
		Array<int> a(10);
		for (int i(0); i < 10; i++)
			a[i] = i;
		std::cout << "Int: ";
		printArray(a);
	}
	
	{
		std::cout << BLUE << "\n------- STRING ARRAY -------\n" << WHITE << std::endl;
		Array<std::string> a(5);
		for (int i(0); i < 5; i++)
			a[i] = "chocolat";
		printArray(a);
	}
	
	{
		std::cout << BLUE << "\n------- COPY AND ASSIGNEMENT ARRAY -------\n" << WHITE << std::endl;
		Array<std::string> a(5);
		for (int i(0); i < 5; i++)
			a[i] = "chocolat";
		Array<std::string> b(a);
		b[3] = "vanille";
		Array<std::string> c = b;
		c[2] = "fraise";
		printArray(a);
		printArray(b);
		printArray(c);
	}
	
	{
		std::cout << BLUE << "\n------- CATCH EXCEPTION -------\n" << WHITE << std::endl;
		try
		{
			Array<std::string> a(5);
			for (int i(0); i < 11; i++)
				a[i] = "chocolat";
			printArray(a);
		}
		catch(const std::exception& e)
		{ std::cerr << RED"[Error]"END << e.what() << endl;}
	}
}