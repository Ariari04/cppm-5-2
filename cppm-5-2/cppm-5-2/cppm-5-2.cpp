﻿// cppm-5-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
class Triangle {
protected:
	int a, b, c;
	int A, B, C;
public:
	Triangle() {
		a = 0;
		b = 0;
		c = 0;
		A = 0;
		B = 0;
		C = 0;
	}
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->A = A;
		this->a = a;
		this->B = B;
		this->b = b;
		this->C = C;
		this->c = c;
	}
	virtual std::string print_type() {
		if (a == b && c == b && A == 60 && B == 60 && C == 60) {
			return "Равносторонний треугольник: \nСтороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + "\nУглы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + "\n";
		}
		else if (a == c && A == C) {
			return "Равнобедренный треугольник: \nСтороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + "\nУглы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + "\n";
		}
		else if (C == 90) {
			return "Прямоугольный треугольник: \nСтороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + "\nУглы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + "\n";
		}
		else {
			return "Треугольник: \nСтороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + "\nУглы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + "\n";
		}
	}
};

class Quadrilateral :public Triangle {
	int d, D;
public:
	Quadrilateral() {

		a = 0;
		b = 0;
		c = 0;
		A = 0;
		B = 0;
		C = 0;
		d = 0;
		D = 0;
	}
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->A = A;
		this->a = a;
		this->B = B;
		this->b = b;
		this->C = C;
		this->c = c;
		this->D = D;
		this->d = d;
	}
	std::string print_type() override{
		if (a == c && c == b && c == d && A == 90 && B == 90 && C == 90 && D == 90) {
			return "Квадрат: \nСтороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + " d = " + to_string(d) + "\nУглы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + " D = " + to_string(D) + "\n";
		}
		else if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) {
			return "Прямоугольник:\nСтороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + " d = " + to_string(d) + "\nУглы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + " D = " + to_string(D) + "\n";
		}
		else if (b == c && a == b && c == d && A == C && B == D) {
			return "Ромб: \nСтороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + " d = " + to_string(d) + "\nУглы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + " D = " + to_string(D) + "\n";
		}
		else if (a == c && b == d && A == C && B == D) {
			return "Параллелограмм: \nСтороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + " d = " + to_string(d) + "\nУглы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + " D = " + to_string(D) + "\n";
		}
		else {
			return "Четырёхугольник: \nСтороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + " d = " + to_string(d) + "\nУглы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + " D = " + to_string(D) + "\n";
		}
	}

};

int main()
{
	setlocale(LC_ALL, "Russian");

	Triangle a(10, 20, 30, 50, 60, 70);
	Triangle c(10, 20, 30, 50, 60, 90);
	Triangle e(10, 20, 10, 50, 60, 50);
	Triangle g(30, 30, 30, 60, 60, 60);

	Quadrilateral b(10, 20, 30, 40, 50, 60, 70, 80);
	Quadrilateral d(10, 20, 10, 20, 90, 90, 90, 90);
	Quadrilateral f(20, 20, 20, 20, 90, 90, 90, 90);
	Quadrilateral h(20, 30, 20, 30, 30, 40, 30, 40);
	Quadrilateral j(30, 30, 30, 30, 30, 40, 30, 40);
	cout <<a.print_type()<<c.print_type()<<e.print_type()<<g.print_type() << b.print_type() << d.print_type() << f.print_type() << h.print_type() << j.print_type();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
