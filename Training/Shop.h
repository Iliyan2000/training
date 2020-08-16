#pragma once
#include "Product.h"

class Shop
{
public:
	Shop();
	Shop(const Shop& other);
	Shop& operator=(const Shop& other);
	~Shop();

	void Read_products(const std::string& file_name);
	void Print_products();
	void Sort();

private:
	Product* products;
	size_t quantity;
	void copy(const Shop& other);
	void clear();
};