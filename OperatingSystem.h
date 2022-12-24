#pragma once
#include "SoftwareProduct.h"
#include <iostream>

class OperatingSystem :
    public SoftwareProduct
{
private:
    int release;
public:
    OperatingSystem();
    OperatingSystem(string firm, int amount_memory, string version, int release);
    void open();
    void close();
    void getStateConsole();
    int getRelease();
    void setRelease(int release);
    void show();
};

