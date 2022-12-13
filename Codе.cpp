#include <iostream> 
#include <iomanip> 
#include "math.h" 
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k, x, m;
    cout << "Введіть k =";
    cin >> k;
    cout << "Введіть x =";
    cin >> x;
    cout << "Введіть m =";
    cin >> m;
	cout << "Введіть y =";
    cin >> y1;
    float rez1;
    int sum = 0;
	    for (int i = 1; i <= 10; i++)
    {
        sum = sum + sin(k * x);
    }
    rez1 = (sum + 2 * x) / ((x * x) + 5);

    float rez2;
    int pr = 1;
    for (int i = 2; i <= 10; i++)
    {
        pr = pr + (log(m * rez1));
    }
    rez2 = (3 * sin(rez1)) + pr;
    cout << "Y=" << rez1 << endl;
    cout << "Z=" << rez2 << endl;
    system("pause");
    return 0;
}