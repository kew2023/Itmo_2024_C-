#include <iostream>
#include <cstring>
#include <cstdlib> // для функции atoi

using namespace std;

int main(int argc, char *argv[])
{
    // Проверяем количество аргументов
    if (argc < 4)
    {
        cerr << "Ошибка: недостаточно аргументов. Используйте: <имя программы> -a|-m число1 число2" << endl;
        return 1;
    }

    // Проверяем флаг операции
    if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0)
    {
        cerr << "Ошибка: некорректный флаг операции. Используйте -a для суммы или -m для произведения." << endl;
        return 1;
    }

    // Конвертируем аргументы в целые числа
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    // Проверяем корректность конвертации (если аргументы некорректны, atoi возвращает 0)
    if ((num1 == 0 && argv[2][0] != '0') || (num2 == 0 && argv[3][0] != '0'))
    {
        cerr << "Ошибка: оба операнда должны быть целыми числами." << endl;
        return 1;
    }

    // Выполняем операцию в зависимости от флага
    if (strncmp(argv[1], "-a", 2) == 0)
    {
        cout << "Сумма: " << num1 + num2 << endl;
    }
    else if (strncmp(argv[1], "-m", 2) == 0)
    {
        cout << "Произведение: " << num1 * num2 << endl;
    }

    return 0;
}