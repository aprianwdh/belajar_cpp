#include <iostream>
using namespace std;

int main(){
    cout<<"==========penghitung suhu========== \n";
    while (true)
    {
        double celcius,fahrenheit,kelvin,reamur,fahrenheit2,kelvin2,reamur2;
        std::cout<<"masukkan suhu dalam celsius = ";
        std::cin>>celcius;

        if (celcius <= 0 ){
            cout<<"program berhenti kawan";
            break;
        }

        fahrenheit2 = (celcius*9/5)+32;
        cout<<"hasil konversi "<<celcius<<" C ->->-> "<<fahrenheit2<<" F\n";

        kelvin2 = celcius + 273.15;
        cout<<"hasil konversi "<<celcius<<" C ->->-> "<<kelvin2<<" K\n";

        reamur2 = celcius*4/5;
        cout<<"hasil konversi "<<celcius<<" C ->->-> "<<reamur2<<" K\n";
    }
    
}


