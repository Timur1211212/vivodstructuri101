#include <iostream>
using namespace std;

struct card {
    std::string сity;
    std::string street;
    int house_number;
    int apartment_number;
    int index;
};

void card1(card& c) {
    c.сity = "Ижевск";
    c.street = "Пушкина";
    c.house_number = 59;
    c.apartment_number = 143;
    c.index = 953769;
}

int main()
{
    setlocale(LC_ALL, "rus");
    card base;
    cout << "Город: ";
    cin >> base.сity;
    cout << "Улица: ";
    cin >> base.street;
    cout << "Номер дома: ";
    cin >> base.house_number;
    cout << "Номер квартиры: ";
    cin >> base.apartment_number;
    cout << "Индекс: ";
    cin >> base.index;
    cout << endl;
    card1(base);
    cout << "Город: " << base.сity << endl;
    cout << "Улица: " << base.street << endl;
    cout << "Номер дома: " << base.house_number << endl;
    cout << "Номер квартиры: " << base.apartment_number << endl;
    cout << "Индекс: " << base.index;

    return 0;
}