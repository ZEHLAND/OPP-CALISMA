#include<stdlib.h>
#include <iostream>
#include<cstdio>    ""
using namespace std;
class Insan {
    public://eklenmezse private olarak tanımlanıyor tüm nesneleri
    char ad[50];
    char* soyad;
    int yas;
    double boy;
    void kos();
    void dur() {
        cout << "Durdum." << endl;
    }
};
void Insan::kos() {
    cout << "Kosuyorum." << endl;
}
int main()
{
    Insan a;
    strcpy_s(a.ad, "mehmet");
    a.soyad = (char*)"agca";
    a.yas = 18;
    a.boy = 1.80;
    cout << a.ad << "kos." << endl;
    a.kos();

    return 0;
}

