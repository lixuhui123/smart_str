#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
	//static 
	int i = 0;
	cout << typeid(i).name() << endl;
	system("pause"); 
	return 0;
}
/* //��strtok���ָ����ַ�����cin����string�У���c_strǿת
//������Ȼ��ѡ������n����������δ��n�������δ�n����֮�;��Ǵ�*/