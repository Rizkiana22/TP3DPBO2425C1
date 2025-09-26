// Motor.java
import java.util.ArrayList;

public class Motor extends KendaraanBermotor {
    // atribut
    private String jenisMotor;
    private ArrayList<Ban> daftarBan;

    // Constructor default
    public Motor() {
        super();
        this.daftarBan = new ArrayList<>();
    }

    // Constructor parameter
    public Motor(String merk, String model, String jenisMotor,
                 ArrayList<Ban> daftarBan, Mesin mesin,
                 Transmisi transmisi, TangkiBahanBakar tangkiBahanBakar) {
        super(merk, model, mesin, transmisi, tangkiBahanBakar);
        this.jenisMotor = jenisMotor;
        this.daftarBan = daftarBan;
    }

    // Setter
    public void setJenisMotor(String jenisMotor) {
        this.jenisMotor = jenisMotor;
    }

    public void setDaftarBan(ArrayList<Ban> daftarBan) {
        this.daftarBan = daftarBan;
    }

    // Getter
    public String getJenisMotor() {
        return jenisMotor;
    }

    public ArrayList<Ban> getDaftarBan() {
        return daftarBan;
    }

    // Method tambahan
    public void tambahBan(Ban b) {
        daftarBan.add(b);
    }
}
