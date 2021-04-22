#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int main() {

    while (true) {
        srand(time(nullptr) % rand());
        if (rand() % 2 == 0) {
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

            SetConsoleTextAttribute(handle, rand() % 16);
            std::cout << rand() % 2;
        }
        else {
            std::cout << " ";
        }
    }

    return 0;
}