#pragma once
#include <string>
#include <iostream>
#include "goods.h"

class nechto : public goods{
public:
	nechto(double price, std::string name)
		:goods(price, name){
	}
	virtual void print() override{
		std::cout << "Strange category : ";
		goods::print();
	}
	virtual std::string getName() override{
		return std::string("No name");
	}
};