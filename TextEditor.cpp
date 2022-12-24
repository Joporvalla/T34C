#include "TextEditor.h"
#include <iostream>

using namespace std;

TextEditor::TextEditor() :SoftwareProduct()
{
	this->name = "Noname";
}

TextEditor::TextEditor(string firm, int amount_memory, string version, string name)
	: SoftwareProduct(firm, amount_memory, version)
{
	this->name = name;
}

void TextEditor::open()
{
	if (is_open == false)
	{
		is_open = !is_open;
		cout << "��������� �������� ��� ������" << endl;
	}
	else
	{
		cout << "��������� �������� ��� ��� ������" << endl;
	}
}
void TextEditor::close()
{
	if (is_open == true)
	{
		is_open = !is_open;
		cout << "��������� �������� ��� ������" << endl;
	}
	else
	{
		cout << "��������� �������� ��� ��� ������" << endl;
	}
}

string TextEditor::getName()
{
	return name;
}
void TextEditor::setName(string name)
{
	this->name = name;
}

void TextEditor::show()
{
	cout << "Firm: " << firm << " Amount memory: " << amount_memory << " Version: " << version << " Is open: " << is_open << " Name: " << name << endl;
}