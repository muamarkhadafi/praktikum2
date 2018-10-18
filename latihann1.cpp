#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cout<<"MASUKAN BILANGAN 1: ";
    cin>> A;
    cout<<"MASUKAN BILANGAN 2: ";
    cin>> B;
    cout<<"MASUKAN BILANGAN 3: ";
    cin>> C;

    if (A>B && A>C) cout << "bilangan terbesar =" << A << endl;
    else
    {
        if (B>A && B>C) cout << "bilangan terbesar = " << B << endl;
        else
            cout << "bilangan terbesar = " << C;

    }
}

