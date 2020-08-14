#pragma once
#include "Product.h"

class Shop
{
public:
	Shop();
	Shop(const Shop& other);
	Shop& operator=(const Shop& other);
	~Shop();

private:
	Product* products;
	size_t quantity;
	void copy(const Shop& other);
	void clear();
};