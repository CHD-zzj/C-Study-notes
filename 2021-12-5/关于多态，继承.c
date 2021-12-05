#include<iostream>
using namespace std;
//template<typename T>//typename可替换成class,//声明一个模板，
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	//1自动类型推导
//	//mySwap(a, b);
//	//2显示指定类型
//	mySwap<int>(a, b);
//	cout << a <<endl<< b << endl;
//}



//template<class T>
//void mySwap(T& a, T& b) {
//		T temp = a;
//		a = b;
//		b = temp;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	
//	//mySwap(a, c);//推导不出一致的T类型
//	//func();//需要指定出T
//	
//}
//template<class T>
//void func() 
//{
//	cout << "func的调用" << endl;
//}
//void test02() {
//	func<double>();
//}
//
//template<class T>
//void mySwap(T & a, T & b) {
//			T temp = a;
//			a = b;
//			b = temp;
//	}
//template<class T>
//void mySort(T Arr[], int len) {
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (Arr[max] < Arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i) {
//			mySwap(Arr[max], Arr[i]);
//		}
//	}
//}
//template<class T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//void test01() {
//	char charArr[] = "badcfe";
//	mySort(charArr, 6);
//	printArray(charArr, 6);
//}
//void test02() {
//	int charArr[] = {1,2,3,4,5,6};
//	mySort(charArr, 6);
//	printArray(charArr, 6);
//}
//
//int myAdd01(int a,int b) {
//	return a + b;
//}
//template<class T>
//int myAdd02(T a, T b) {
//	return a + b;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd01(a, c) << endl;//发生了隐式转换
//	//cout << myAdd02(a, c) << endl;//自动类型推导的情况下不发生隐式转换
//	cout << myAdd02<int>(a, c) << endl;//指定类型推导可以
//}


//普通函数与模板函数的调用规则--------------------------------------------------------

//* 都能调用，优先调用普通函数
//* 可以通过空模板参数列表强制调用函数模板
//* 函数模板可以发生重载
//* 函数模板能产生更好的匹配，则优先调用模板
//void myPrint(int a, int b)
//{
//	cout << "普通函数调用" << endl;
//}
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "模板函数调用" << endl;
//}
//template<class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "重载的模板函数调用" << endl;
//}
//void test01() {
//	//myPrint<>(1, 2, 3);
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);//不转换直接调用模板函数
//}
//class Person {
//public:
//    Person(string name, int age)
//    {
//        this->m_Name = name;
//        this->m_Age = age;
//    }
//    string m_Name;
//    int m_Age;
//};
//template<class T>
//bool myCompare(T &a, T &b)
//{
//    if (a == b)
//        return true;
//    else
//        return false;
//}
//bool operator==(Person p1, Person p2);
//void test01() {
//    int a = 10;
//    int b = 20;
//    bool ret = myCompare(a, b);
//    if (ret) {
//        cout << "a==b" << endl;
//    }
//    else {
//        cout << "a!=b" << endl;
//    }
//}
#include<string>


//类模板------------------------------------------------------
//template<class T>
//类
//template<class NameType,class AgeType= int>//年龄默认为整形
//class Person {
//public:
//	Person(NameType name, AgeType age) {
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	void showPerson() {
//		cout << "name:" << this->m_Name << endl;
//		cout << "age:" << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//void test01() {
//	//Person<string, int>p1("sun", 999);//<>是模板的参数列表
//	//p1.showPerson();
//	//Person<string,int>p1("sun", 999);
//}
//void test02() {
//	Person<string>p("zhubajie", 99);
//	p.showPerson();
//}


//类模板的成员函数
//class Person1{
//public:
//	void showPerson1() {
//		cout << "showperson1" << endl;
//	}
//};
//class Person2 {
//public:
//	void showPerson2() {
//		cout << "showperson2" << endl;
//	}
//};
//template<class T>
//class Myclass {
//public:
//	T obj;
//	//类模板的成员函数
//	void func1() {
//		obj.showPerson1();
//	}
//	void func2() {
//		obj.showPerson2();
//	}
//};
//void test01() {
//	Myclass<Person1> c;
//	c.func1();
//	//c.func2();
//}



//类模板的对象做函数参数
template<class T1,class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	void showPerson() {
		cout << "name:" << this->m_Name << endl;
		cout << "age:" << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
};
//1.指定传入类型
void PrintPerson1(Person<string,int>&p) {
	p.showPerson();
}
//2.参数模板化
template<class T1,class T2>
void PrintPerson2(Person<T1, T2>& p) {
	p.showPerson();
	cout << typeid(T1).name() << endl;
	cout << typeid(T2).name() << endl;
}

void test02() {
	Person<string, int>p("sun", 100);
	PrintPerson2(p);
}
//3.整个类型模板化
template<class T>
void PrintPerson3(T &p) {
	p.showPerson();
	cout << typeid(T).name() << endl;
	
}
void test03() {
	Person<string, int>p("tang", 10000);
	PrintPerson3(p);
}
void test01() {
	Person<string, int>p("sunwukong", 100);
	PrintPerson1(p);
}
int main() {
	test03();
	system("pause");
	return 0;
}
