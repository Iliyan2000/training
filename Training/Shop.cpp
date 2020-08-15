#include "Shop.h"
#include <fstream>

//public
Shop::Shop()
	:quantity(1), products(new Product[quantity])
{}
Shop::Shop(const Shop& other)
{
	copy(other);
}
Shop& Shop::operator=(const Shop& other)
{
	if (&other != this)
	{
		clear();
		copy(other);
	}
	return *this;
}
Shop::~Shop()
{
	clear();
}
void Shop::Read_products(const std::string& file_name)
{
	std::ifstream in(file_name);
	in >> quantity; in.get();
	clear();
	products = new Product[quantity];
	for (size_t i = 0; i < quantity; i++)
	{
		in >> products[i];
	}
	in.close();
}
void Shop::Print_products()
{
	for (size_t i = 0; i < quantity; i++)
	{
		std::cout << products[i] << std::endl;
	}
}

//private
void Shop::copy(const Shop& other)
{
	quantity = other.quantity;
	products = new Product[quantity];
	for (size_t i = 0; i < quantity; i++)
	{
		products[i] = other.products[i];
	}
}
void Shop::clear()
{
	delete[]products;
}