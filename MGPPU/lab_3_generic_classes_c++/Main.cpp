#include "Bolt.h"
#include "Nut.h"
#include "Connection.h"

int main() {
    Bolt bolt(1); // Создаём болт номер 1
    Nut nut(2); // Создаём гайку номер 2

    Connection connection(&bolt, &nut); // Создаем соединение болта и гайки
    connection.connect(); // Вызываем метод соединения, который выводит информацию на экран

    return 0;
}