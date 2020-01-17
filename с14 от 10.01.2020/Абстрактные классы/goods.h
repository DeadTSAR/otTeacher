#pragma once
#include <string>
#include <iostream>

class goods{
	double price;
	std::string name;
public:
	goods(double price, std::string name)
		:price(price), name(name){
	}
	// Чистая виртуальная функция
	virtual void print() = 0;
	virtual std::string getName() = 0;
};