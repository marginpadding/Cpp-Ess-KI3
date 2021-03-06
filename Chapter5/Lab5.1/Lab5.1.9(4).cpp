// Lab 5.1.9 (4).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class ShopItemOrder
{
public:
	ShopItemOrder(std::string name, double price, int numOfOrderedItems);

private:
	std::string name;
	double price;
	int numberOfOrders;

public:
	double GetTotalPrice();
	std::string GetInformation();

	void SetName(std::string name);
	void SetUnitPrice(double unitPrice);
	void SetNumberOfOrderedItems(int numOfOrderedItems);

	std::string GetName();
	double GetUnitPrice();
	int GetNumberOfOrderedItems();
};

void ShopItemOrder::SetName(std::string name)
{
	if (name.length() == 0)
		return;

	this->name = name;
}

void ShopItemOrder::SetNumberOfOrderedItems(int numOfOrderedItems)
{
	if (numOfOrderedItems < 0)
		return;

	this->numberOfOrders = numOfOrderedItems;
}

void ShopItemOrder::SetUnitPrice(double unitPrice)
{
	if (unitPrice < 0)
		return;

	this->price = unitPrice;
}



std::string ShopItemOrder::GetName()
{
	return this->name;
}

int ShopItemOrder::GetNumberOfOrderedItems()
{
	return this->numberOfOrders;
}

double ShopItemOrder::GetUnitPrice()
{
	return this->price;
}

ShopItemOrder::ShopItemOrder(std::string name, double unitPrice, int numOfOrderedItems)
{
	this->name = name;
	this->price = unitPrice;
	this->numberOfOrders = numOfOrderedItems;
}

double ShopItemOrder::GetTotalPrice()
{
	return numberOfOrders * price;
}

std::string  ShopItemOrder::GetInformation()
{
	return "product name:" + this->name + "\n-----\nunit price: " +
		std::to_string(this->price) + "\nnumber of ordered items: "
		+ std::to_string(this->numberOfOrders) + "\n";
}

int main()
{
	ShopItemOrder order("apple", 145.5, 4);
	std::cout << order.GetInformation() << std::endl;
	std::cout << "total price:" + std::to_string(order.GetTotalPrice()) << std::endl;
	std::cout << "unit price:" + std::to_string(order.GetUnitPrice()) << std::endl;
	std::cout << "name:" + order.GetName() << std::endl;
	std::cout << "number of ordered items:" + std::to_string(order.GetNumberOfOrderedItems()) << std::endl;

	order.SetName("orange");
	order.SetNumberOfOrderedItems(537);
	order.SetUnitPrice(3967.7);
	std::cout << order.GetInformation() << std::endl;
	std::cout << "total price is:" + std::to_string(order.GetTotalPrice()) << std::endl;
	std::cout << "unit price:" + std::to_string(order.GetUnitPrice()) << std::endl;
	std::cout << "name:" + order.GetName() << std::endl;
	std::cout << "number of ordered items:" + std::to_string(order.GetNumberOfOrderedItems()) << std::endl;

	return 0;
}
