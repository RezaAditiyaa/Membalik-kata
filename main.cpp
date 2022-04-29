#include <iostream>

using namespace std;

int main(){
    /*Mendeklarasikan variable huruf dan hasil bertipe 
    array char untuk menampung data-data sebanyak 100 index.*/
    char huruf[1000], hasil[1000];
    
    /*Mendeklarasikan variable i bertipe integer untuk inisialisasi perulangan,
    variable jumlahstring bertipe integer untuk menghitung jumlah string yang diinputkan user, 
    dan variable jumlah bertipe integer.*/
    int i, jumlahstring, jumlah = 0;

    //Melakukan input string ke variable huruf
    printf("Masukkan Kata: ");
    fgets(huruf, sizeof(huruf), stdin); 

    //Menghitung jumlah huruf yang telah diinputkan oleh user.
    while (huruf[jumlah] != '\0'){
        jumlah++;
    }

    jumlahstring = jumlah - 1;

    //Melakukan perulangan sebanyak variable jumlah untuk membalikkan huruf.
    for (i = 0; i < jumlah; i++){
        hasil[i] = huruf[jumlahstring];
        jumlahstring--;
    }

    hasil[i] = '\0';
    
    //Menampilkan hasil kata yang dibalik
    printf("Kata Yang Dibalik Menjadi: %s \n", hasil);

    return 0;
}
