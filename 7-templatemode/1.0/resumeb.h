#ifndef RESUMEB_H_
#define RESUMEB_H_

#include "resume.h"

class ResumeB : public Resume
{	
public:
	ResumeB(const char *str);
	ResumeB(const ResumeB &r);
	~ResumeB();
	ResumeB *Clone();
	void Show();
};
#endif	//RESUMEB_H_