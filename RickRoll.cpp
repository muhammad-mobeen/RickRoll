#include <stdlib.h>
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char* argv[])
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i = 1;
    string url = "https://bit.ly/3iiJv0L";

    for (; i < argc; i++) {
        url = url + string(argv[i]);
        if (i != argc - 1) url = url + string("+");
    }

    string op = string("start ").append(url);

    for (int j = 0; j < 10; j++)
    {
        Sleep(800);
        system(op.c_str());
    }

    SetConsoleTextAttribute(hConsole, 10);
    cout << "Got Rick Rolled?" << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << "Hahahahaha" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "Credits: Muhammad Mobeen (Markhor)\nGithub: github.com/muhammad-mobeen\n\n";
    system("pause");

    return 0;
}