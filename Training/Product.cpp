#include "Product.h"

//public
Product::Product()
	:name("unknown"), price(0.0)
{}

//(in/out)
std::istream& operator>>(std::istream& in, const Product& obj)
{
	std::string trial_str;
	std::getline(in, trial_str);
	for (size_t i = 0; trial_str[i] != '-'; i++)
	{

	}
	return in;
}
std::ostream& operator<<(std::ostream& out, const Product& obj)
{
	return out << obj.getName() << ' ' << obj.getPrice();
}