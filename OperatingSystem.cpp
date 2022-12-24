
#include "OperatingSystem.h"
#include <iostream>

using namespace std;

OperatingSystem::OperatingSystem() :SoftwareProduct()
{
	this->release = 2000;
}

OperatingSystem::OperatingSystem(string firm, int amount_memory, string version, int release)
	: SoftwareProduct(firm, amount_memory, version)
{
	this->release = release;
}

void OperatingSystem::open()
{
	if (is_open == false)
	{
		is_open = !is_open;
		cout << "������� ���� �������" << endl;
	}
	else
	{
		cout << "������� ��� ���� �������" << endl;
	}
}
void OperatingSystem::close()
{
	if (is_open == true)
	{
		is_open = !is_open;
		cout << "������� ���� �������" << endl;
	}
	else
	{
		cout << "������� ��� ���� �������" << endl;
	}
}
void OperatingSystem::getStateConsole()
{
	if (this->is_open == true)
	{
		cout << "������� �������!!!" << endl;
	}
	else
	{
		cout << "������� �������... ." << endl;
	}
}
int OperatingSystem::getRelease()
{
	return release;
}
void OperatingSystem::setRelease(int release)
{
	this->release = release;
}

void OperatingSystem::show()
{
	cout << "Firm: " << firm << " Amount memory: " << amount_memory << " Version: " << version << " Is open: " << is_open << " Release: " << release << endl;
}

