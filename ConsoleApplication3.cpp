﻿// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double K, v, t, Hg, Hs, L, D, d, v0, vh, S, n;
    float N, Q, H, hl, hm, V;
    cout << "Введите площадь огорода: ";
    cin >> S;
    cout << "Введите количество людей на участке: ";
    cin >> n;
    cout << "Введите КПД: ";
    cin >> K;
    cout << "Введите время работы насоса: ";
    cin >> t;
    cout << "Введите геодезическая высота: ";
    cin >> Hg;
    cout << "Введите свободный набор: ";
    cin >> Hs;
    cout << "Введите длину трубы: ";
    cin >> L;
    cout << "Введите диаметр трубы: ";
    cin >> d;
    vh = 0.2 * n;
    v0 = 0.5 * S;
    v = v0 + vh;
    Q = v / (3600 * t);
    N = (9.81 * Q * H) / K;

    //dtndm
    
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
