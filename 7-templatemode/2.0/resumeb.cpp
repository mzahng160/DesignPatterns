#include "resumeb.h"
#include <iostream>
#include "string.h"

using namespace std;

ResumeB::ResumeB(const char *str)
{
	name = NULL;
	sex = NULL;
	workExp = NULL;
	Education = NULL;
	
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
	
	sex = new char[strlen(r.sex) + 1];
	strcpy(sex, r.sex);
	
	Education = new char[strlen(r.Education) + 1];
	strcpy(Education, r.Education);
	
	workExp = new char[strlen(r.workExp) + 1];
	strcpy(workExp, r.workExp);
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
	cout << "******************" << endl;
	cout << "Resume type name: " << name << endl;	
	cout << "info			" << sex << endl;
	cout << "Education		" << Education << endl;
	cout << "WorkExperience		" << workExp << endl;
	cout << "******************" << endl;
}

void ResumeB::SetPersonalInfo(const char* str)
{	
	if(str == NULL)
	{		
		sex = new char[1];
		sex[0] = '\0';
	}
	else
	{
		sex = new char[strlen(str) + 1];
		strcpy(sex, str);
	}
}
void ResumeB::SetEducation(const char* str)
{	
	if(str == NULL)
	{		
		Education = new char[1];
		Education[0] = '\0';
	}
	else
	{
		Education = new char[strlen(str) + 1];
		strcpy(Education, str);
	}	
}
void ResumeB::SetWorkExp(const char* str)
{
	if(str == NULL)
	{		
		workExp = new char[1];
		workExp[0] = '\0';
	}
	else
	{
		workExp = new char[strlen(str) + 1];
		strcpy(workExp, str);
	}	
}