#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string str1 = "String";
	string str2 = "class";

	cout << str1 + str2 << endl;
	cout << str1;
	cout << endl;

	if (str1 != str2) {
		cout << "�� ���ڿ��� �ٸ���." << endl;
	}
	else {
		cout << "�� ���ڿ��� ����." << endl;	
	}
	cout << (str1 == str2 ? "�� ���ڿ��� ����." : "�� ���ڿ��� �ٸ���.") << endl;	

	str1 += str2;
	cout << str1 << endl;
	
	string str3 = "Hello class";
	string a = str3.substr(0, 5);	// �ڸ���
	cout << a << endl;

	int index = str3.find("Hello");	// �˻�
	cout << index << endl;

	str2 = str3;					// �ٲٱ�
	cout << str2;

	
}

