#include "abstractfactory.h"

int main()
{	
	CoreFactory *facA = new FactoryA;
	CoreFactory *facB = new FactoryB;		
	
	SingleCore *coreSa = facA->CreateSingleCore();	
	coreSa->Show();
	
	SingleCore *coreSb = facB->CreateSingleCore();	
	coreSb->Show();
	
	MultiCore *coreMa = facA->CreateMultiCore();
	coreMa->Show();
	
	MultiCore *coreMb = facB->CreateMultiCore();
	coreMb->Show();
}