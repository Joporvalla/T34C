#pragma once
#include "SoftwareProduct.h"
#include <iostream>

class TextEditor :
    public SoftwareProduct
{
private:
    string name;

public:
    TextEditor();
    TextEditor(string firm, int amount_memory, string version, string name);
    void open();
    void close();
    string getName();
    void setName(string name);
    void show();
};
