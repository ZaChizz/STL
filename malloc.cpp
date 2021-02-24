//
// Created by Admin on 24.02.2021.
//

#include <iostream>
#include <cstdlib>

int main()
{
    int len;

    std::cout << "Укажите длину строки в символах: ";
    std::cin >> len;

    std::string* buffer = (std::string*) malloc(1);          // динамическое выделение памяти под символьную строку
    if (buffer==NULL) exit (1);                       // если выделение памяти не выполнилось, завершить программу
/*
    for (int ix = 0; ix < len; ix++)
        buffer[ix] = rand() % 26 + 'a';
        */
    buffer[1]='v';                            // нулевой элемент

    std::cout << "Случайная строка: " << *buffer << std::endl;
    free(buffer);                                     // освобождаем память

    return 0;
}

