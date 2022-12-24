#include "SoftwareProduct.h"
#include <string>
#include <iostream>
using namespace std;

SoftwareProduct::SoftwareProduct()
{
	this->firm = "Noname";
	this->amount_memory = 0;
	this->version = "Noname";
	this->is_open = false;
}

SoftwareProduct::SoftwareProduct(string firm, int amount_memory, string version)
{
	this->firm = firm;
	this->amount_memory = amount_memory;
	this->version = version;
	this->is_open = false;
}


void SoftwareProduct::open()
{
	if (is_open == false)
	{
		is_open = !is_open;
		cout << "Программный продукт был открыт" << endl;
	}
	else
	{
		cout << "Программный продукт уже был открыт" << endl;
	}
}
void SoftwareProduct::close()
{
	if (is_open == true)
	{
		is_open = !is_open;
		cout << "Программный продукт был закрыт" << endl;
	}
	else
	{
		cout << "Программный продукт уже был закрыт" << endl;
	}
}


string SoftwareProduct::getFirm()
{
	return firm;
}
int SoftwareProduct::getAmountMemory()
{
	return amount_memory;
}
string SoftwareProduct::getVersion()
{
	return version;
}

void SoftwareProduct::setFirm(string firm)
{
	this->firm = firm;
}
void SoftwareProduct::setAmountMemory(int amount_memory)
{
	this->amount_memory = amount_memory;
}
void SoftwareProduct::setVersion(string version)
{
	this->version = version;
}
int SoftwareProduct::getRelease()
{
	return 0;
}
void SoftwareProduct::setRelease(int release)
{
}
string SoftwareProduct::getName()
{
	return "Noname";
}
void SoftwareProduct::setName(string name)
{
}

void SoftwareProduct::show()
{
	cout << "Firm: " << firm << " Amount memory: " << amount_memory << " Version: " << version << " Is open" << is_open << endl;
}
