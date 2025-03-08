
# Praktikum Internet of Things (IoT)

Proyek ini merupakan bagian dari Praktikum Internet of Things (IoT) yang bertujuan untuk mempraktikkan penggunaan platform Wokwi dalam membuat rangkaian Lampu Lalu Lintas (Traffic Light). Rangkaian ini terdiri dari tiga LED dengan warna merah, kuning, dan hijau yang menyala secara bergantian sesuai dengan durasi yang telah ditentukan dalam kode.


## Fitur

- Mengontrol LED merah, kuning, dan hijau menggunakan ESP32.
- Menyala secara bergantian dengan durasi waktu tertentu.
- Dapat dijalankan pada simulator Wokwi atau perangkat ESP32 fisik.


## Instalasi dan Penggunaan

- Pastikan telah menginstal PlatformIO di VSCode.
- Clone repository ini atau buat proyek baru di PlatformIO.
- Pastikan koneksi hardware sesuai dengan diagram dalam `diagram.json`.
- Jalankan program dengan menjalankan perintah berikut di terminal:
   ```sh
   pio run --target upload
   ```
- Jika menggunakan Wokwi, jalankan simulasi dengan membuka `wokwi.toml` dan memulai proyek di platform Wokwi.

## Struktur Proyek
```
/lampu-lalu-lintas
│── .gitignore          # File untuk mengabaikan file tertentu dalam git
│── .pio/               # Direktori build otomatis dari PlatformIO
│── .vscode/            # Konfigurasi VSCode untuk proyek ini
│── diagram.json        # Diagram koneksi proyek
│── include/            # Folder untuk header file tambahan
│── lib/                # Folder untuk library tambahan
│── platformio.ini      # Konfigurasi utama PlatformIO
│── readme.md           # Dokumentasi proyek ini
│── src/                # Folder utama kode sumber
│   ├── main.cpp        # File utama program
│── test/               # Folder untuk pengujian
│── wokwi.toml          # Konfigurasi proyek untuk simulasi wokwi