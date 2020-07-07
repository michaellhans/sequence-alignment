# sequence-alignment - \[closed, not accepting submission yet\]
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/7/79/RPLP0_90_ClustalW_aln.gif/640px-RPLP0_90_ClustalW_aln.gif" width="40%" height="50%"><img src="https://upload.wikimedia.org/wikipedia/commons/2/25/An_excerpt_of_a_multiple_sequence_alignment_of_TMEM66_proteins.png" width="45%" height="50%">
## Deskripsi Masalah
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*Sequence alignment* (pensejajaran sekuens) merupakan sebuah teknik dalam bioinformatika untuk melakukan pensejajaran antara dua buah string sekuens, misalkan sekuens asam amino atau nukleotid. Teknik ini banyak dipakai, misalkan dalam melakukan pencarian dalam sebuah basis data genom ataupun mengetahui keterkaitan organisme dalam studi filogeni.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Dua buah sekuens DNA bisa memiliki susunan basa nukleotida yang berbeda, namun keduanya bisa memiliki sub-sekuens yang mirip. Misalkan, dua buah sekuens ACTGGTA dan TGTGGTC memiliki sub-sekuens yang sama (TGGT). Sub-sekuens ini disebut *conserved sequence*. Salah satu tujuan pensejajaran adalah mengidentifikasi bagian yang mirip. Dengan mengetahui pensejajaran DNA antar dua organisme, kita dapat mengetahui hubungan dan perubahan evolusioner yang terjadi antar dua organisme.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*Global alignment* merujuk pada pensejajaran global (seluruh panjang kedua sekuens), sedangkan pensejajaran lokal merujuk pada pensejajaran suatu daerah yang diduga memuat kesamaan. Pada tugas ini, anda akan diminta untuk melakukan implementasi algoritma pensejajaran global sederhana dengan prinsip pemrograman dinamis dan *DnC* (Divide and Conquer) yang sudah anda pelajari di kelas. Selain itu, anda akan diminta untuk melakukan MSA berdasarkan algoritma pensejajaran dua sekuens yang telah anda buat. Sebagai tantangan, anda akan menggunakan data sekuens DNA dari beberapa *strain* Coronavirus sebagai data uji coba.

## Milestone
Terdapat dua titik capai dalam tugas ini :
1. Implementasi algoritma Needleman-Wunsch , algoritma pemrograman dinamis untuk pensejajaran global.
2. Implementasi algoritma MSA

## Aturan
1. Bahasa yang digunakan adalah bahasa prosedural yang sudah dipelajari selama kuliah : C, C++, Java, Python.
2. Anda boleh mencari kode referensi, namun pastikan anda **menulis kode sendiri**. Pemahaman menjadi bagian penting dari penilaian.
3. **Tidak diperbolehkan** menggunakan pustaka yang mengimplementasikan kedua algoritma, misal parasail atau BioPython. Usahakan untuk tidak menggunakan pustaka lain di luar pustaka standar / built-in.
4. Gunakan file eksternal untuk melakukan pensejajaran. File eksternal berupa : (a) data (sekuens alfabet) , (b) scoring matrix , (c) alfabet sekuens.
5. Berkaitan dengan nomor 4, pastikan anda dapat mengubah alfabet dari sekuens dan scoring matrix. Misalkan, alfabet pensejajaran sekuens basa nukleotid adalah ACGT, dan terdapat 20 alfabet untuk pensejajaran sekuens asam amino. Untuk scoring matrix pensejajaran asam amino, anda dapat menggunakan matriks PAM250.
6. Format untuk nomor (4) dan (5) dibebaskan.
7. Program disarankan cukup *terminal-based*.

## Tips
[1]Pemrograman dinamis pensejajaran global yang naif, sayangnya memiliki kompleksitas ruang eksponensial. Sebagai contoh, bila anda membandingkan dua buah sekuens DNA dengan panjang ~29000, anda akan memerlukan ruang sekitar 29000 x 29000 ~ 784.000.000. Beberapa komputer mungkin tidak memiliki cukup memori. Gunakan *DnC* untuk membantu mengurangi kompleksitas ruang<br>
[2]Anda bisa saja menggunakan Needleman-Wunsch n-dimensi untuk melakukan MSA, akan tetapi ingat bahwa kompleksitasnya eksponensial terhadap jumlah sekuens. Anda disarankan menggunakan *progressive alignment* dengan menggunakan profiling.<br>

## Pengumpulan
### Deliverables
1. File yang berisi hasil pensejajaran sekuens global. Misal , hasil pensejajaran antara sekuens pertama (file1.txt) dan sekuens kedua (file2.txt) ditulis sebagai file1_file2.txt. Simpan semua hasil pensejajaran dalam sebuah folder [result]. Format sebagai berikut : Misalkan dua buah sekuens yang dicoba adalah ATGTTATA dan ATCGTCC dengan pensejajaran global adalah AT_GTTATA dan ATCGT_C_C, maka baris pertama file adalah AT_GTTATA dan baris kedua adalah ATCGT_C_C. Bila pensejajaran dilakukan untuk lebih dari dua sekuens, format file mirip namun dengan baris yang lebih banyak. Tampilkan skor pensejajaran di awal.
2. Kode Sumber. Bila anda menggunakan bahasa *compiled*, tuliskan cara melakukan kompilasi.
3. Ubah Readme ini. Tuliskan pendekatan pensejajaran yang anda lakukan dan cara menjalankan program.

### Teknis Pengumpulan
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Kumpulkan dengan membuat *merge request* pada *repository* ini. Batas pengumpulan dan demo adalah 29 Juli 2020.

### Demo
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Setelah selesai, jadwalkan demo dengan asisten. Kontak dapat dilihat pada Readme ini. Demo berlangsung 15-30 menit. Demo akan berisi tanya jawab, namun belum tentu akan diisi oleh pengujian, tergantung *runtime* dari algoritma anda.

## Penilaian
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Uji cobakan algoritma anda dengan data yang telah disediakan di *repository* ini. Percobaan minimal menghasilkan 3 pensejajaran global untuk kasus 2 sekuens, 2 pensejajaran global kasus 3 sekuens, 1 pensejajaran global untuk kasus 4 sekuens.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Nilai maksimal 1500 untuk *milestone* pertama, dan nilai maksimal *1900* untuk milestone kedua. Nilai maksimal demo adalah *700*, sehingga nilai maksimal total adalah 4100. Algoritma anda **wajib optimum** untuk pensejajaran global 2 sekuens. Akan tetapi, algoritma anda tidak harus optimum untuk MSA. Implementasi MSA lebih kepada *proof-of-concept*.

## Kontak
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Silahkan hubungi asisten lewat line @alamhasabiebaru atau lewat email 13517096@std.stei.itb.ac.id dengan subjek  \[SELEKSI IRK - SEQUENCE ALIGNMENT\] . *Note : waktu menjawab bervariasi, namun email biasanya akan dibalas kurang dari sehari. Line mungkin tidak dibalas dalam waktu satu-dua hari. Mohon bersabar :)*. Pertanyaan juga dipersilahkan. Jawaban akan diposting dalam bagian QnA README ini.

## QnA
null.

## Referensi
Silahkan gunakan referensi berikut sebagai awal pengerjaan tugas:<br>
[1] Pengenalan sequence alignment : https://www.bioinformaticsalgorithms.org/<br>
[2] Beragam kode sumber : https://github.com/topics/needleman-wunsch-algorithm<br>
[3] Data sekuens DNA : https://www.ncbi.nlm.nih.gov/nuccore<br>
[4] MSA dengan profile : https://www.ncbi.nlm.nih.gov/CBBresearch/Przytycka/download/lectures/PCB_Lect05_Multip_Align.pdf [pdf]<br>

## Final Words
Akhir Kata, selamat bersenang-senang ! By the end, you can show something new on your github repo ;)
