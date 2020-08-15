#include "Product.h"
#include <cstring>

//public
Product::Product()
	:name("unknown"), price(0.0)
{}
Product Product::operator>(const Product& other) const
{
	if (price > other.price)
	{
		return *this;
	}
	else if (price < other.price)
	{
		return other;
	}
	else
	{
		size_t i = 0;
		do
		{
			if (name[i] < other.name[i])
			{
				return *this;
			}
			else if (name[i] > other.name[i])
			{
				return other;
			}
			i++;
		} while (name[i] == other.name[i]);
		return *this;
	}
}

//(in/out)
std::istream& operator>>(std::istream& in, Product& obj)
{
	std::string trial_str;
	std::getline(in, trial_str);
	for (size_t i = 0; trial_str[i] != '-'; i++)
	{
		obj.setName(obj.getName() + trial_str[i]);
	}
	float trial_price;
	in >> trial_str;
	obj.setPrice(trial_price);
	return in;
}
std::ostream& operator<<(std::ostream& out, const Product& obj)
{
	return out << obj.getName() << ' ' << obj.getPrice();
}