#include "Shop.h"

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