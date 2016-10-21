#include "resumeb.h"
#include <iostream>
#include "string.h"

using namespace std;

ResumeB::ResumeB(const char *str)
{
	if(str == NULL)
	{		
		name = new char[1];
		name[0] = '\0';
	}
	else
	{
		name = new char[strlen(str) + 1];
		strcpy(name, str);
	}
}
ResumeB::ResumeB(const ResumeB &r)
{
	name = new char[strlen(r.name) + 1];
	strcpy(name, r.name);
}
ResumeB::~ResumeB()
{	
	delete[] name;
}
ResumeB *ResumeB::Clone()
{
	return new ResumeB(*this);
}
void ResumeB::Show()
{
	cout << "Resume name: " << name << endl;
}