#include "staticFactory.h"

int main()
{	
	Factory *facA = new FactoryA;
	Factory *facB = new FactoryB;		
	
	SingleCore *coreA = facA->CreateSingleCore();	
	coreA->Show();
	
	SingleCore *coreB = facB->CreateSingleCore();	
	coreB->Show();
}