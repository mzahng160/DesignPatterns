#ifndef RESUMEA_H_
#define RESUMEA_H_

#include "resume.h"

class ResumeA : public Resume
{	
public:
	ResumeA(const char *str);
	ResumeA(const ResumeA &r);
	~ResumeA();
	ResumeA *Clone();
	void Show();
	
	void SetPersonalInfo(const char* str);
	void SetEducation(const char* str);
	void SetWorkExp(const char* str);
};
#endif // RESUMEA_H_