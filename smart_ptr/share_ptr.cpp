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
//	// shared_ptr通过引用计数支持智能指针对象的拷贝
//	shared_ptr<Date> sp(new Date);
//	shared_ptr<Date> copy(sp);
//	cout << "ref count:" << sp.use_count() << endl;/* 共同使用这片内存空间的对象的个数 */
//	cout << "ref count:" << copy.use_count() << endl;
//	system("pause"); 
//	return 0;
//}