#include "signalton.h"
#include <iostream>

using namespace std;

int main()
{	
	Singleton::GetInstance("SingletonA")->Show();
	
	Singleton::GetInstance("SingletonB")->Show();	// no use for create class SingletonB

	return 0;
}
