#include <iostream>
#include <math.h>

int main()
{
	int placeHolder{}; // Variable used to ask for input at the end of the main function to stop program from instantly closing.

	std::cout << "What is the size of your integer?: ";
	int bitAmount{};
	std::cin >> bitAmount;
		
	std::cout << "\nYour " << bitAmount << "-bit signed variable has a range of " 
		<< -1 * (pow(2, bitAmount - 1)) << " to " << pow(2, bitAmount - 1) - 1 << ".\n\n";

	std::cin >> placeHolder; // Stops program from instantly closing by waiting for an input.
}
