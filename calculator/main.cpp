#include <iostream>
#include <unistd.h>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "Функции калькулятора:" << endl
             << "help - Для вызова справки" << endl
             << "ln - вычисление натурального логарифма" << endl
             << "log - вычисление логарифма с указанным основанием" << endl;
        exit(0);
    }
    int opt;
    while ((opt = getopt(argc, argv, "a:")) != -1)
    {
        string a = optarg;

        if (a == "help")
        {
            cout << "Справка\n"
                 << "Функции калькулятора:" << endl
                 << "ln - вычисление натурального логарифма" << endl
                 << "log - вычисление логарифма с указанным основанием" << endl;
        }
        if (a == "ln")
        {
            cout << log(atoi(argv[3])) << endl;
        }
        if (a == "log")
        {
            if (argc < 5)
            {
                cerr << "Ошибка: Недостаточно аргументов для вычисления логарифма с указанным основанием." << endl;
                exit(1);
            }
            cout << log(atoi(argv[4])) / log(atoi(argv[3])) << endl;
        }
    }

    return 0;
}
