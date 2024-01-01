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
		cout << "두 문자열이 다르다." << endl;
	}
	else {
		cout << "두 문자열이 같다." << endl;	
	}
	cout << (str1 == str2 ? "두 문자열이 같다." : "두 문자열이 다르다.") << endl;	

	str1 += str2;
	cout << str1 << endl;
	
	string str3 = "Hello class";
	string a = str3.substr(0, 5);	// 자르기
	cout << a << endl;

	int index = str3.find("Hello");	// 검색
	cout << index << endl;

	str2 = str3;					// 바꾸기
	cout << str2;

	
}

