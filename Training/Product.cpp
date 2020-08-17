#include "Product.h"
#include <cstring>
#include <iomanip>

//public
Product::Product()
	:name("unknown"), price(0.0)
{}
bool Product::operator>(Product& other) const
{
	if (price > other.price)
	{
		return true;
	}
	else if (price < other.price)
	{
		return false;
	}
	else
	{
		size_t i = 0;
		do
		{
			if (name[i] < other.name[i])
			{
				return true;
			}
			else if (name[i] > other.name[i])
			{
				return false;
			}
			i++;
		} while (name[i] == other.name[i]);
		return true; //spare case
	}
}
void Product::Swap(Product& other)
{
	Product temp = other;
	other = *this;
	*this = temp;
}

//(in/out)
std::istream& operator>>(std::istream& in, Product& obj)
{
	std::string trial_str;
	std::getline(in, trial_str, '-');
	obj.setName(trial_str);
	float trial_price;
	in >> trial_price; in.get();
	obj.setPrice(trial_price);
	return in;
}
std::ostream& operator<<(std::ostream& out, const Product& obj)
{
	out << std::fixed << std::setprecision(2);
	return out << obj.getName() << '-' << obj.getPrice();
}