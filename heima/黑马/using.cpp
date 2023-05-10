#include <iostream> 
using namespace std;

namespace KingGlory
{
	int sunwukong = 10;
}
void test01() 
{
	int sunwukong = 20;
	//using 声明 注意避免二义性
	//写了using申明后 下面这行代码：以后看到的sunwukong是用kingglory下的
	//但是编译器有就近原则
	//二义性
	//using KingGlory::sunwukong;
	cout << sunwukong << endl;
}

namespace LOL
{
	int sunwukong = 30;
}
void test02()
{
	//int sunwukong = 20;
	//using 编译指令
	using namespace KingGlory;//打开王者房间
	using namespace LOL;//打开LOL房间
	cout << LOL::sunwukong << endl;
}
int main() {
	//test01();
	test02();

	system("pause");
	return 0;

}