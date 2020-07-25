#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

//harfler, sayýlar ve semboller listesi

const char liste[] = {
"0123456789" //sayýlar
"ABCDEFGHIJKLMNOPRSTUVWXYZ" //büyük harfler
"abcdefghijklmnoprstuvwxyz" //küçük harfler
"!#$%&*" //semboller
};

//deðiþkenler
int i1;
int uzunluk = sizeof(liste) - 1;

int main()
{
    srand(time(0)); // rastgele seçim yapmasý için.

    //burada ne kadar güçlü bir þifre istediðini soruyoruz.
    cout << "Sifreniz ne uzunlukta olsun?\n\n0 -> 5 karakter <az guvenlikli>\n1 -> 10 karakter <orta guvenlikli>\n2 -> 25 karakter <yuksek guvenlikli>\n\nLutfen numara seciniz -> ";
    cin >> i1;
    //Her bir case'de kaç tane þifre istediðini unutmuyoruz.
    switch(i1)
    {
    case 0:
        int i2;
        cout << "Kac tane sifre olusturulmasini istiyorsunuz: ";
        cin >> i2;
        cout << "\n\n\nOlusturulan Sifreler;" << endl;
        for(int a=0; a<i2; a++) {
            for(int j=0; j < 5; j++) {
                cout << liste[rand() % uzunluk];
            }
            cout << endl;
        }
        break;
    case 1:
        cout << "Kac tane sifre olusturulmasini istiyorsunuz: ";
        cin >> i2;
        cout << "\n\n\nOlusturulan Sifreler;" << endl;
        for(int a=0; a<i2; a++) {
            for(int j=0; j < 10; j++) {
                cout << liste[rand() % uzunluk];
            }
            cout << endl;
        }
        break;
    case 2:
        cout << "Kac tane sifre olusturulmasini istiyorsunuz: ";
        cin >> i2;
        cout << "\n\n\nOlusturulan Sifreler;" << endl;
        for(int a=0; a<i2; a++) {
            for(int j=0; j < 25; j++) {
                cout << liste[rand() % uzunluk];
            }
            cout << endl;
        }
        break;
    }
    cout << "\n\nProgrami kapatmak icin herhangi bir tusa basiniz...";
    getch();// programýn hemen kapanmamasý için.
    return 0;
}
