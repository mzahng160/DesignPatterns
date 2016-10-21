#ifndef SIGNALTONB_H_
#define SIGNALTONB_H_

#include <iostream>

using namespace std;

class SingletonB : public Singleton   
{
	friend class Singleton;
public:
	void Show() {cout << "SingletonB" << endl;} 

private:
	SingletonB(){}
};

#endif //SIGNALTONB_H_