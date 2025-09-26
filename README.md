# Program Kendaraan Bermotor (Motor, Mobil, Perahu)

## 1. Janji
Saya Muhammad Rizkiana Pratama dengan NIM 2404421 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk Keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## 2. Desain Diagram Class

![DesignTP3](https://github.com/user-attachments/assets/c79036de-ffa5-456c-ba2e-847eca51013a)

## 3. Penjelasan Atribut dan Methods

### Mesin
- **Atribut:**  
  - `jenisMesin: String` : tipe mesin (misal: "V-Twin")  
  - `kapasitasMesin: int` : kapasitas cc mesin  
- **Methods:**  
  - `getJenisMesin() / setJenisMesin(String)`  
  - `getKapasitasMesin() / setKapasitasMesin(int)`  

### Transmisi
- **Atribut:**  
  - `jenisTransmisi: String` : manual / otomatis / CVT  
- **Methods:**  
  - `getJenisTransmisi() / setJenisTransmisi(String)`  

### TangkiBahanBakar
- **Atribut:**  
  - `kapasitas: int` : kapasitas liter  
  - `jenisBahanBakar: String` : bensin, solar, dll  
- **Methods:**  
  - `getKapasitas() / setKapasitas(int)`  
  - `getJenisBahanBakar() / setJenisBahanBakar(String)`  

### Ban
- **Atribut:**  
  - `merk: String`  
  - `ukuran: String` : contoh: "205/55 R16 91V"  
- **Methods:**  
  - `getMerk() / setMerk(String)`  
  - `getUkuran() / setUkuran(String)`  

### KendaraanBermotor
- **Atribut:**  
  - `merk: String`  
  - `model: String`  
  - `mesin: Mesin`  
  - `transmisi: Transmisi`  
  - `tangkiBahanBakar: TangkiBahanBakar`  
- **Methods:**  
  - Getter / Setter untuk semua atribut  

### Motor
- **Atribut:**  
  - `jenisMotor: String` : sport, matic, bebek, dll  
  - `daftarBan: List<Ban>`  
- **Methods:**  
  - `tambahBan(Ban)` : menambah ban baru  
  - Getter / Setter  

### Mobil
- **Atribut:**  
  - `tipeBodi: String` : sedan, SUV, hatchback  
  - `jumlahPintu: int`  
  - `daftarBan: List<Ban>`  
- **Methods:**  
  - `tambahBan(Ban)`  
  - Getter / Setter  

### PerahuBermotor
- **Atribut:**  
  - `tipePerahu: String` : speedboat, kapal nelayan, dll  
  - `dayaApung: int` : kapasitas berat (kg)  
- **Methods:**  
  - Getter / Setter  
 
## 4. Penjelasan Desain Program

- **Inheritance:**  
  - `Motor`, `Mobil`, dan `PerahuBermotor` **meng-extend** `KendaraanBermotor`.  
  - Semua subclass mewarisi atribut `merk`, `model`, `mesin`, `transmisi`, dan `tangkiBahanBakar`.

- **Composition:**  
  - `KendaraanBermotor` memiliki objek `Mesin`, `Transmisi`, dan `TangkiBahanBakar`.  
  - `Motor` dan `Mobil` memiliki daftar ban (`ArrayList<Ban>`) melalui composition.  

- **Alasan desain:**  
  - Memisahkan class untuk setiap komponen (Mesin, transmissi, tanki, ban) agar **modular dan reusable**.  
  - Menggunakan inheritance untuk tipe kendaraan agar **lebih fleksibel** menambahkan jenis kendaraan baru di masa depan.

## 5. Penjelasan Alur Program

1. **Instansiasi komponen:**  
   - Buat objek `Mesin`, `Transmisi`, `TangkiBahanBakar`, dan `Ban`.  

2. **Membuat kendaraan:**  
   - Buat objek `Motor`, `Mobil`, atau `PerahuBermotor` dengan parameter komponen dan atribut spesifik kendaraan.  

3. **Menambahkan ban (untuk Motor / Mobil):**  
   - Gunakan method `tambahBan(Ban)` untuk menambah ban ke daftar kendaraan.  

4. **Menampilkan informasi kendaraan:**  
   - Gunakan getter pada kendaraan dan komponennya untuk mencetak detail ke console. 

## 5. Dokumentasi

### **C++:**

<img width="924" height="923" alt="Screenshot 2025-09-26 223044" src="https://github.com/user-attachments/assets/cb3cc468-2ac7-4ebf-b88b-20e4c02821de" />


### **JAVA:**

<img width="849" height="959" alt="Screenshot 2025-09-26 223202" src="https://github.com/user-attachments/assets/2c3aa3a2-7242-4635-8d99-8e82b4dc7cd7" />


### **PYTHON:**

<img width="880" height="867" alt="Screenshot 2025-09-26 223225" src="https://github.com/user-attachments/assets/664bc1dc-4bb1-446c-a102-b948e22d06a8" />
