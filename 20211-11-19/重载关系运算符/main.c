#include<iostream>
#include<string>
using namespace std;
////==, !=重载
//class Person {
//public:
//	Person(string name, int age):m_Name(name),m_Age(age) {
//	}
//	//bool operator==(person& p1) {
//	//	if (this->m_age == p1.m_age && this->m_name == p1.m_name)
//	//	{
//	//		return true;
//	//	}
//	//	else
//	//		return false;
//	//}
//	//firend  Person operator==(Person& p1, Person& p2);
//	string m_Name;
//	int m_Age;
//};
//bool operator==(Person &p1, Person& p2) {
//	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
//			{
//				return true;
//			}
//			else
//				return false;
//}
//void test01() {
//	Person p1("tom", 18);
//	Person p2("tom", 18);
//	if (p1 == p2) {
//		cout << "p1与p2相等" << endl;
//	}
//}

class MyPrint {
public:
	void operator() (string test) 
	{
		cout << test << endl;
	}
};
class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};
void test02() {
	MyAdd myadd;
	int ret = myadd(100,200);
	cout << MyAdd()(100, 300)<<endl;//在当前行创建一个匿名函数对象，当前行执行结束就会被释放
	cout<<"ret= "<<ret << endl;
}
void test01() {
	MyPrint myprint;
	myprint("hello word");//很像函数调用，称为仿函数 很灵活。没固定写法
}

//函数调用重载()//重载后的使用方式非常像函数调用所以又叫仿函数

int main() {
	test02();
	//test01();
	return 0;

}
