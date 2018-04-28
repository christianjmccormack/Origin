#include <iostream>
#include <string>

#include "FOrigin.h"

int main()
{
	std::cout << "This is the origin...powering up" << std::endl;
	
	FConsciousness NewHost;
	NewHost.Create();
	std::cout << "New Host instantiated..." << std::endl;
	std::cout << "New Host name is: " << NewHost.GetName() << "." << std::endl;
	


	return 0;
}