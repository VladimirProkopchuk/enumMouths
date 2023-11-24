// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

enum mouths {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};
int main() {
    setlocale(LC_ALL, "Russian");
    int m = static_cast<mouths>(1);

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> m;
        switch (m) {
        case january: std::cout << "январь\n"; break;
        case february: std::cout << "февраль\n"; break;
        case march: std::cout << "март\n"; break;
        case april: std::cout << "апрель\n"; break;
        case may: std::cout << "май\n"; break;
        case june: std::cout << "июнь\n"; break;
        case july: std::cout << "июль\n"; break;
        case august: std::cout << "август\n"; break;
        case september: std::cout << "сентябрь\n"; break;
        case october: std::cout << "октябрь\n"; break;
        case november: std::cout << "ноябрь\n"; break;
        case december: std::cout << "декабрь\n"; break;
        default: std::cout << "неверный номер месяца\n"; break;
        }
    } while (m != 0);
    std::cout << " до свидания";

    return 0;
}