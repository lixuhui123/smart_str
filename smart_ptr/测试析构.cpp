//#include <iostream>
//using namespace std;
//class ptr
//{
//public:
//	~ptr()
//	{
//		cout << "~ptr" << endl;
//	}
//};
//
//
//int main()
//{
//	ptr p1;
//	ptr p2;
//	ptr* p3 = new ptr;
//	delete p3;
//	ptr* p4;/* 指针并没有申请实际的内存空间，只是四字节大小来存储地址，通过操作系统
//			   管理它自己*/
//	/* new出来的对象必须用delete来释放，因为delete通俗的来说也是一个类，首先它会调用
//	类的析构函数，然后调用operator delete 来free。*/
//	/* 写一篇关于动态内存管理的博客 */
//	//system("pause"); 
//	return 0;
//}