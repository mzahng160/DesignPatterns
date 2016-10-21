#ifndef SIGNALTONA_H_
#define SIGNALTONA_H_

#include <iostream>

using namespace std;

class SingletonA : public Singleton   
{
	friend class Singleton;
public:
	void Show() {cout << "SingletonA" << endl;} 

private:
	SingletonA(){}
};

#endif //SIGNALTONA_H_