#ifndef RESUME_H_
#define RESUME_H_

#include <iostream>

class Resume
{
protected:
	char *name;
	char *sex;
	char *workExp;
	char *Education;
public:
	Resume() {}
	virtual ~Resume() {}
	virtual Resume* Clone() {return NULL;}
	virtual void Set(char *n){}
	virtual void Show(){}
	
	void FillResume(const char *sex, const char *workExp, const char *Education)
	{
		SetPersonalInfo(sex);
		SetEducation(Education);
		SetWorkExp(workExp);
	}
	
protected:
	virtual void SetPersonalInfo(const char* str){}
	virtual void SetEducation(const char* str){}
	virtual void SetWorkExp(const char* str){}
};
#endif //RESUME_H_