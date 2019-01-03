#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"menentukan bilangan terbesar dari 3 bilangan yang diinputkan"<<endl;
    cout<<"Masukan bilangan a = " ;
    cin>>a;
    cout<<"Masukan bilangan b = " ;
    cin>>b;
    cout<<"Masukan bilangan c = " ;
    cin>>c;
    if(a>b && a>c)
        cout<<"a terbesar"<<endl;
    if (b>a && b>c)
        cout<<"b terbesar"<<endl;
    if (c>a && c>b)
        cout<<"c terbesar"<<endl;
    return 0;
}
