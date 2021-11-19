#include<iostream>
#include<string>
using namespace std;
class Phone 
{
public:
	Phone(string pname):m_PName(pname)
	{
	}
	string m_PName;
};
class Person 
{
public:
	//相当于Phone m_Phone=pname
	Person(string name ,string pname):m_Name(name),m_Phone(pname)
	{
		
	}
	string m_Name;
	Phone m_Phone;
};

void test01() {
	Person p("张三","三星");
	cout << "" << p.m_Name << "" << p.m_Phone.m_PName;//""<< p.m_Phone.m_PName<<endl;
}
class Person1 {
public:
	static int m_A;//类内声明
private:
	static int m_B;
};
int Person1::m_A = 100;//类外初始化
int Person1::m_B = 200;
int main() {
	Person1 p1;
	Person1 p2;
	p2.m_A = 200;//因为是static静态变量，所以与p1共同操作同一块内存
	cout << p1.m_A << endl;
	//cout << Person1::m_B;//私有的静态变量也不可访问，只能在类内访问
	//test01();
	system("pause");
	return 0;
}
