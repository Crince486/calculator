#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "请输入您要进行的操作：" << endl;
    cout << "1.加法" << endl;
    cout << "2.减法" << endl;
    cout << "3.乘法" << endl;
    cout << "4.除法" << endl;
    cout << "5.开平方" << endl;
    cout << "6.取倒数" << endl;
    cout << "7.取百分数" << endl;
    cout << "8.正弦函数" << endl;
    cout << "9.余弦函数" << endl;
    cout << "10.正切函数" << endl;
    cout << "11.以10为底的对数" << endl;
    cout << "12.幂函数" << endl;
    cout << "13.求行列式的值(二三四阶)" << endl;
    cin >> n;

    switch (n)
    {
    case 1:
    {
        double a, b;
        cout << "请输入你想要相加的两个数" << endl;
        cin >> a >> b;
        cout << a + b << endl;
        break;
    }
    case 2:
    {
        double a, b;
        cout << "请输入你想要相减的两个数" << endl;
        cin >> a >> b;
        cout << a - b << endl;
        break;
    }
    case 3:
    {
        double a, b;
        cout << "请输入你想要相乘的两个数" << endl;
        cin >> a >> b;
        cout << a * b << endl;
        break;
    }
    case 4:
    {
        double a, b;
        cout << "请输入你想要相除的两个数(前者除以后者)" << endl;
        cin >> a >> b;
        cout << a / b << endl;
        break;
    }
    case 5:
    {
        double a;
        cout << "请输入你要开平方的数" << endl;
        cin >> a;
        cout << sqrt(a) << endl;
        break;
    }
    case 6:
    {
        double a;
        cout << "请输入你要取倒数的数" << endl;
        cin >> a;
        cout << 1 / a << endl;
        break;
    }
    case 7:
    {
        double a, b;
        cout << "请输入你要取百分数的两个数(前一个数/后一个数)" << endl;
        cin >> a >> b;
        cout << a / b * 100 << "%" << endl;
        break;
    }
    case 8:
    {
        double a;
        cout << "请输入你要取正弦的数" << endl;
        cin >> a;
        cout << sin(a) << endl;
        break;
    }
    case 9:
    {
        double a;
        cout << "请输入你要取余弦的数" << endl;
        cin >> a;
        cout << cos(a) << endl;
        break;
    }
    case 10:
    {
        double a;
        cout << "请输入你要取正切的数" << endl;
        cin >> a;
        cout << tan(a) << endl;
        break;
    }
    case 11:
    {
        double a;
        cout << "请输入你要取以十为底的对数的数" << endl;
        cin >> a;
        cout << log10(a) << endl;
        break;
    }
    case 12:
    {
        double a;
        int b;
        cout << "请输入底数和指数" << endl;
        cin >> a >> b;
        cout << pow(a, b) << endl;;
        break;
    }
    case 13:
    {
        int b;
        cout << "你想计算几阶行列式(2/3/4阶)" << endl;
        cin >> b;
        switch (b) {
        case 2:
        {
            int e, f, g, h;
            cout << "请依次输入行列式的四个元素：\n";
            cin >> e >> f >> g >> h  ;
            cout << e << " " << f << endl;
            cout << g << " " << h << endl;
            cout<< "行列式为：" <<e * h-f * g<< endl;
            break;
        }
        case 3:
        {

            double a[3][3], d;
            cout << "请依次输入行列式的九个元素：\n";
            int i, j;
            for ( i = 0; i <= 2; i++){
                for ( j = 0; j <= 2; j++)
                    cin >> a[i][j];
            }
            d = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1]
                - a[0][2] * a[1][1] * a[2][0] - a[0][1] * a[1][0] * a[2][2] - a[0][0] * a[1][2] * a[2][1];
            cout << "行列式为：" << endl;
            for (i = 0; i <= 2; i++) {
                for (j = 0; j <= 2; j++) {
                    cout << a[i][j] << " ";
                }
                cout << " " << endl;
            }
            cout << "行列式值为：" << d << endl;
            break;

        }
        case 4:
        {

                double a[5][5];
                int i, j;
                cout << "请依次输入行列式的十六个元素:\n";
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
                cout << "行列式为：" << endl;
                for (i = 1; i <= 4; i++) {
                    for (j = 1; j <= 4; j++) {
                        cout << a[i][j] << " ";
                    }
                    cout << " " << endl;
                }
                cout << "该行列式的值为：" << d << endl;
                break;
            }




        }

        }



    }



    }
   


