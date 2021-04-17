PENUGASAN MAGANG IRIS
# Pointer

Pointer, dalam Bahasa C dan C++, adalah variable yang menyimpan alamat dari variable lainnya. Sebuah pointer dapat digunakan untuk menghubungkan ke fungsi lainnya. Pointer dapat dikurangi atau ditambahkan, yakni untuk merujuk (pointing) ke lokasi memori sebelum atau sesudahnya. Tujuan dari pointer adalah untuk menyimpan ruang memori dan memangkas waktu eksekusi (execute) sehingga menjadi lebih singkat.

Membuat Pointer

Bentuk penulisan 

```sh
tipeData *identitas;
//atau
tipeData *identitas = &var;
```
contoh penulisan 

```sh
int *pInt;
double *pDouble = &myVar;
```
***
### Operator-operator pada pointer

Dalam pembentukan pointer dibutuhkan operator-operator.

#### Address-of Operator (&)

Operator ini & adalah operator yang memungkinkan kita untuk melihat alamat memori yang dimiliki oleh variabel tersebut. Cara membuat compiler memberikan alamat memori (ukan isi/nilai dari memori tersebut) adalah dengan meletakkan & di depan identitas.

Contoh
```h
#include <iostream>
using namespace std;

int main()
{
    int var = 2;

    cout<<&var<<" memiliki nilai "<<var<<endl;

    return 0;
}

```

#### Deference operator (*)

Operator ini memungkinkan kita untuk mendapatkan nilai/isi dari sebuah memori berdasarkan alamat memori

Contoh 
```sh

#include <iostream>
using namespace std;

int main()
{
    int var = 2;

    cout<<var<<endl;
    cout<<&var<<endl;
    cout<<*&var<<endl;

    return 0;
}
```

### Mengakses Pointer

Variabel pointer memiliki alamat memori sebagai nilai dari variabel pointer tersebut. Untuk mengakses pointer (karena pointer juga variabel) tidak jauh beda dengan cara mengakses variabel, Untuk mengakses nilai pointer kita cukup memanggil identitas pointer itu,

```sh
pInt
```
Hal di atas akan menghasilkan nilai dari pointer yang berupa alamat memori dari variabel yang ditunjuk oleh pointer tersebut. Karena pointer hanya dapat mememiliki nilai berupa alamat memori, untuk mengubah nilai dari pointer atau mengubah tujuan dari pointer kita membutuhkan operator address-of (&) pada operand sumber.

 ```sh 
pInt = &myVar
```
operand sumber akan menghasilkan alamat memori dari myVar, dan hal itu merupakan nilai yang dibutuhkan oleh variabel pointer.

### Deklarasi Pointer

Di bawah ini adalah syntax dari deklarasi variabel :

```sh
type * name;
```
type adalah basis pointer yang merupakan variabel C yang mengindikasi tipe dari variabel yang di-point oleh pointer.

Contoh

```sh
// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue
  *p1 = 10;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  *p1 = 20;          // value pointed to by p1 = 20
  
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
```

Program itu akan memberikan hasil 

```sh
firstvalue is 10
secondvalue is 20
```

### Ukuran Pointer

Pointer membutuhkan memori setiap didirikan. Besar memori tersebut sama dengan setiap tipe data yang digunakan. Besar memori pada pointer tergantung pada compiler, contohnya, jika compiler 32 bit maka pointer akan memakan memori sebanyak 4 bytes.

