#pragma once
#include <iostream>
#include <vector>
#include <string>

//������� �� ��������
/* ��������� ����� ����:
	- ������
	- �������
	- ��������������� �����
	- ����������� ����� ������
	- ����� ������
		����������:
		- ������������
		
	����������� � ����������
	������� ������ ���� � 
	����� �����*/

class myClass {
public:
	template<typename Type>
	void f00(Type a);
	//����� �������� ������������ ��-�� �����������
	void f02() {}
	//����� �������� ������������ ��-�� ����� �����������
	void f03();
	//������� ����������� ������������
	static int getCount();
	static std::vector<int> vectorName;
private:
	int a;
	int b;
	static int count;
	static const int g_rgav{ 10 };//������������� �����������
};

//extern int g; - ���� �� �����������

int myClass::count{ 0 };
// 0
// service
// programm - �������� ������� � ��.
// brs - ��������������� ���������� ����������, ��������� ������� � (��)������������������
// bss - ��. ����
// stack - 
// heap - ������ ���������� �������
// args

template<typename Type>
inline void myClass::f00(Type a){

}
