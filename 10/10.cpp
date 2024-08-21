#include <iostream>
#include <iomanip>  // �������������ʽ

using namespace std;

void showMenu() {
    cout << "ѡ���������ͣ�" << endl;
    cout << "1. �ӷ�" << endl;
    cout << "2. ����" << endl;
    cout << "3. �˷�" << endl;
    cout << "4. ����" << endl;
    cout << "5. �˳�" << endl;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("��������Ϊ�㣡");
    }
    return a / b;
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        showMenu();
        cout << "���������ѡ��1-5����";
        cin >> choice;

        if (choice == 5) {
            cout << "�˳�����ллʹ�ã�" << endl;
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "��Ч��ѡ�����������롣" << endl;
            continue;
        }

        cout << "�������һ�����֣�";
        cin >> num1;
        cout << "������ڶ������֣�";
        cin >> num2;

        try {
            switch (choice) {
                case 1:
                    result = add(num1, num2);
                    cout << "�����" << fixed << setprecision(2) << result << endl;
                    break;
                case 2:
                    result = subtract(num1, num2);
                    cout << "�����" << fixed << setprecision(2) << result << endl;
                    break;
                case 3:
                    result = multiply(num1, num2);
                    cout << "�����" << fixed << setprecision(2) << result << endl;
                    break;
                case 4:
                    result = divide(num1, num2);
                    cout << "�����" << fixed << setprecision(2) << result << endl;
                    break;
                default:
                    cout << "ѡ����Ч�����������롣" << endl;
                    break;
            }
        } catch (const runtime_error& e) {
            cout << "����: " << e.what() << endl;
        }
    }

    return 0;
}