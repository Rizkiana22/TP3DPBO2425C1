# main.py
from motor import Motor
from mobil import Mobil
from perahu_bermotor import PerahuBermotor
from mesin import Mesin
from transmisi import Transmisi
from tangki_bahan_bakar import TangkiBahanBakar
from ban import Ban

# ======================= MOTOR =======================
mesin_motor = Mesin("Liquid-cooled 4-tak SOHC 155cc", 150)
transmisi_motor = Transmisi("Manual")
tangki_motor = TangkiBahanBakar(12.5, "Pertamax")

ban_depan = Ban("Michelin", "100/80-17")
ban_belakang = Ban("Michelin", "140/70-17")

# Buat motor tanpa ban dulu
motor1 = Motor("Yamaha", "R15", "Sport", [], mesin_motor, transmisi_motor, tangki_motor)

print("+===================== Data Motor =====================+")
print("Data motor sebelum menambahkan ban:")
print(f"Merk: {motor1.get_merk()}")
print(f"Model: {motor1.get_model()}")
print(f"Jenis: {motor1.get_jenis_motor()}")
print("Ban Motor:")
if not motor1.get_daftar_ban():
    print("  (Belum ada ban)")

# Tambahkan ban
motor1.tambah_ban(ban_depan)
motor1.tambah_ban(ban_belakang)

print("Data motor setelah menambahkan ban:")
print(f"Merk: {motor1.get_merk()}")
print(f"Model: {motor1.get_model()}")
print(f"Jenis: {motor1.get_jenis_motor()}")
print(f"Mesin: {motor1.get_mesin().get_jenis_mesin()} - {motor1.get_mesin().get_kapasitas_mesin()} cc")
print(f"Transmisi: {motor1.get_transmisi().get_jenis_transmisi()}")
print(f"Tangki: {motor1.get_tangki_bahan_bakar().get_kapasitas()} liter, BBM: {motor1.get_tangki_bahan_bakar().get_jenis_bahan_bakar()}")
print("Ban Motor:")
for b in motor1.get_daftar_ban():
    print(f"  - {b.get_merk()} ({b.get_ukuran()})")

# ======================= MOBIL =======================
mesin_mobil = Mesin("4-silinder 16-valve DOHC 4-tak", 1500)
transmisi_mobil = Transmisi("Automatic")
tangki_mobil = TangkiBahanBakar(45, "Pertalite")

# Buat mobil tanpa ban dulu
mob1 = Mobil("Toyota", "Avanza", "MPV", 5, [], mesin_mobil, transmisi_mobil, tangki_mobil)

print("\n+===================== Data Mobil =====================+")
print("Data mobil sebelum menambahkan ban:")
print(f"Merk: {mob1.get_merk()}")
print(f"Model: {mob1.get_model()}")
print("Ban Mobil:")
if not mob1.get_daftar_ban():
    print("  (Belum ada ban)")

# Tambahkan ban
mob1.tambah_ban(Ban("Bridgestone", "185/65 R15"))
mob1.tambah_ban(Ban("Bridgestone", "185/65 R15"))
mob1.tambah_ban(Ban("Bridgestone", "185/65 R15"))
mob1.tambah_ban(Ban("Bridgestone", "185/65 R15"))

print("Data mobil setelah menambahkan ban:")
print(f"Merk: {mob1.get_merk()}")
print(f"Model: {mob1.get_model()}")
print(f"Tipe Bodi: {mob1.get_tipe_bodi()}")
print(f"Jumlah Pintu: {mob1.get_jumlah_pintu()}")
print(f"Mesin: {mob1.get_mesin().get_jenis_mesin()} - {mob1.get_mesin().get_kapasitas_mesin()} cc")
print(f"Transmisi: {mob1.get_transmisi().get_jenis_transmisi()}")
print(f"Tangki: {mob1.get_tangki_bahan_bakar().get_kapasitas()} liter, BBM: {mob1.get_tangki_bahan_bakar().get_jenis_bahan_bakar()}")
print("Ban Mobil:")
for b in mob1.get_daftar_ban():
    print(f"  - {b.get_merk()} ({b.get_ukuran()})")

# ======================= PERAHU =======================
mesin_perahu = Mesin("Diesel", 2000)
transmisi_perahu = Transmisi("Propeller")
tangki_perahu = TangkiBahanBakar(100, "Solar")

p1 = PerahuBermotor("Yamaha", "WaveRunner", "Speedboat", 1200, mesin_perahu, transmisi_perahu, tangki_perahu)

print("\n+===================== Data Perahu =====================+")
print(f"Merk: {p1.get_merk()}")
print(f"Model: {p1.get_model()}")
print(f"Tipe Perahu: {p1.get_tipe_perahu()}")
print(f"Daya Apung: {p1.get_daya_apung()} kg")
print(f"Mesin: {p1.get_mesin().get_jenis_mesin()} - {p1.get_mesin().get_kapasitas_mesin()} cc")
print(f"Transmisi: {p1.get_transmisi().get_jenis_transmisi()}")
print(f"Tangki: {p1.get_tangki_bahan_bakar().get_kapasitas()} liter, BBM: {p1.get_tangki_bahan_bakar().get_jenis_bahan_bakar()}")
