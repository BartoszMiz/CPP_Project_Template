#include <iostream>
#include "Foo.h"

int main()
{
	Foo bar(0);
	int value;

	while (true)
	{
		std::cout << "Current value: " << bar.GetValue() << std::endl;
		std::cout << "New value (0 to exit): ";
		std::cin >> value;

		if (value == 0)
			break;
		
		bar.SetValue(value);
	}
	
	return 0;
}
