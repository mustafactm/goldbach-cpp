
#include <iostream>
using namespace std;

const int enBuyuk = 499;
bool asal[enBuyuk + 1];

int main() {
    string isim, cevap;

    // Başlangıç
    cout << "Hazirlayan: Mustafa CETIN " << endl;
    cout << "Isminizi giriniz: ";
    cin >> isim;

    cout << "Hos geldiniz " << isim << "!" << endl;
    cout << "Hazir misiniz? (evet / hayir): ";
    cin >> cevap;

    if (cevap != "evet") {
        cout << "Program sonlandirildi." << endl;
        return 0;
    }

    // asal dizisini hazırla
    for (int i = 0; i <= enBuyuk; i++)
        asal[i] = true;

    asal[0] = asal[1] = false;

    // asalları bul
    for (int i = 2; i * i <= enBuyuk; i++)
        if (asal[i])
            for (int j = i * i; j <= enBuyuk; j += i)
                asal[j] = false;

    // asal + asal yazdır
    for (int a = 2; a <= enBuyuk; a++)
        if (asal[a])
            for (int b = 2; b <= enBuyuk; b++)
                if (asal[b] && (a + b) % 2 == 0)
                    cout << a << " + " << b << " = " << a + b << endl;
    return 0;
}
