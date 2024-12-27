// Homework.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
using namespace std;
class Animal
{
public:
	virtual void makeSound() {};
	virtual ~Animal() {}
};

class Dog : public Animal
{
public:
	void makeSound() override
	{
		cout << "멍멍!!" << endl;
	}
};

class Cat : public Animal
{
public:
	void makeSound() override
	{
		cout << "냐~옹 냐~옹" << endl;
	}
};

class Cow : public Animal
{
public:
	void makeSound() override
	{
		cout << "으으으응ㅁ ~~~ 머" << endl;
	}
};

int main()
{
	int const size = 3;
	Animal* animals[size];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	for (int i = 0; i < size; ++i) 
	{
		animals[i]->makeSound();
	}

	// 메모리 해제
	for (int i = 0; i < size; ++i) 
	{
		delete animals[i];
	}
}
