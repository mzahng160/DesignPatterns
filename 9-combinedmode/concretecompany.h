#ifndef CONCRETECOMPANY_H_
#define CONCRETECOMPANY_H_

#include "company.h"
#include <iostream>
#include <list>
#include <string>

using namespace std;

class ConcreteCompany : public Company
{
	ConcreteCompany(string name):Company(name){}
	void Add(Company *pCom){m_listCompany.push_back(pCom);}
	void Show(int depth)
	{
		for(int i = 0; i < depth; i++)		
			cout << "-";
		cout << m_name << endl;
		list<Company *>::iterator  iter = m_listCompany.begin();
		for(; iter != m_listCompany.end(); iter++)
			(*iter)->Show(depth + 2);	
	}
	private:
		list <Company *> m_listCompany;
};

#endif //CONCRETECOMPANY_H_