#include <iostream>
using namespace std;

int main(){
    double angka,jumlah_angka;
    int i = 0;

    while (true)
    {
        i += 1;
        cout<<"masukkan angka ke "<<i<<" = ";
        cin>>angka;

        if (angka < 0) {
            cout<<"program eror angka negatif detected\n";
            break;
        }

        jumlah_angka+=angka;
    }
    

    cout<<"hasil angka yang anda masukkan adalah = "<<jumlah_angka;
}