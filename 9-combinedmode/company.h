#ifndef COMPANY_H_
#define COMPANY_H_

#include <iostream>
#include <string>

using namespace std;

class Company
{	
	public:
		Company(string name){m_name = name;}
		virtual ~Company(){}
		virtual void Add(Company *pCom){}
		virtual void Show(int depth){}
		
	protected:
		string m_name;
};
#endif //COMPANY_H_