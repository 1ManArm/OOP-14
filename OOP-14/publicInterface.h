#pragma once
#include <iostream>
#include <vector>
#include <string>

//Вводная по шаблонам
/* Шаблонами могут быть:
	- классы
	- функции
	- переопределения типов
	- статический метод класса
	- метод класса
		исключения:
		- конструкторы
		
	Определение и реализация
	шаблона должны быть в 
	одном файле*/

class myClass {
public:
	template<typename Type>
	void f00(Type a);
	//будет пытаться встраиваться из-за определения
	void f02() {}
	//будет пытаться встраиваться из-за места определения
	void f03();
	//потерял возможность встраиваться
	static int getCount();
	static std::vector<int> vectorName;
private:
	int a;
	int b;
	static int count;
	static const int g_rgav{ 10 };//инициализация обязательна
};

//extern int g; - если не статическая

int myClass::count{ 0 };
// 0
// service
// programm - описание функций и пр.
// brs - местонахождение глобальных переменных, созданных вручную и (не)инициализированных
// bss - см. выше
// stack - 
// heap - ручное управление памятью
// args

template<typename Type>
inline void myClass::f00(Type a){

}
