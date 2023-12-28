#Auto detect text files and perform LF normalization
*text = auto
#include <iostream.h>
    int
    count(int n)
{
    int a = 0;
    while (n > 0)
    {
        a = a + 1;
        n = n / 10;
    }
    return a;
}
main()
{
    int n;
    cin >> n;
    cout << "the count is: " << count(n);
}

////

#include <iostream.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    float a, b, c, d;
    cin >> a >> b >> c;
    if (!((a + b > c) && (a + c > b) && (b + c > a)))
    {
        cout << "cannot create triangle";
        exit(0);
    }
    cout << "mohit=" << (a + b + c);
    d = (a + b + c) / 2;
    cout << "area=" << sqrt(d * (d - a) * (d - b) * (d - c));
}

////

#include <iostream.h>
#include <math.h>
#include <conio.h>
main()
{
    float x, y;
    cin >> x >> y;
    clrscr();
    gotoxy(14, 2);
    cout << sin(sqrt((log(x + y * x * x)) / (pow(x, 3) + sqrt(x + y * y))));
}

////

#include <iostream.h>
#include <math.h>
void main()
{
    int a, b;
    cin >> a >> b;
    cout << "maximum is:" << ((a + b) + fabs(a - b)) / 2;
}

////

#include <iostream.h>
void main()
{
    int x, y, i, j;
    cin >> x >> y;
    j = 1;
    for (i = 1; i <= y; i++)
        j = j * x;
    cout << j;
}

/////

#include <iostream.h>
main()
{
    int a[3][4], i, j, min, max;
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 3; j++)
            cin >> a[i][j];
    max = min = a[0][0];
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 3; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    cout << "max=" << max << " min=" << min;
}

////

#include <iostream.h>
void main()
{
    int a[10][10];
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
            a[i][j] = (i + 1) * (j + 1);
    }
    for (i = 0; i <= 9; i++)
        cout << a[i][5] << endl;
}

////

#include <iostream.h>
void main()
{
    int i, j, a[4][4];
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            cin >> a[i][j];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    for (i = 0; i < 4; i++)
        cout << a[i][i] << " ";
}

////

#include <iostream.h>
#define n 100
main()
{
    int j, i, a[n], temp;
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    for (i = 0; i <= n - 1; i++)
        for (j = 0; j <= n - i; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

////

#include <iostream.h>
#define n 100
void main()
{
    int i, j, a[n], temp;
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

////

void b_search(int a[], int n)
{
    int flag = 0;
    int i = 0;
    int j = n - 1;
    int mid = (i + j) / 2;
    while ((i < j) && !(flag))
    {
        if (x == a[mid])
        {
            cout << "found";
            flag = 1;
        }
        else if (x < a[mid])
            j = mid - 1;
        else
            i = mid + 1;
        mid = (i + j) / 2;
    }

    if (flag == 0)
        cout << "not found";
}

////

#include <iostream.h>
#include <stdlib.h>
#define n 100
void main()
{
    int i, x, a[n];
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    cout << "enter x;";
    cin >> x;
    for (i = 0; i <= n - 1; i++)
        if (a[i] == x)
        {
            cout << "found";
            exit(0);
        }
    cout << "not found";
}

////

#include <iostream.h>
void main()
{
    int i, sum = 0, n;
    for (i = 1; i <= 10; i++)
    {
        cin >> n;
        sum = sum + n;
    }
    cout << "sum:" << sum << endl;
    cout << "average:" << sum / 10;
}

////

#include <iostream.h>
void main()
{
    int i, sum = 0, a[10];
    for (i = 0; i <= 9; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << "sum:" << sum << endl;
    cout << "average:" << sum / 10;
}

////

#include <iostream.h>
void main()
{
    int i, mehdi[100];
    for (i = 0; i <= 99; i++)
        cin >> mehdi[i];
    for (i = 0; i <= 99; i++)
        if (mehdi[i] == i)
            cout << mehdi[i] << " ";
}

////

#include <iostream.h>
void main()
{
    int i, mahdi[100];
    for (i = 0; i < 100; i++)
        cin >> mahdi[i];
    for (i = 0; i < 100; i += 3)
        cout << mahdi[i];
}

////

#include <iostream.h>
void main()
{
    int i, parsa[6];
    for (i = 0; i <= 5; i++)
        cin >> parsa[i];
    for (i = 5; i >= 0; i--)
        cout << parsa[i];
}

////

#include <iostream.h>
void main()
{
    int m, n, p, f, t;
    cin >> m >> n;
    f = m;
    p = n;
    do
    {
        t = m % n;
        m = n;
        n = t;
    } while (t != 0);
    cout << "B.M.M=" << m << endl;
    cout << "K.M.M=" << (p * f) / m;
}

////

#include <iostream.h>
#include <iomanip.h>
void main()
{
    int k, j, i;
    for (i = 1; i < 10; i++)
    {
        cout << setw(10 - i);
        for (j = 1; j <= i; j++)
            cout << j;
        for (k = i; k >= 1; k--)
            cout << k;
        cout << endl;
    }
}

////

#include <iostream.h>
void main()
{
    int i, j, n, m, a;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        j = i;
        while (j > 0)
        {
            a = j % 10;
            if ((a != 2) && (a != 5))
                break;
            j = j / 10;
        }
        if (j == 0)
            cout << i << " ";
    }
}

////

#include <iostream.h>
void main()
{
    int i, j, sum, n;
    cout << "Enter n:";
    cin >> n;
    for (i = 0; i <= 32767; i++)
    {
        j = i;
        sum = 0;
        while (j > 0)
        {
            sum = sum + j % 10;
            j /= 10;
        }
        if (sum == n)
        {
            cout << i;
            break;
        }
    }
}

////

#include <iostream.h>
void main()
{
    int a, i, seri = 1, no, n;
    cin >> n;
    cout << seri << ",";
    i = 1;
    no = 1;
    for (a = 1; a <= n; a++)
    {
        i = i * (-1);
        no = no + a;
        seri = no * i;
        cout << seri << ",";
    }
}

////

#include <iostream.h>
void main()
{
    int c, a;
    cin >> a;
    c = 0;
    while (a != 0)
    {
        c = c * 10 + (a % 10);
        a = a / 10;
    }
    cout << c;
}

////

#include <iostream.h>
void main()
{
    char n;
    cin >> n;
    switch (n)
    {
    case 'a':
        cout << 20;
        break;
    case 'b':
        cout << 19;
        break;
    case 'c':
        cout << 18;
        break;
    case 'd':
        cout << "under 18";
        break;
    default:
        cout << "Invalid input";
    }
}

////

#include <iostream.h>
void main()
{
    int i, a, b, c, d;
    for (i = 1000; i <= 9999; i++)
    {
        a = i % 10;         // yekan
        b = (i / 10) % 10;  // dahgan
        c = (i / 100) % 10; // sadgan
        d = i / 1000;       // hezargan
        if ((a == d) && (b == c))
            cout << i << endl;
    }

    ////

#include <iostream.h>
    main()
    {
        int a, b, c, max;
        cout << " Enter your numbers ";
        cin >> a >> b >> c;
        max = a;
        if (b > max)
            max = b;
        if (c > max)
            max = c;
        cout << " The max is " << max << endl;
    }

    ////

#include <iostream.h>
    void main()
    {
        int i;
        char h;
        for (i = 1; i <= 122; i++)
        {
            h = i;
            cout << i << "=" << h << endl;
        }
    }

    ////

#include <iostream.h>
    void main()
    {
        int i;
        char h;
        cin >> h;
        i = h;
        cout << i;
    }

    ////

#include <iostream.h>
    main()
    {
        long int s = 0, a;
        cout << "enter your numbers : " << endl;
        cin >> a;
        while (a != 0)
        {
            s += a;
            cin >> a;
        }
        cout << "Sum is " << s;
    }

    ////

#include <iostream.h>
    main()
    {
        int f1, f2, fib, i = 3, n;
        f1 = 1;
        f2 = 1;
        fib = 1;
        cin >> n;
        cout << "fib1: 1\n"
             << "fib2: 1\n";
        fib = f1 + f2;
        while (fib <= n)
        {
            cout << "fib" << i << ": " << fib << "\n";
            f1 = f2;
            f2 = fib;
            fib = f1 + f2;
            i++;
        }
    }

    ////

#include <iostream.h>
    main()
    {
        int f1, f2, fib, i, n;
        f1 = 1;
        f2 = 1;
        cin >> n;
        cout << "fib1: 1\n"
             << "fib2: 1\n";
        for (i = 3; i <= n; i++)
        {
            fib = f1 + f2;
            f1 = f2;
            f2 = fib;
            cout << "fib" << i << ": " << fib << "\n";
        }
    }

////

// bename khoda.
#include <iostream.h>
    void main()
    {
        int i, j;
        for (i = 5; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
                cout << j;
            cout << endl;
        }
    }

////

// bename khoda.
#include <iostream.h>
    void main()
    {
        int i, j;
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= i; j++)
                cout << j;
            cout << endl;
        }
    }

    ////

#include <iostream.h>
    void main()
    {
        int i, j;
        for (i = 5; i >= 1; i--)
        {
            for (j = i; j >= 1; j--)
                cout << "*";
            cout << endl;
        }
    }

    ////

    // bename khoda.
#include <iostream.h>
    void main()
    {
        int i, j;
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= i; j++)
                cout << "*";
            cout << endl;
        }
    }

    ////

#include <iostream.h>
#include <iomanip.h>
    void main()
    {
        int i, j;
        for (i = 1; i <= 10; i++)
        {
            for (j = 1; j <= 10; j++)
                cout << setw(4) << i * j;
            cout << endl;
        }
    }

    ////

    for (i = 1; i < 10; i++)
    {
        if (i % 4 == 0)
            continue;
        cout << i << " ";
    }

    ////

    for (i = 1; i < 10; i++)
    {
        cout << "*" << endl;
        if (i % 5 == 0)
            break;
    }

    ////

    for2 = 1;
    while (++for2 < 3)
        cout << "seed\n";

    ////

    for2 = 1;
    while (for2++ < 3)
        cout << "seed\n";

    ////

    i = 5;
    do
        cout << "further";
    while (i > 76);

    ////

    i = 5;
    while (i > 76)
    {
        cout << "feature";
    }

    ////

    i = 5;
    do
    {
        i *= (3 + 2);
        cout << "future ";
    } while (i < 76);

    ////

    i = 2;
    while (i < 65)
    {
        cout << "*\n";
        i *= 2;
    }

    ////

#include <iostream.h>
    void main()
    {
        cout << "this is first program";
    }

    ////

#include <iostream.h>
    void main()
    {
        int a, b;
        char d;
        cin >> a >> b;
        cout << endl
             << a + b;
        cin >> d;
        cout << "\n"
             << "d is: " << d;
    }

    ////
