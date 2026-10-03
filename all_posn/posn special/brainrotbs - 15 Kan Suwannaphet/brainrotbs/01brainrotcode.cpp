#include <bits/stdc++.h>
using namespace std;

int checka(string s)
{
    int a = 0;
    for (char c : s)
    {
        if (c == 'a')
        {
            a++;
        }
    }
    return a;
}

int checke(string s)
{
    int e = 0;
    for (char c : s)
    {
        if (c == 'e')
        {
            e++;
        }
    }
    return e;
}

int checki(string s)
{
    int i = 0;
    for (char c : s)
    {
        if (c == 'i')
        {
            i++;
        }
    }
    return i;
}

int checko(string s)
{
    int o = 0;
    for (char c : s)
    {
        if (c == 'o')
        {
            o++;
        }
    }
    return o;
}

int checku(string s)
{
    int u = 0;
    for (char c : s)
    {
        if (c == 'u')
        {
            u++;
        }
    }
    return u;
}

bool checktype(string s)
{
    if (s[s.length() - 1] == '_')
    {
        return true;
    }
    else
    {
        return false;
    }
}

float type1(string s)
{
    int sum = 0;
    for (int i = 2; i <= s.length(); i++)
    {
        bool prime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            sum += i;
        }
    }
    int vowel = checka(s) + checke(s) + checki(s) + checko(s) + checku(s);
    return pow(sum, vowel % 2);
}
float type2(string s)
{
    int sum = 0;
    int fac = 1;
    for (int i = 0; i <= s.length(); i++)
    {
        sum += i;
    }
    for (int i = 1; i <= s.length() / 2; i++)
    {
        fac *= i;
    }
    bool prime = true;
    for (int i = 2; i <= sqrt(sum); i++)
    {
        if (sum % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        return sum * fac;
    }
    else
    {
        while (sum != fac)
        {
            if (sum > fac)
            {
                sum = sum - fac;
            }
            else if (fac > sum)
            {
                fac = fac - sum;
            }
        }
        return sum;
    }
}

float type3(string s)
{
    int sum = 0;
    int fac = 1;
    for (int i = 0; i < s.length(); i++)
    {
        sum += i;
    }
    for (int i = 1; i <= s.length() / 2; i++)
    {
        fac *= i;
    }
    int temp = fac;
    int temp1 = sum;
    while (sum != fac)
    {
        if (sum > fac)
        {
            sum = sum - fac;
        }
        else if (fac > sum)
        {
            fac = fac - sum;
        }
    }
    return temp1 * temp / sum;
}

int main()
{
    string name[3];
    cin >> name[0] >> name[1] >> name[2];
    string regis1, regis2, regis3;
    cin >> regis1 >> regis2 >> regis3;

    cout << "Attended students :" << endl;

    if (checka(name[0]) == checka(regis1) && checke(name[0]) == checke(regis1) && checki(name[0]) == checki(regis1) && checko(name[0]) == checko(regis1) && checku(name[0]) == checku(regis1))
    {
        double r = name[0].length();
        double circle = (3.14159) * r * r;
        if (name[0].length() % 2 == 0)
        {
            cout << fixed << setprecision(3) << name[0] << " : Attended --> " << circle << endl;
        }
        else
        {
            cout << fixed << setprecision(3) << name[0] << " : Attended --> 0.000" << endl;
        }
    }

    if (checka(name[1]) == checka(regis2) && checke(name[1]) == checke(regis2) && checki(name[1]) == checki(regis2) && checko(name[1]) == checko(regis2) && checku(name[1]) == checku(regis2))
    {
        double r = name[1].length();
        double circle = (3.14159) * r * r;
        if (name[1].length() % 2 == 0)
        {
            cout << fixed << setprecision(3) << name[1] << " : Attended --> " << circle << endl;
        }
        else
        {
            cout << fixed << setprecision(3) << name[1] << " : Attended --> 0.000" << endl;
        }
    }

    if (checka(name[2]) == checka(regis3) && checke(name[2]) == checke(regis3) && checki(name[2]) == checki(regis3) && checko(name[2]) == checko(regis3) && checku(name[2]) == checku(regis3))
    {
        double r = name[2].length();
        double circle = (3.14159) * r * r;
        if (name[2].length() % 2 == 0)
        {
            cout << fixed << setprecision(3) << name[2] << " : Attended --> " << circle << endl;
        }
        else
        {
            cout << fixed << setprecision(3) << name[2] << " : Attended --> 0.000" << endl;
        }
    }

    cout << "Affected by virus :" << endl;


    if (!checktype(regis1))
    {
        cout << name[0] << " : unknowntype --> 0.000" << endl;
    }
    else
    {
        if (checka(name[0]) + 1 == checka(regis1) && checke(name[0]) + 1 == checke(regis1) && checki(name[0]) + 1 == checki(regis1) && checko(name[0]) + 1 == checko(regis1) && checku(name[0]) + 1 == checku(regis1))
        {
            cout << fixed << setprecision(3) << name[0] << " : Affected by virus type 1 --> " << type1(name[0]) << endl;
        }
        else if (checka(name[0]) == checke(regis1) && checke(name[0]) == checki(regis1) && checki(name[0]) == checko(regis1) && checko(name[0]) == checku(regis1) && checku(name[0]) == checka(regis1))
        {
            cout << fixed << setprecision(3) << name[0] << " : Affected by virus type 2 --> " << type2(name[0]) << endl;
        }
        else if (checka(name[0]) == checku(regis1) && checke(name[0]) == checka(regis1) && checki(name[0]) == checke(regis1) && checko(name[0]) == checki(regis1) && checku(name[0]) == checko(regis1))
        {
            cout << fixed << setprecision(3) << name[0] << " : Affected by virus type 3 --> " << type3(name[0]) << endl;
        }
    }

    if (!checktype(regis2))
    {
        cout << fixed << setprecision(3) << name[1] << " : unknowntype --> 0.000" << endl;
    }
    else
    {
        if (checka(name[1]) + 1 == checka(regis2) && checke(name[1]) + 1 == checke(regis2) && checki(name[1]) + 1 == checki(regis2) && checko(name[1]) + 1 == checko(regis2) && checku(name[1]) + 1 == checku(regis2))
        {
            cout << fixed << setprecision(3) << name[1] << " : Affected by virus type 1 --> " << type1(name[1]) << endl;
        }
        else if (checka(name[1]) == checke(regis2) && checke(name[1]) == checki(regis2) && checki(name[1]) == checko(regis2) && checko(name[1]) == checku(regis2) && checku(name[1]) == checka(regis2))
        {
            cout << fixed << setprecision(3) << name[1] << " : Affected by virus type 2 --> " << type2(name[1]) << endl;
        }
        else if (checka(name[1]) == checku(regis2) && checke(name[1]) == checka(regis2) && checki(name[1]) == checke(regis2) && checko(name[1]) == checki(regis2) && checku(name[1]) == checko(regis2))
        {
            cout << fixed << setprecision(3) << name[1] << " : Affected by virus type 3 --> " << type3(name[1]) << endl;
        }
    }

    if (!checktype(regis3))
    {
        cout << fixed << setprecision(3) << name[2] << " : unknowntype --> 0.000" << endl;
    }
    else
    {
        if (checka(name[2]) + 1 == checka(regis3) && checke(name[2]) + 1 == checke(regis3) && checki(name[2]) + 1 == checki(regis3) && checko(name[2]) + 1 == checko(regis3) && checku(name[2]) + 1 == checku(regis3))
        {
            cout << fixed << setprecision(3) << name[2] << " : Affected by virus type 1 --> " << type1(name[2]) << endl;
        }
        else if (checka(name[2]) == checke(regis3) && checke(name[2]) == checki(regis3) && checki(name[2]) == checko(regis3) && checko(name[2]) == checku(regis3) && checku(name[2]) == checka(regis3))
        {
            cout << fixed << setprecision(3) << name[2] << " : Affected by virus type 2 --> " << type2(name[2]) << endl;
        }
        else if (checka(name[2]) == checku(regis3) && checke(name[2]) == checka(regis3) && checki(name[2]) == checke(regis3) && checko(name[2]) == checki(regis3) && checku(name[2]) == checko(regis3))
        {
            cout << fixed << setprecision(3) << name[2] << " : Affected by virus type 3 --> " << type3(name[2]) << endl;
        }
    }
}