#ifndef SIGNALTON_H_
#define SIGNALTON_H_

class Singleton    
{  
public:  
    static Singleton* GetInstance(const char* name);  
    virtual void Show(){}
protected: //����Ϊ�����������˽�����ԣ������޷����ʸ���Ĺ��캯��  
    Singleton() {}
private:  
    static Singleton *singleton; //Ψһʵ����ָ��  
};

#endif //SIGNALTON_H_
