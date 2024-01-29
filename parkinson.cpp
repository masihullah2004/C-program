// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 17; i <= 20; i++)
//     {
//         cout << "ALLAH BLESS PALESTINE:";
//         cout << endl;
//     }
// }

// PRITN HELLO WORLD 'N' IMES. TAKE 'N' AS INPUT FROM USER

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for (int i = 0; i <= n; i++)

//     {
//         cout << "HELLO WORLD:";
//         cout << endl;
//     }
// }

// PRITN NUMBER FROM 1 TO 100:

// #include <iostream>
// using namespace std;
// int main()
// {

//     for (int i = 1; i <= 100; i++)
//     {
//         cout << i;
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 50; i <= 199; i++)
//     {
//         cout << i << endl;
//     }
// }

// PRINT ALL THE EVEN  NUMBERS FROM 1 TO 100:

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//             cout << i;
//         cout << endl;
//     }
// }

// Print all the odd numbers from 1 to 100.

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int a = 1; a <= 100; a++)
//     {
//         if (a % 2 != 0)
//         {
//             cout << a;
//             cout << endl;
//         }
//     }
// }

// METHOD 2 TO PRINT EVEN NUMBERS:

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int a = 2; a <= 100; a = a + 2)
//     {

//         if (a % 2 == 0)
//         {
//             cout << a;
//             cout << endl;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int a = 20; a <= 309; a = a + 20)
//     {
//         cout << a;
//         cout << endl;
//     }
// }

// Print the table of 'n' . Here 'n' is a integer which user will input.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter integer:";
//     cin >> n;
//     for (int a = 1; a <= 10; ++a)
//     {
//         // cout << n << "*" << a << "=" << n * a << endl;
//         cout << n;
//         cout << "*";
//         cout << a;
//         cout << "=";
//         cout << n * a;
//         cout << endl;
//     }
// }

//   Display this AP - 1,3,5,7,9...upto'n' terms.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for (int i = 1; i <= 2 * n - 1; i += 2)
//     {
//         cout << i;
//         cout << endl;
//     }
// }

//  Display this AP __4,7,10,13,16,...upto 'n' terms.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;

//     for (int a = 4; a <= 2 * n - 1; a += 2)
//     {
//         cout << a << endl;
//     }
// }

//  DISPLAY THIS AP ...17,21,25,29,33,37,41,45,49,53...upto 'n' terms

// #include <iostream>
// using namespace std;
// int main()
// {
//     int c;
//     cout << "enter integer:";
//     cin >> c;

//     for (int d = 17; d <= 2 * c - 1; d += 4)
//     {
//         cout << d << endl;
//     }
// }

// Display this AP __4,7,10,13,16..upto 'n' terms.

// a=4; d=3.............an=a+(n-1)d........4+(n-1)3....4+3n-3....3n+1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "enter integer a:";
//     cin >> a;
//     for (int z = 4; z <= 3 * a + 1; z += 3)
//     {
//         cout << z;
//         cout << endl;
//     }
// }

//   DISPLAY THIS AP   4,7,10,13...upto 'N' TERMS ...........

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;

//     int a = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << endl;
//         a = a + 3;
//     }
// }

//   DISPLAY THIS GP(GEOMETRIC PROGRESSION)__1,2,4,8,16,32, ...upto 'n'...terms.

// #include <iostream>
// using namespace std;
// int main()

// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;

//     // 1,2,4,8,16....
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << endl;
//         a = a * 2;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int v;
//     cout << "enter integer:";
//     cin >> v;

//     int x = 4;
//     for (int y = 1; y <= v; y++)
//     {
//         cout << x << endl;
//         x = x * 5;
//     }
// }

// Display this GP __3,12,48,....upto ....'n' terms.....

// #include <iostream>
// using namespace std;
// int main()
// {
//     int b;
//     cout << "enter integer:";
//     cin >> b;

//     int a = 3;
//     for (int d = 1; d <= b; d++)

//     {
//         cout << a << endl;
//         a = a * 4;
//     }
// }

// WAP to find the highest factor of a number 'n' (other than n itself. ).

// #include <iostream>
// using namespace std;
// {
//     int j;
//     cout << "enter number:";
//     cin >> j;

//     for (int h = 1; h <= j; h++)
//     {
//         if (j % h == 0)
//         {
//             cout << h << endl;
//         }
//     }
// }

// TO STORE ONLY HIGHEST FACTOR:

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "enter number:";
//     cin >> a;

//     int x = 1;
//     for (int i = 1; i < a; i++)
//     {
//         if (a % i == 0)
//             x = i;
//     }

//     cout << x;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "enter n:";
//     cin >> n;

//     int f = 1;
//     for (int i = 1; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//             f = i;
//     }
//     cout << f;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "enter number:";
//     cin >> n;
//     for (int a = 1; a <= n; a++)
//     {
//         cout << a << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int a = 0; a <= 99; a++)
//     {
//         cout << a;
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int a = 0; a <= 93; a++)
//     {
//         cout << "madiha";
//     }
//}

// FACTOR..... ......   ............

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for (int i = n / 2; i >= 1; i--)
//     {
//         if (n % i == 0)
//         {
//             cout << i << endl;
//             break;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter integer:";
//     cin >> n;

//     for (int m = 1; m < n; m++)
//     {
//         if (n % m == 0)
//             cout << m << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int a = 0; a <= 100; a++)
//     {
//         cout << a;
//     }
// }

// HIGHEST FACTOR...

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter integer:";
//     cin >> n;
//     int s = 1;
//     for (int g = 1; g <= n / 2; g++)
//     {
//         if (n % g == 0)
//             s = g;
//     }
//     cout << s;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 101; i >= -1; i--)
//         cout << i << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int k;

//     cout << "enter any number:";
//     cin >> k;

//     for (int l = k / 2; l >= 1; l--)
//     {
//         if (k % l == 0)
//         {
//             cout << l << endl;
//             break;
//         }
//     }
// }

// WAP to check if a number is composite or not.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout << "enter number:";
//     cin >> x;

//     for (int y = 2; y <= x; x++)
//     {
//         if (x % y == 0)

//         {
//             cout << "composite:";
//             break;
//         }
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter crush name:";
    cin >> m;
    for (int a = 0; a <= m; m++)

    {
        cout << "MADIHA :" << endl;
    }
}
