//#include <iostream>
//#include <memory>
//using namespace std;
//class Date
//{
//public:
//	Date() { cout << "Date()" << endl; }
//	~Date() { cout << "~Date()" << endl; }
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	// shared_ptrͨ�����ü���֧������ָ�����Ŀ���
//	shared_ptr<Date> sp(new Date);
//	shared_ptr<Date> copy(sp);
//	cout << "ref count:" << sp.use_count() << endl;/* ��ͬʹ����Ƭ�ڴ�ռ�Ķ���ĸ��� */
//	cout << "ref count:" << copy.use_count() << endl;
//	system("pause"); 
//	return 0;
//}