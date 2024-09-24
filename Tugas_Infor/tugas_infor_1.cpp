#include <iostream>
using namespace std;

int main(){
    double nilai,jumlah_nilai,nilai_rata_rata;
    int i = 0;

    while (true)
    {
        
        cout<<"masukkan nilai ke "<<i+1<<" = ";
        cin>>nilai;

        if (nilai <= 0 ){
            "program selesai\n";
            break;
        }

        i += 1;

        jumlah_nilai += nilai;
    }

    nilai_rata_rata = jumlah_nilai / i;

    cout<<"jumlah nilai = "<<jumlah_nilai<<"\n";
    cout<<"nilai rata rata = "<<nilai_rata_rata;




}