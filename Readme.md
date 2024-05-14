@startuml
start

:Menu Utama;
:1. Makanan;
:2. Minuman;
:3. Total;
:4. Kembali;
:5. Exit;
:Masukkan pilihan;

switch (Pilihan)
case (1)
  :Tampilkan Menu Makanan;
  :1. Pecel Lele - Rp 15.000;
  :2. Nasi Goreng - Rp 12.000;
  :3. Sambal - Rp 5.000;
  :Masukkan pilihan makanan;
  :Masukkan kuantitas (qty);
  :Tambahkan harga makanan ke total;
case (2)
  :Tampilkan Menu Minuman;
  :1. Teh - Rp 3.000;
  :2. Jeruk - Rp 5.000;
  :3. Air Mineral - Rp 2.000;
  :Masukkan pilihan minuman;
  :Masukkan kuantitas (qty);
  :Tambahkan harga minuman ke total;
case (3)
  :Tampilkan total biaya;
  :Total biaya: Rp {total};
case (4)
  :Kembali ke menu utama;
  :Menu Utama;
case (5)
  :Tampilkan pesan keluar;
  stop
endswitch

:Kembali ke menu utama;
end
@enduml
