
Задание пять

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i;
    bool isPrime = true;
    cout << "ВВедите год:";
    cin >> n;
    cout << n << endl;
    for (i = 2; i <= (sqrt(abs(n))); i++) 
 {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
 }
    if (isPrime)
        cout << "Не високосный год" << endl;
    else
        cout << "Високосный год" << endl;
    return 0;
}


Задание три

#include <iostream> 
using namespace std; 

int main()
{
    setlocale(LC_ALL, "Russian");           
    int x = 0;                                     
    cout << "Введите число: ";
    cin >> x;                                    
    for (int i = 0; i < x; ++i)               
    {
        if (i % 2 == 1)                    
        {
            cout << i << endl;     
        }
    }
    return 0;                                 
}

Задание 1

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введите два числа: ";
    float a = 0;
    float b = 0;
    float sum = a + b;
    cin >> a >> b;


    if (sum > 10 && sum < 20)
    {
        cout << "true";
    }
    else if (sum < 10 || sum > 20)
    {
        cout << "false";
    }


}

