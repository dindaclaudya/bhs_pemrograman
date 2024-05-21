1. paradigma dalam bahasa pemrograman adalah gaya atau kerangka pikiran yang digunakan dalam menulis dan mengorganisir kode program

2. model data adalah cara atau format yang digunakan untuk menyimpan dan mengatur data dalam sebuah program dan modes data menentukan bagaimana data dapat diakses dan dimanipulasi dalam program

operator adalah simbol yang digunakan untuk melakukan operasi pada satu atau Iebih operand (niai atau variabel)

Seleksi adalah mekanisme dalam pemrograman yang memungkinkan program untuk Mengikuti cabang eksekusi yang berbeda berdasarkan kondisi tertentu.

fungsi adalah biok kode yang dirancang untuk melakukan tugas tertentu dan dapat dipanggil dari bagian lain dari program

3. KONSEP PERULANGAN (LOOPING STATEMENT):
a. Perulangan Luar (Baris)
for (i = 1; i <= n; i++) {
Perulangan ini mengontrol jumlah baris yang akan dicetak, mulai dari 1 hingga n. Setiap iterasi dari loop ini mewakili satu baris dari pola bintang yang akan dicetak

 b. Perulangan Kedua (Spasi) 
for (s = i; s < n; s++) 
    cout << " ";
Perulangan ini mencetak spasi di setiap baris. Jumlah spasi berkurang seiring bertambahnya baris i. Jika i adalah 1, akan ada n-1 spasi. Jika i adalah 2, akan ada n-2 spasi, dan seterusnya

c. Perulangan ketiga (Bintang)
       for (j = 1; j <= i; j++) 
    cout << "*";
Perulangan ini mencetak bintang (*) di setiap baris. Jumlah bintang bertambah seiring bertambahnya baris i. Jika i adalah 1, akan ada 1 bintang. Jika i adalah 2, akan ada 2 bintang, dan seterusnya

d. Mencetak baris baru
cout << "\n";
Setelah mencetak spasi dan bintang untuk satu baris, baris baru dicetak untuk memulai baris berikutnya

PENJELASAN PROGRAMNYA:
* Loop luar (for (i = 1; i <= n; i++)) menentukan jumlah baris
* Loop tengah (for (s = i; s < n; s++)) mencetak spasi untuk menempatkan bintang pada posisi yang benar
* Loop dalam (for (j = 1; j <= i; j++)) mencetak bintang sesuai jumlah baris saat ini
* Setiap baris diakhiri dengan baris baru (cout << "\n";)