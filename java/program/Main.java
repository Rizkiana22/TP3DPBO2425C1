import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // ======================= MOTOR =======================
        Mesin mesinMotor = new Mesin("Liquid-cooled 4-tak SOHC 155cc", 150);
        Transmisi transmisiMotor = new Transmisi("Manual");
        TangkiBahanBakar tangkiMotor = new TangkiBahanBakar(12, "Pertamax");
        Ban banDepan = new Ban("Michelin", "100/80-17");
        Ban banBelakang = new Ban("Michelin", "140/70-17");

        // Buat motor tanpa ban dulu
        Motor motor1 = new Motor("Yamaha", "R15", "Sport",
                                 new ArrayList<>(), mesinMotor, transmisiMotor, tangkiMotor);

        System.out.println("+===================== Data Motor =====================+");
        System.out.println("Data motor sebelum menambahkan ban:");
        System.out.println("Merk: " + motor1.getMerk());
        System.out.println("Model: " + motor1.getModel());
        System.out.println("Jenis: " + motor1.getJenisMotor());
        System.out.println("Ban Motor:");
        if (motor1.getDaftarBan().isEmpty()) System.out.println("  (Belum ada ban)");

        // Tambahkan ban
        motor1.tambahBan(banDepan);
        motor1.tambahBan(banBelakang);

        System.out.println("Data motor setelah menambahkan ban:");
        System.out.println("Merk: " + motor1.getMerk());
        System.out.println("Model: " + motor1.getModel());
        System.out.println("Jenis: " + motor1.getJenisMotor());
        System.out.println("Mesin: " + motor1.getMesin().getJenisMesin() 
                           + " - " + motor1.getMesin().getKapasitasMesin() + " cc");
        System.out.println("Transmisi: " + motor1.getTransmisi().getJenisTransmisi());
        System.out.println("Tangki: " + motor1.getTangkiBahanBakar().getKapasitas() 
                           + " liter, BBM: " + motor1.getTangkiBahanBakar().getJenisBahanBakar());
        System.out.println("Ban Motor:");
        for (Ban b : motor1.getDaftarBan()) {
            System.out.println("  - " + b.getMerk() + " (" + b.getUkuran() + ")");
        }

        // ======================= MOBIL =======================
        Mesin mesinMobil = new Mesin("4-silinder 16-valve DOHC 4-tak", 1500);
        Transmisi transmisiMobil = new Transmisi("Automatic");
        TangkiBahanBakar tangkiMobil = new TangkiBahanBakar(45, "Pertalite");

        // Buat mobil tanpa ban dulu
        Mobil mob1 = new Mobil("Toyota", "Avanza", "MPV", 5,
                               new ArrayList<>(), mesinMobil, transmisiMobil, tangkiMobil);

        System.out.println("\n+===================== Data Mobil =====================+");
        System.out.println("Data mobil sebelum menambahkan ban:");
        System.out.println("Merk: " + mob1.getMerk());
        System.out.println("Model: " + mob1.getModel());
        System.out.println("Ban Mobil:");
        if (mob1.getDaftarBan().isEmpty()) System.out.println("  (Belum ada ban)");

        // Tambahkan ban
        mob1.tambahBan(new Ban("Bridgestone", "185/65 R15"));
        mob1.tambahBan(new Ban("Bridgestone", "185/65 R15"));
        mob1.tambahBan(new Ban("Bridgestone", "185/65 R15"));
        mob1.tambahBan(new Ban("Bridgestone", "185/65 R15"));

        System.out.println("Data mobil setelah menambahkan ban:");
        System.out.println("Merk: " + mob1.getMerk());
        System.out.println("Model: " + mob1.getModel());
        System.out.println("Tipe Bodi: " + mob1.getTipeBodi());
        System.out.println("Jumlah Pintu: " + mob1.getJumlahPintu());
        System.out.println("Mesin: " + mob1.getMesin().getJenisMesin() 
                           + " - " + mob1.getMesin().getKapasitasMesin() + " cc");
        System.out.println("Transmisi: " + mob1.getTransmisi().getJenisTransmisi());
        System.out.println("Tangki: " + mob1.getTangkiBahanBakar().getKapasitas() 
                           + " liter, BBM: " + mob1.getTangkiBahanBakar().getJenisBahanBakar());
        System.out.println("Ban Mobil:");
        for (Ban b : mob1.getDaftarBan()) {
            System.out.println("  - " + b.getMerk() + " (" + b.getUkuran() + ")");
        }

        // ======================= PERAHU =======================
        Mesin mesinPerahu = new Mesin("Diesel", 2000);
        Transmisi transmisiPerahu = new Transmisi("Propeller");
        TangkiBahanBakar tangkiPerahu = new TangkiBahanBakar(100, "Solar");

        PerahuBermotor p1 = new PerahuBermotor("Yamaha", "WaveRunner", "Speedboat", 1200,
                                               mesinPerahu, transmisiPerahu, tangkiPerahu);

        System.out.println("\n+===================== Data Perahu =====================+");
        System.out.println("Merk: " + p1.getMerk());
        System.out.println("Model: " + p1.getModel());
        System.out.println("Tipe Perahu: " + p1.getTipePerahu());
        System.out.println("Daya Apung: " + p1.getDayaApung() + " kg");
        System.out.println("Mesin: " + p1.getMesin().getJenisMesin() 
                           + " - " + p1.getMesin().getKapasitasMesin() + " cc");
        System.out.println("Transmisi: " + p1.getTransmisi().getJenisTransmisi());
        System.out.println("Tangki: " + p1.getTangkiBahanBakar().getKapasitas() 
                           + " liter, BBM: " + p1.getTangkiBahanBakar().getJenisBahanBakar());
    }
}
