#include <iostream> 
using namespace std;
int atk = 200;
void test01()
{
	int atk = 100;
	cout << "攻击力为 :" << atk << endl;
	cout << "全局攻击力为：" << ::atk << endl;

}





// 函数入口地址
int main() {

	test01();
	system("pause");//阻塞功能
	return 0;//返回正常退出 
}