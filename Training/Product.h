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
	
	//(in/out)
	friend std::istream& operator>>(std::istream& in,Product& obj);
	friend std::ostream& operator<<(std::ostream& out, const Product& obj);

private:
	std::string name;
	float price;
};
