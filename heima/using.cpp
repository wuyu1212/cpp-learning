#include <iostream> 
using namespace std;

namespace KingGlory
{
	int sunwukong = 10;
}
void test01() 
{
	int sunwukong = 20;
	//using ���� ע����������
	//д��using������ �������д��룺�Ժ󿴵���sunwukong����kingglory�µ�
	//���Ǳ������оͽ�ԭ��
	//������
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
	//using ����ָ��
	using namespace KingGlory;//�����߷���
	using namespace LOL;//��LOL����
	cout << LOL::sunwukong << endl;
}
int main() {
	//test01();
	test02();

	system("pause");
	return 0;

}