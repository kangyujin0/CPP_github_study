#include <iostream>
using namespace std;

class Employee
{
private:
	char* Name = NULL;
public:
	int Id;										// �����ȣ
	Employee(int id = 0) : Id(id) {}
	Employee(const char* name, int id) : Id(id)
	{
		rename(name);
	}
	Employee& rename(const char* name)
	{
		if (Name) delete Name;
		Name = new char[strlen(name) + 1];
		strcpy(Name, name);
		return *this;
	}
	void Show()
	{
		printf("�����̸�(���): %s(%d)\n", Name, Id);
	}
	~Employee()
	{
		if (Name) delete Name;
	}
	virtual void details() const {}				// �����Լ�(���λ���)
};
class Manager : Employee
{
private:
	char* Group = NULL;							// �Ҽ�
public:
	int Rank;									// ����	
	Manager(int rank = 0) : Rank(rank) {};
	Manager(const char* name, int id, const char* group = NULL, int rank = 0) : Employee(name, id), Rank(rank)
	{
		regroup(group);
	}
	Manager& regroup(const char* group = NULL)
	{
		if (Group) delete Group;
		Group = new char[strlen(group) + 1];
		strcpy(Group, group);
		return *this;
	}
	char* group()
	{
		return (char*)Group;
	}
	void Show()
	{
		printf("�Ҽ�(����): %s(%d)\n", Group, Rank);
	}
	~Manager()
	{
		if (Group) delete[] Group;
	}
	virtual void details() const override {};
};
class Developer : public Employee
{
	char* ProgramLang = NULL;					// ���α׷��־��
public:
	int Career;									// ���
	Developer(const char* name, int id, const char* programLang, int career) : Employee(name, id), Career(career)
	{
		reProgramLang(programLang);
	}
	Developer& reProgramLang(const char* programLang)
	{
		if (ProgramLang) delete ProgramLang;
		ProgramLang = new char[strlen(programLang) + 1];
		strcpy(ProgramLang, programLang);
		return *this;
	}
	~Developer()
	{
		if (ProgramLang) delete ProgramLang;
	}
	void Show()
	{
		printf("���α׷��־��(���): %s(%d)\n", ProgramLang, Career);
	}
	virtual void details() const override {};
};
int main()
{
	Employee employee("yujin", 1111);
	employee.Show();

	Manager manager("jin", 1122, "IT", 1);
	manager.Show();

	Developer developer("kang", 2222, "C++", 1);
	developer.Show();

	return 0;
}