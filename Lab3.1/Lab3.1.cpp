// Lab_03_1.cpp
// < �������� �����>
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 21
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x; // ������� ��������
    double y; // ��������� ���������� ������
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B; // �������� ��������� - ������������� ����� ������� ������
    cout << "x = "; cin >> x;
    A = 2 + 1. / fabs(1 + x);

    // ����� 1: ������������ � ��������� ����
    if (x < -1)
        B = sqrt(cos(x) + 13);
    if (-1 <= x && x <= 5)
        B = atan(sqrt(2) / (4 + x));
    if (x > 5)
        B = 8 + 0.7 * x;
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;

    // ����� 2: ������������ � ����� ����
    if (x < -1)
        B = sqrt(cos(x) + 13);
    else
        if (-1 <= x && x <= 5)
            B = atan(sqrt(2) / (4 + x));
        else
            if (x > 5)
                B = 8 + 0.7 * x;
    y = A + B;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}