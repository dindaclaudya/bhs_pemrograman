# 1. DEFINISI ARRAY DALAM PHYTON
Array dalam phyton adalah struktur data yang digunakan untuk menyimpan sekumpulan elemen dengan tipe data yang sama

# 2. SET DALAM PHYTON
struktur data yang digunakan untuk menyimpan koleksi komponen yang unik, yaitu tidak ada duplikasi elemen di dalamnya.

# a. Tidak terurut (Set)
Tipe kumpulan data tidak berurutan. Artinya, kita tidak bisa menggunakan index untuk mengakses nilai-nilai

output:
{'Wahid', 'Lendis', 'Basith', 'Huda'}
'apel, mangga')
(Benar, 5, ('A', 'B'), 'hewan', 'manusta'}

# b. Tidak dapat diubah (Set)
Himpunan tidak dapat diubah, artinya nilai yang telah kita masukkan ke dalam himpunan tidak dapat diubah lagi. Namun, kami masih dapat menambah dan menghapus anggota ke kumpulan tersebut. Dan, karena kumpulan tidak dapat diubah, kumpulan hanya dapat menerima anggota tipe data yang juga tidak dapat diubah.

# c. Tidak ada duplikat
Himpunan (set) dalam Python tidak dapat menerima nilai duplikat. Jika kita memasukkan suatu nilai yang sudah ada pada suatu himpunan, maka nilai tersebut hanya akan muncul satu kali saja. 

# d. Menambah/Memperbarui Elemen Set
Fungsi add(): Menambah satu elemen ke dalam set.
Fungsi update(): Menambah beberapa elemen ke dalam set sekaligus, bisa menggunakan set atau list.

# e. Menghapus Elemen Set
Fungsi remove(value): Menghapus nilai tertentu dari set, akan menghasilkan kesalahan jika nilai tidak ada.
Fungsi discard(value): Menghapus nilai tertentu dari set, tidak akan menghasilkan kesalahan jika nilai tidak ada.
Fungsi pop(): Menghapus dan mengembalikan elemen acak dari set.
Fungsi clear(): Menghapus semua elemen dari set.

# f. Fungsi-Fungsi (Set)
1. clear(): Menghapus seluruh set.
2. add(): Menambahkan satu anggota ke dalam set.
3. copy(): Membuat salinan dari sebuah set ke dalam sebuah set baru.
4. difference(): Melakukan operasi perbedaan antara dua set.
5. difference_update(): Menghapus anggota set lain yang ada dalam set saat ini.
6. discard(): Menghapus satu anggota dari set, jika anggota tersebut ada.
7. intersection(): Melakukan operasi irisan antara dua set.
8. intersection_update(): Memperbarui set saat ini dengan hasil irisan dari set saat ini dan set lainnya.
9. isdisjoint(): Mengembalikan nilai True jika dua set tidak memiliki irisan (slice).
10. issubset(): Mengembalikan nilai True jika set lain memiliki anggota dari set saat ini.
11. issuperset(): Mengembalikan nilai True jika set saat ini memiliki anggota dari set lain.
12. pop(): Menghapus dan mengembalikan nilai yang dihapus dari sebuah set.
13. remove(): Menghapus sebuah nilai dari sebuah set.
14. symmetric_difference(): Melakukan operasi perbedaan simetris antara dua set.
15. symmetric_difference_update(): Memperbarui set saat ini dengan hasil perbedaan simetris antara set saat ini dan set lainnya.
16. union(): Melakukan operasi gabungan dari dua set atau lebih.
17. update(): Memperbarui set dengan menambahkan nilai-nilai tertentu ke dalamnya.

# 3. Kamus (Dictionary)
Kamus adalah tipe data dalam Python yang digunakan untuk menyimpan kumpulan data atau nilai dengan pendekatan "pasangan kunci-nilai". Kamus sendiri memiliki dua komponen inti: Pertama adalah kunci, yaitu nama atribut dari suatu item dalam kamus. Kedua adalah nilai, yaitu nilai yang disimpan dalam suatu atribut.

Item kamus memiliki 3 properti, yaitu:

1. Tidak Berurutan (Unordered) - tidak berurutan
2. Dapat Diubah (Changeable) - dapat diubah
3. Unik (Unique) - tidak dapat menerima dua kunci yang sama

# a. Membuat Elemen Kamus
Berikut adalah cara membuat kamus di Python. Ada 2 cara:

1. Dengan menggunakan kurung kurawal {}.
2. Dan yang kedua bisa menggunakan fungsi dict() atau konstruktor.

# b. Menambah/Memperbarui Elemen Kamus
Untuk menambahkan kunci dan item baru, caranya mirip dengan mengedit item. Jadi: Jika kunci yang kita tentukan sudah ada, sistem akan menggantikan item lama dengan yang baru, alias mengeditnya. Tetapi jika kunci yang kita tentukan tidak ada, sistem akan menambahkannya sebagai item baru.

# c. Menghapus elemen kamus
Ada dua cara untuk menghapus sebuah item:
1. Menggunakan pernyataan del <dict[key]>.
2. Atau menggunakan fungsi dictionary.pop().

# d. Operator Keanggotaan (Kamus)
Kita dapat menggunakan operator keanggotaan untuk tipe data kamus dalam Python

# e. Fungsi-Fungsi (Kamus)
1. all()

Deskripsi: Mengembalikan True jika semua kunci dalam kamus bernilai True (atau jika kamus kosong).

2. any()

Deskripsi: Mengembalikan True jika setidaknya satu kunci dalam kamus bernilai True. Jika kamus kosong, mengembalikan False.

3. gitlen()

Deskripsi: Mengembalikan panjang (jumlah item) dalam kamus.
sorted()

Deskripsi: Mengembalikan daftar kunci yang diurutkan dari kamus.





