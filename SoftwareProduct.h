#pragma once
#include "SoftwareProduct.h"
#include <iostream>
using namespace std;


class SoftwareProduct
{
protected:
	string firm;
	int amount_memory;
	string version;
	bool is_open;
public:
	SoftwareProduct();
	SoftwareProduct(string firm, int amount_memory, string version);
	virtual void open();
	virtual void close();
	string getFirm();
	int getAmountMemory();
	string getVersion();
	void setFirm(string firm);
	void setAmountMemory(int amount_memory);
	void setVersion(string version);
	virtual void show();
	int getRelease();
	string getName();
	void setName(string name);
	void setRelease(int release);
};
