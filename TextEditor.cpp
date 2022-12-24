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
		cout << "Текстовый редактор был открыт" << endl;
	}
	else
	{
		cout << "Текстовый редактор уже был открыт" << endl;
	}
}
void TextEditor::close()
{
	if (is_open == true)
	{
		is_open = !is_open;
		cout << "Текстовый редактор был закрыт" << endl;
	}
	else
	{
		cout << "Текстовый редактор уже был закрыт" << endl;
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