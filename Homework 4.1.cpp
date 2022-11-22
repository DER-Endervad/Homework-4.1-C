#include <iostream>
#include <fstream>
#include "address.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::ifstream file("in.txt");
    if (file.is_open()) {
        int size;
        file >> size;
        address* arr = new address[size];
        for (int i = 0; i < size; i++) {
            arr[i].full(file);
        }
        file.close();
        std::ofstream out("out.txt", std::ios::out);
        if (out.is_open()) {
            out << size; out << "\n";
            for (int i = (size - 1); i >= 0; i--) {
                arr[i].get_output_address(out);
            }
        }
        out.close();
    }
}