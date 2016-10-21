#ifndef POLICYMODE_H_
#define POLICYMODE_H_

#include <iostream>

using namespace std;

//����ӿ�  
class ReplaceAlgorithm  
{  
public:  
    virtual void Replace() = 0;  
};  
//���־�����滻�㷨  
class LRU_ReplaceAlgorithm : public ReplaceAlgorithm  
{  
public:  
    void Replace() { cout<<"Least Recently Used replace algorithm"<<endl; }  
};  
  
class FIFO_ReplaceAlgorithm : public ReplaceAlgorithm  
{  
public:  
    void Replace() { cout<<"First in First out replace algorithm"<<endl; }  
};  
class Random_ReplaceAlgorithm: public ReplaceAlgorithm  
{  
public:  
    void Replace() { cout<<"Random replace algorithm"<<endl; }  
};

//Cache��Ҫ�õ��滻�㷨  
template <class RA>  
class Cache  
{  
private:  
    RA m_ra;  
public:  
    Cache() { }  
    ~Cache() { }  
    void Replace() { m_ra.Replace(); }  
};

#endif //POLICYMODE_H_