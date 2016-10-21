#include "resumea.h"
#include "resumeb.h"

int main()
{
	ResumeA *a = new ResumeA("A");
	a->Show();	
	
	ResumeB *b = new ResumeB("B");
	b->Show();
	
	ResumeA *x = a->Clone();	
	delete a;
	a = NULL;
	
	x->Show();
	
	ResumeB *y = b->Clone();	
	delete b;
	b = NULL;
	
	y->Show();
	
	return 0;
}