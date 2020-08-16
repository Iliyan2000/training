#pragma once
#include <iostream>
#include <string>

class Product
{
public:
	Product();

	std::string getName() const { return name; }
	float getPrice() const { return price; }
	void setName(const std::string& _name) { name = _name; }
	void setPrice(const float& _price) { price = _price; }
	bool operator>(Product& other) const;
	void Swap(Product& other);

private:
	std::string name;
	float price;
};
//(in/out)
std::istream& operator>>(std::istream& in,Product& obj);
std::ostream& operator<<(std::ostream& out, const Product& obj);