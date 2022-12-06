#include "stdio.h"
#include "iostream"
#include <fstream>
#include <string>

using namespace std;

string getOsName()
{
#ifdef _WIN32
    cout << "Windows 32-bit" << endl;
#elif _WIN64
    cout << "Windows 64-bit" << endl;
#elif __APPLE__ || __MACH__
    cout << "Mac OSX" << endl;
#elif __linux__
    cout << "Linux" << endl;
#elif __FreeBSD__
    cout << "FreeBSD" << endl;
#elif __unix || __unix__
    cout << "Unix" << endl;
#else
    cout << "Other" << endl;
#endif
}

int main(int argc, char const *argv[])
{
    getOsName();
    /* code */
    return 0;
}