#include "motor.cpp"
#include "mobil.cpp"
#include "perahuBermotor.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // ======================= MOTOR =======================
    Mesin mesinMotor("Liquid-cooled 4-tak SOHC 155cc", 150);
    Transmisi transmisiMotor("Manual");
    TangkiBahanBakar tangkiMotor(12.5, "Pertamax");
    Ban banDepan("Michelin", "100/80-17");
    Ban banBelakang("Michelin", "140/70-17");

    // Buat motor tanpa ban dulu
    Motor motor1("Yamaha", "R15", "Sport", {}, mesinMotor, transmisiMotor, tangkiMotor);

    cout << "+===================== Data Motor =====================+" << endl;
    cout << "Data motor sebelum menambahkan ban:" << endl;
    cout << "Merk: " << motor1.getMerk() << endl;
    cout << "Model: " << motor1.getModel() << endl;
    cout << "Jenis: " << motor1.getJenisMotor() << endl;
    cout << "Ban Motor:" << endl;
    if (motor1.getDaftarBan().empty()) cout << "  (Belum ada ban)" << endl;

    // Tambahkan ban
    motor1.tambahBan(banDepan);
    motor1.tambahBan(banBelakang);

    cout << "Data motor setelah menambahkan ban:" << endl;
    cout << "Merk: " << motor1.getMerk() << endl;
    cout << "Model: " << motor1.getModel() << endl;
    cout << "Jenis: " << motor1.getJenisMotor() << endl;
    cout << "Mesin: " << motor1.getMesin().getJenisMesin() 
         << " - " << motor1.getMesin().getKapasitasMesin() << " cc" << endl;
    cout << "Transmisi: " << motor1.getTransmisi().getJenisTransmisi() << endl;
    cout << "Tangki: " << motor1.getTangkiBahanBakar().getKapasitas() 
         << " liter, BBM: " << motor1.getTangkiBahanBakar().getJenisBahanBakar() << endl;
    cout << "Ban Motor:" << endl;
    for (auto b : motor1.getDaftarBan()) {
        cout << "  - " << b.getMerk() << " (" << b.getUkuran() << ")" << endl;
    }

    // ======================= MOBIL =======================
    Mesin mesinMobil("4-silinder 16-valve DOHC 4-tak", 1500);
    Transmisi transmisiMobil("Automatic");
    TangkiBahanBakar tangkiMobil(45, "Pertalite");

    // Buat mobil tanpa ban dulu
    Mobil mob1("Toyota", "Avanza", "MPV", 5, {}, mesinMobil, transmisiMobil, tangkiMobil);

    cout << "\n+===================== Data Mobil =====================+" << endl;
    cout << "Data mobil sebelum menambahkan ban:" << endl;
    cout << "Merk: " << mob1.getMerk() << endl;
    cout << "Model: " << mob1.getModel() << endl;
    cout << "Ban Mobil:" << endl;
    if (mob1.getDaftarBan().empty()) cout << "  (Belum ada ban)" << endl;

    // Tambahkan ban
    mob1.tambahBan(Ban("Bridgestone", "185/65 R15"));
    mob1.tambahBan(Ban("Bridgestone", "185/65 R15"));
    mob1.tambahBan(Ban("Bridgestone", "185/65 R15"));
    mob1.tambahBan(Ban("Bridgestone", "185/65 R15"));

    cout << "Data mobil setelah menambahkan ban:" << endl;
    cout << "Merk: " << mob1.getMerk() << endl;
    cout << "Model: " << mob1.getModel() << endl;
    cout << "Tipe Bodi: " << mob1.getTipeBodi() << endl;
    cout << "Jumlah Pintu: " << mob1.getJumlahPintu() << endl;
    cout << "Mesin: " << mob1.getMesin().getJenisMesin() 
         << " - " << mob1.getMesin().getKapasitasMesin() << " cc" << endl;
    cout << "Transmisi: " << mob1.getTransmisi().getJenisTransmisi() << endl;
    cout << "Tangki: " << mob1.getTangkiBahanBakar().getKapasitas() 
         << " liter, BBM: " << mob1.getTangkiBahanBakar().getJenisBahanBakar() << endl;
    cout << "Ban Mobil:" << endl;
    for (auto b : mob1.getDaftarBan()) {
        cout << "  - " << b.getMerk() << " (" << b.getUkuran() << ")" << endl;
    }

    // ======================= PERAHU =======================
    Mesin mesinPerahu("Diesel", 2000);
    Transmisi transmisiPerahu("Propeller");
    TangkiBahanBakar tangkiPerahu(100, "Solar");

    PerahuBermotor p1("Yamaha", "WaveRunner", "Speedboat", 1200,
                      mesinPerahu, transmisiPerahu, tangkiPerahu);

    cout << "\n+===================== Data Perahu =====================+" << endl;
    cout << "Merk: " << p1.getMerk() << endl;
    cout << "Model: " << p1.getModel() << endl;
    cout << "Tipe Perahu: " << p1.getTipePerahu() << endl;
    cout << "Daya Apung: " << p1.getDayaApung() << " kg" << endl;
    cout << "Mesin: " << p1.getMesin().getJenisMesin() 
         << " - " << p1.getMesin().getKapasitasMesin() << " cc" << endl;
    cout << "Transmisi: " << p1.getTransmisi().getJenisTransmisi() << endl;
    cout << "Tangki: " << p1.getTangkiBahanBakar().getKapasitas() 
         << " liter, BBM: " << p1.getTangkiBahanBakar().getJenisBahanBakar() << endl;

    return 0;
}
