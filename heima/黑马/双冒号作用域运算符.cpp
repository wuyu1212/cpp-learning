#include <iostream> 
using namespace std;
int atk = 200;
void test01()
{
	int atk = 100;
	cout << "������Ϊ :" << atk << endl;
	cout << "ȫ�ֹ�����Ϊ��" << ::atk << endl;

}





// ������ڵ�ַ
int main() {

	test01();
	system("pause");//��������
	return 0;//���������˳� 
}