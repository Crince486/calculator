#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "��������Ҫ���еĲ�����" << endl;
    cout << "1.�ӷ�" << endl;
    cout << "2.����" << endl;
    cout << "3.�˷�" << endl;
    cout << "4.����" << endl;
    cout << "5.��ƽ��" << endl;
    cout << "6.ȡ����" << endl;
    cout << "7.ȡ�ٷ���" << endl;
    cout << "8.���Һ���" << endl;
    cout << "9.���Һ���" << endl;
    cout << "10.���к���" << endl;
    cout << "11.��10Ϊ�׵Ķ���" << endl;
    cout << "12.�ݺ���" << endl;
    cout << "13.������ʽ��ֵ(�����Ľ�)" << endl;
    cin >> n;

    switch (n)
    {
    case 1:
    {
        double a, b;
        cout << "����������Ҫ��ӵ�������" << endl;
        cin >> a >> b;
        cout << a + b << endl;
        break;
    }
    case 2:
    {
        double a, b;
        cout << "����������Ҫ�����������" << endl;
        cin >> a >> b;
        cout << a - b << endl;
        break;
    }
    case 3:
    {
        double a, b;
        cout << "����������Ҫ��˵�������" << endl;
        cin >> a >> b;
        cout << a * b << endl;
        break;
    }
    case 4:
    {
        double a, b;
        cout << "����������Ҫ�����������(ǰ�߳��Ժ���)" << endl;
        cin >> a >> b;
        cout << a / b << endl;
        break;
    }
    case 5:
    {
        double a;
        cout << "��������Ҫ��ƽ������" << endl;
        cin >> a;
        cout << sqrt(a) << endl;
        break;
    }
    case 6:
    {
        double a;
        cout << "��������Ҫȡ��������" << endl;
        cin >> a;
        cout << 1 / a << endl;
        break;
    }
    case 7:
    {
        double a, b;
        cout << "��������Ҫȡ�ٷ�����������(ǰһ����/��һ����)" << endl;
        cin >> a >> b;
        cout << a / b * 100 << "%" << endl;
        break;
    }
    case 8:
    {
        double a;
        cout << "��������Ҫȡ���ҵ���" << endl;
        cin >> a;
        cout << sin(a) << endl;
        break;
    }
    case 9:
    {
        double a;
        cout << "��������Ҫȡ���ҵ���" << endl;
        cin >> a;
        cout << cos(a) << endl;
        break;
    }
    case 10:
    {
        double a;
        cout << "��������Ҫȡ���е���" << endl;
        cin >> a;
        cout << tan(a) << endl;
        break;
    }
    case 11:
    {
        double a;
        cout << "��������Ҫȡ��ʮΪ�׵Ķ�������" << endl;
        cin >> a;
        cout << log10(a) << endl;
        break;
    }
    case 12:
    {
        double a;
        int b;
        cout << "�����������ָ��" << endl;
        cin >> a >> b;
        cout << pow(a, b) << endl;;
        break;
    }
    case 13:
    {
        int b;
        cout << "������㼸������ʽ(2/3/4��)" << endl;
        cin >> b;
        switch (b) {
        case 2:
        {
            int e, f, g, h;
            cout << "��������������ʽ���ĸ�Ԫ�أ�\n";
            cin >> e >> f >> g >> h  ;
            cout << e << " " << f << endl;
            cout << g << " " << h << endl;
            cout<< "����ʽΪ��" <<e * h-f * g<< endl;
            break;
        }
        case 3:
        {

            double a[3][3], d;
            cout << "��������������ʽ�ľŸ�Ԫ�أ�\n";
            int i, j;
            for ( i = 0; i <= 2; i++){
                for ( j = 0; j <= 2; j++)
                    cin >> a[i][j];
            }
            d = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1]
                - a[0][2] * a[1][1] * a[2][0] - a[0][1] * a[1][0] * a[2][2] - a[0][0] * a[1][2] * a[2][1];
            cout << "����ʽΪ��" << endl;
            for (i = 0; i <= 2; i++) {
                for (j = 0; j <= 2; j++) {
                    cout << a[i][j] << " ";
                }
                cout << " " << endl;
            }
            cout << "����ʽֵΪ��" << d << endl;
            break;

        }
        case 4:
        {

                double a[5][5];
                int i, j;
                cout << "��������������ʽ��ʮ����Ԫ��:\n";
                for ( i = 1; i <=4; i++)
                    for ( j = 1; j <=4; j++)
                        cin >> a[i][j];
                double d = 0;
                d = (a[1][1] * a[2][2] - a[1][2] * a[2][1]) * (a[3][3] * a[4][4] - a[4][3] * a[3][4]) -
                    (a[1][1] * a[3][2] - a[3][1] * a[2][1]) * (a[2][3] * a[4][4] - a[3][4] * a[4][2]) +
                    (a[1][1] * a[2][4] - a[1][4] * a[2][1]) * (a[3][2] * a[4][3] - a[3][3] * a[4][2]) +
                    (a[1][2] * a[2][3] - a[1][3] * a[2][2]) * (a[3][1] * a[4][4] - a[3][4] * a[4][1]) -
                    (a[1][2] * a[2][4] - a[1][4] * a[2][2]) * (a[3][1] * a[4][3] - a[3][3] * a[4][1]) +
                    (a[1][3] * a[2][4] - a[1][4] * a[2][3]) * (a[3][1] * a[4][2] - a[3][2] * a[4][1]);
                cout << "����ʽΪ��" << endl;
                for (i = 1; i <= 4; i++) {
                    for (j = 1; j <= 4; j++) {
                        cout << a[i][j] << " ";
                    }
                    cout << " " << endl;
                }
                cout << "������ʽ��ֵΪ��" << d << endl;
                break;
            }




        }

        }



    }



    }
   


