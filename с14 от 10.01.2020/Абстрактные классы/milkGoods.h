#pragma once
#include <string>
#include <iostream>
#include "goods.h"

class milkGoods : public goods{
public:
	milkGoods(double price, std::string name)
		:goods(price, name){
	}
	virtual void print() override{
		std::cout << "Milk category : ";
		goods::print();
	}
	virtual std::string getName() override{
		return "Milk product " + goods::getName();
	}
};