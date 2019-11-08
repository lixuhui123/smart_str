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
/* //用strtok来分割，输出字符串用cin放在string中，用c_str强转
//先排序，然后选出最大的n个数，和最次大的n个数，次大n个数之和就是答案*/