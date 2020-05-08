# FP_SISOP20_T16

Final Project Sistem Operasi 2020

Anggota Kelompok

- I Gede Arimbawa Teja Putra Wardana - 05311840000045
- Desya Ananda Puspita Dewi - 05311840000046

## Command

- [ ] **cal**

Menampilkan kalender

Contoh : `cal`

- [x] **cd**

Mengubah working direktori

Contoh: `cd /var/www/html` -> akan berpindah ke direktori `/var/www/html`

- [x] **head**

Contoh: (asumsi isi file lebih dari 10)
- `head -n 5 file.txt` (mencetakan isi file sebanyak 5 baris, default mencetak 10 baris tanpa option -n)
- `head -c 6 file.txt` (mencetak isi file sebanyak 6 byte pada baris pertama)
- `head -q  file1.txt file2.txt` (digunakan jika file lebih dari 1, akan mencetak sebanyak 20 baris)
- `head -v file.txt` (selain mencetak 10 baris dari isi file, akan mencetak nama filenya pada baris pertama)

- [x] **tail**

Perintah tail atau tail command akan menampilkan bagian terakhir (10 baris secara default) dari satu atau lebih file atau data yang disalurkan.

Contoh:
`tail /var/log/apache2/domains/nama_domain.com.log`

- [ ] **zip**

Zip adalah command kompresi

Contoh:
- `zip tes.zip tes.txt` (mengcompress file tes)
- `zip –m tes.zip tes.txt` (menghapus file asli setelah di zip)
- `zip zipfile.zip file1.txt file2.txt` (Meng-compress file1.txt dan file2.txt kedalam file zipfile.zip)
- `zip -r zipfile.zip direktori` (untuk zip direktori secara rekursif)
