#include <iostream>
using namespace std;

int main(){
    int nilai,positif=0,negatif=0;

    cout<<"masukkan angka = ";
    cin>>nilai;

    for(int i = 1;i <= nilai;i++){
        if (i % 2 == 0){
            positif += 1;
        }
        else{
            negatif += 1;
        }
    }

    cout<<"jumlah nilai positif = "<<positif<<"\n";
    cout<<"jumlah nilai negatif = "<<negatif;
}