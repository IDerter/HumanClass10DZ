#pragma once
#include <iostream>
class Human 
{
protected: //дает доступ к переменным из наслед классов
	std::string surname;
	std::string name;
	std::string midname;
	int age;
public:

	Human(std::string surname = " ", std::string name = " ", std::string midname = " ", int age = 18)
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	~Human()
	{
		std::cout << "DesstructorHuman" << std::endl;
	}
	virtual void Print() = 0;
	
};

class Student : public Human
{
	bool on_lesson;
public:
	Student(std::string surname = " ", std::string name = " ", std::string midname = " ", int age = 18)
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	~Student()
	{
		std::cout << "DesstructorStudent" << std::endl;
	}
	void Print() override
	{
		std::cout << surname << " " << name << " " << midname << " " << age << " " << std::endl;
	}
};

class Boss : public Human 
{
protected:
	int number_of_workers;
public:
	Boss(std::string surname = " ", std::string name = " ", std::string midname = " ", int age = 18, int number_of_workers = 5) 
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
		this->number_of_workers = number_of_workers;
	}
	void Print() override
	{
		std::cout << surname << " " << name << " " << midname << " " << age << " " << number_of_workers<<" " <<std::endl;
	}
	~Boss()
	{
		std::cout << "DesstructorBoss"<<std::endl;
	}
	
};