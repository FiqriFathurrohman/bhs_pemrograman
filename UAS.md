1)*Fungsi (Function)*
//Fungsi adalah blok kode yang dirancang untuk melakukan tugas tertentu. Fungsi memungkinkan kita untuk memisahkan kode menjadi bagian-bagian yang lebih kecil, lebih mudah dipahami, dan dapat digunakan kembali. Fungsi didefinisikan dengan menggunakan kata kunci def diikuti dengan nama fungsi dan parameter opsional yang dibungkus dalam tanda kurung.

contoh
def tambah(angka1, angka2):
    return angka1 + angka2

hasil = tambah(5, 7)
print(hasil)  # Output: 12


Rekursi (Recursion)
Rekursi adalah teknik pemrograman di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan masalah. Rekursi sering digunakan untuk memecahkan masalah yang dapat dibagi menjadi sub-masalah yang lebih kecil dan serupa dengan masalah asli.

Untuk membuat fungsi rekursif, penting untuk menentukan basis rekursi (kondisi di mana rekursi berhenti) agar tidak terjadi panggilan fungsi yang tak terbatas.

contoh
def faktorial(n):
    if n == 0 or n == 1:  # Basis rekursi
        return 1
    else:
        return n * faktorial(n - 1)  # Panggilan rekursif

hasil = faktorial(5)
print(hasil)  # Output: 120

-------------------------------------------------------------------------
2)Exception handling dalam adalah mekanisme untuk menangani kesalahan atau situasi yang tidak terduga saat menjalankan program.

contoh
def bagi_angka(a, b):
    try:
        hasil = a / b
    except ZeroDivisionError:
        return "Error: Tidak dapat membagi dengan nol!"
    except TypeError:
        return "Error: Pastikan input berupa angka!"
    else:
        return f"Hasil pembagian {a} dengan {b} adalah {hasil}"
    finally:
        print("Eksekusi selesai.")

# Contoh penggunaan
print(bagi_angka(10, 2)) 
print(bagi_angka(10, 0)) 
print(bagi_angka(10, "a"))  
-------------------------------------------------------------------------
3)GUI (Graphical User Interface) adalah antarmuka pengguna yang memungkinkan interaksi dengan perangkat lunak melalui elemen grafis seperti tombol, kotak teks, menu, dan lainnya, dibandingkan dengan antarmuka berbasis teks. GUI memudahkan pengguna untuk berinteraksi dengan perangkat lunak karena elemen-elemen visualnya lebih intuitif dan mudah digunakan.

contoh
import tkinter as tk

def tombol_klik():
    label.config(text="Tombol telah diklik!")
root = tk.Tk()
root.title("Contoh GUI dengan Tkinter")
label = tk.Label(root, text="Halo, Selamat Datang!")
label.pack(pady=10)
tombol = tk.Button(root, text="Klik Saya", command=tombol_klik)
tombol.pack(pady=5)
root.mainloop()
-------------------------------------------------------------------------
4)Aplikasi dapat berkomunikasi dengan sisi bahasa pemrograman melalui API (Application Programming Interface), yang menyediakan seperangkat fungsi, prosedur, atau perintah yang memungkinkan aplikasi untuk berinteraksi dengan perangkat lunak lain. API memungkinkan berbagai komponen perangkat lunak untuk saling bertukar informasi dan fungsi.

contoh
import requests

def ambil_data_pengguna(user_id):
    # URL endpoint API
    url = f"https://jsonplaceholder.typicode.com/users/{user_id}"

    # Mengirim permintaan GET ke API
    response = requests.get(url)

    # Memeriksa status kode respons
    if response.status_code == 200:
        # Parsing data JSON
        data = response.json()
        return data
    else:
        return f"Error: Tidak dapat mengambil data. Status Code: {response.status_code}"

# Contoh penggunaan
user_data = ambil_data_pengguna(1)
print(user_data)



