// Lab 6.5.8 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


class IP
{
private:
	string ip;

public:
	IP();
	IP(string ipAdress);
	string ToString();
};

IP::IP()
{
	this->ip = "0.0.0.0";
}

IP::IP(string ipAdress)
{
	this->ip = ipAdress;
}

string IP::ToString()
{
	return this->ip;
}


struct Collection {
	int elno;
	IP *elements;
};


class Network
{
private:
	Collection addresses;
public:
	Network();
	Network(Collection addresses);
	void PrintAdressses();
	void AddAddress(IP newAddress);
};

Network::Network()
{
	this->addresses = Collection();
}

Network::Network(Collection addresses)
{
	this->addresses = addresses;
}

void Network::AddAddress(IP newAddress)
{
	IP *copied;

	copied = new IP[this->addresses.elno + 1];

	for (int i = 0; i < this->addresses.elno; i++) {
		copied[i] = this->addresses.elements[i];
	}

	delete[] this->addresses.elements;

	copied[this->addresses.elno] = newAddress;
	this->addresses.elements = copied;
	this->addresses.elno++;
}

void Network::PrintAdressses()
{
	for (int i = 0; i < this->addresses.elno; i++)
		cout << this->addresses.elements[i].ToString() << endl;
}


int main()
{
	string input;
	Network *net1 = new Network();
	Network *net2 = new Network();

	cin >> input;
	net1->AddAddress(IP(input));

	cin >> input;
	net1->AddAddress(IP(input));

	cin >> input;
	net1->AddAddress(IP(input));
	net2->AddAddress(IP(input));

	cin >> input;
	net2->AddAddress(IP(input));

	cin >> input;
	net2->AddAddress(IP(input));

	cout << "network1: " << endl;
	net1->PrintAdressses();

	cout << "network2: " << endl;
	net2->PrintAdressses();

	return 0;
}

