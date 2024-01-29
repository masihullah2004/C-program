// EVEN/ODD NUMBER

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number";
//     cin >> n;
//     if (n % 2 == 0)

//         cout << "YE TU EVEN NUMBER HAI";
//     if (n % 2 != 0)
//         cout << "ARE YAAR YE TU ODD NUMBER HAI";
// }

// IF ELSE CONDITION

// #include <iostream>
// using namespace std;
// int main()
// {
//     int c;
//     cout << "Enter the number";
//     cin >> c;
//     if (c % 2 == 0)
//         cout << "Even number hai bhai";
//     else
//         cout << "Odd number gya yaar";
// }

// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVIIBLE BY 5 OR NOT.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number";
//     cin >> n;
//     if (n % 5 == 0)
//         cout << "YES,IT IT IS DIVISIBLE BY 5";
//     else

//         cout << "IT IS ODD NUMBER";
// }

// IF / ELSE CONDITION

// #include <iostream>
// using namespace std;
// int main()
// {
//     int z;
//     cout << "enter the integer";
//     cin >> z;
//     if (z % 3 == 0)
//     {
//         cout << "even number hai yaar" << endl;
//         cout << "itna bhi nahi pate tere ko kya even odd kya hota hai " << endl;
//         cout << "WOW!ye tu mere knowledge mai izafa ho gya: ";
//     }
//     else

//     {
//         cout << "it is odd number";
//         cout << endl;
//         cout << "kya ho gya number tu hai";
//     }

// TAKE INTEGER INPUT AND PRINT THE ABSOLUTE VALUE OF THATR INTEGER

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     if (n >= 0)
//     {
//         cout << n;
//     }
//     else
//     {
//         cout << -n;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number:";
//     cin >> n;
//     if (n < 0)
//         n = -n;
//     cout << n;
// }

// If cost price and selling price of an item is  input through th keyboard ,write a program to determine whether the
//  seller has made profit or incutted loss or no profit no loss. Also determine  how much profit he made or loss he incurred.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int cp;
//     cout << "enter cost price:";
//     cin >> cp;
//     int sp;
//     cout << "enter selling price:";
//     cin >> sp;

//     if (sp > cp)
//     {
//         cout << "profit";
//     }

//     if (sp < cp)
//     {
//         cout << "LOSS";
//     }

//     if (sp == cp)
//     {
//         cout << "no profit no loss";
//     }
// }

// PROFIT AND LOSS

// #include <iostream>
// using namespace std;
// int main()
// {
//     int cp;
//     cout << "Enter cost price";
//     cin >> cp;

//     int sp;
//     cout << "enter selling price";
//     cin >> sp;
//     if (sp > cp)
//     {
//         cout << "PROFIT";
//         cout << endl;
//         cout << "KYA MAI ENTERPRENEUR KEHLA SKTA HU ";
//     }
//     else if (sp < cp)
//     {
//         cout << "LOSS" << endl;
//         cout << "tera bhai business man nhi   bn paaya";
//     }
//     else

//     {
//         cout << "no profit..no loss";
//     }
// }

// GIVEN THE LENGTH AND BREADTH OF A RECTANGLE , WRITE A PROGRAM TO FIND
// WHETHER THE AREA OF  THE RECTANGLE IS GREATER THAN IT'S PERIMETER.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int l;
//     cout << "enter the length";
//     cin >> l;

//     int b;
//     cout << "enter the breadth";
//     cin >> b;
//     if (l * b)

//     {
//         cout << "area of rectangle:";
//     }
// }

// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS A THREE  DIGIT NUMBER OR NOT.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the integer";
//     cin >> n;
//     if (n > 99)
//     {
//         cout << " three digit number:";
//     }
//     else
//     {
//         cout << "NOT 3 DIGIT NUMBER:99";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number:";
//     cin >> n;
//     if (n > 99 and n < 1000)
//         cout << "enter 3 digit number";
//     else
//     {
//         cout << "not a 3 digit number:";
//     }
// }

// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 AND 3.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     if (n % 5 == 0 && n % 3 == 0)
//     {
//         cout << "it is divisible by 3 and 5:";
//     }
//     else
//     {
//         cout << "it is  not  divisible by 3 and 5:";
//     }
// }

// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 OR 3.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int d;
//     cout << "enter number";
//     cin >> d;
//     if (d % 5 == 0 or d % 3 == 0)
//     {
//         cout << "it is divisible by 3 and 5";
//     }
//     else
//     {
//         cout << "not divisible by 3 and 5";
//     }
// }

// TAKE 3 NUMBER INPUT AND TELL IF THEY CAN BE THE SIDES OF A TRIANGLE.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter 1st side: ";
//     cin >> a;
//     cout << "enter 2nd side:";
//     cin >> b;
//     cout << "enter 3rd side:";
//     cin >> c;
//     if (a + b > c and b + c > a and c + a > b)
//     {
//         cout << "IT IS TRIANGLE:";
//     }
//     else
//     {
//         cout << "it is not satisfying the triangle law:";
//     }
// }

// TAKE 3 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM:

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter integer:";
//     cin >> a;

//     cout << "enter integer :";
//     cin >> b;
//     cout << "enter integer:";
//     cin >> c;
//     if (a > b and a > c)
//     {
//         cout << a << "is greates";
//     }
//     else if (b > a and b > c)
//     {
//         cout << b << "is greatest";
//     }

//     else
//     {
//         cout << a << "is greatest";
//     }
// }

// TAKE 3 POSITIVE INTEGERS INPUT AND PRINT LEAST OF THEM :

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;

//     cout << "enter 1st integer:";
//     cin >> a;

//     cout << "enter 2nd integer:";
//     cin >> b;

//     cout << "enter  3rd integer:";
//     cin >> c;

//     if (a < b and a < c)
//     {
//         cout << a << " is least";
//     }

//     else if (b < c and b < a)
//     {
//         cout << b << "is least:";
//     }

//     else
//     {
//         cout << c << "is the least";
//     }
// }

// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 OR 3
//  BUT NOT DIVISIBLEBY 15:

// TAKE 3 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM:
// WITHOUT USING MULTIPLES CONDITION:

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter 1st number:";
//     cin >> a;
//     cout << "enter 2nd number:";
//     cin >> b;
//     cout << "enter 3rd number:";
//     cin >> c;
//     if (a > b)
//     {
//         if (a > c)
//         {
//             cout << a << "is greatest";
//         }
//         else
//         {
//             cout << c << "is greatest";
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             cout << b << "is greatest";
//         }
//         else
//         {
//             cout << c << "is greatest";
//         }
//     }
// }

// TAKE 3 POSITIVE INTEGER  INPUT AND PRINT THE LEAST OF THEM
// WITHOUT USING MULTIPLE CONDITIONS

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter 1st number:";
//     cin >> a;

//     cout << "enter 2nd number:";
//     cin >> b;

//     cout << "enter 3rd number:";
//     cin >> c;

//     if (a < b)
//     {
//         if (a < c)
//         {
//             cout << a << "is the least integer:";
//         }
//         else
//         {
//             cout << c << "is the least integer:";
//         }
//     }
//     else
//     {
//         if (b < c)
//         {
//             cout << b << "b is the least:";
//         }
//         else
//         {
//             cout << c << "c is the least";
//         }
//     }
// }

// IF THE AGES OF RAM ,SHYAM AND AJAY ARE INPUT THROUGH THE KEYBOARD
// WRITE A PROGRAM TO DETERMINE THE YOUNGEST OF THE THREE:

// #include <iostream>
// using namespace std;
// int main()
// {
//     int ram, shyam, ajay;
//     cout << "enter age ram:";
//     cin >> ram;

//     cout << "enter age shyam:";

//     cin >> shyam;

//     cout << "enter age ajay:";
//     cin >> ajay;

//     if (ram > shyam)
//     {
//         if (ram > ajay)
//         {
//             cout << ram << "is the greatest:";
//         }

//         else
//         {
//             cout << shyam << " is the greatest:";
//         }
//     }
//     else
//     {
//         if (shyam > ajay)
//         {
//             cout << shyam << "is the greatest:";
//         }
//         else
//         {
//             cout << ajay << "is the greatest:";
//         }
//     }
// }

// TAKE INPUT PERCENTAGE OF A STUDENT AND PRINT THE GRADE ACCORDING TO MARKS:
//    1) 81 - 100 VERY GOOD        2) 61-80 GOOD   3) 41 -60 AVERAGE  4) <=40 FAIL

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter marks";
//     cin >> n;

//     if (n >= 81 and n <= 100)
//     {
//         cout << "VERY GOOOD :";
//         cout << endl;
//         cout << "WAH ! BETE TUNE TU MOJ KRDI:";
//     }

//     if (n >= 61 and n <= 80)
//     {
//         cout << "GOOD:";
//         cout << endl;
//         cout << "KAB TAK GOOD RHEGA, AB VERY BAN JAA";
//     }

//     if (n >= 41 and n <= 60)
//     {
//         cout << "AVERAGE:";
//         cout << endl;
//         cout << "THODI AUR MEHNAT KR MERI JAAN :";
//     }

//     if (n <= 40)
//     {
//         cout << "FAIL HO GYA YAAR:";
//         cout << endl;
//         cout << "ITNE KAM MARKS MAI KAISE JEE/NEET QUALIFY KROGE BHAI:";
//         cout << endl;
//         cout << "TUTIYA JAAKE PADHAI KRLE: ";
//     }
// }

// GIVEN A POINT (X,Y), WRITE A PROGRAM TO FIND OUT IF IT LIES IN THE 1ST QUADRANT
// 2ND QUADRANT , 3RD QUADRANT , 4TH QUADRANT , ON THE  X - AXIS , Y - AXIS
// OR AR THE ORIGIN , VIZ.(0,0).

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "enter integer a:";
//     cin >> a;

//     cout << "enter integer b:";
//     cin >> b;

//     if (a >= 0 and b >= 0)
//     {
//         cout << "first quadrant: ";
//     }

//     if (a >= -1 and b <= 0)
//         cout << "2nd quadrant:";

//     if (a <= -1 and b <= -1)
//     {
//         cout << "3rd quadrant:";
//     }
//     if (a >= 0 and b <= -1)
//         cout << "4th quadrant:";

//     if (a = 0 and b = 0)
//     {
//         cout << " x aix:";
//     }
//     if (a >= 0 and b >= 1)
//     {
//         cout << "y axix:";
//     }
// }

// TERNARY OPERATOR
// expression1? expression2: exprwssion;

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;

//     (n % 2 == 0) ? cout << "even" : cout << "odd";
// }

// SWITCH STATEMENT
// prediction

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 3, y = 5;
//     if (x == 3)
//         cout << x << endl;

//     else
//         ;

//     cout << y << endl;
// }

// PREDICT THE OUTPUT:

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 3, y, z;
//     y = x = 10;
//     z = x < 10;
//     cout << x << " " << y << " " << z;
// }
