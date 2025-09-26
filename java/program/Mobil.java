// Mobil.java
import java.util.ArrayList;

public class Mobil extends KendaraanBermotor {
    // atribut
    private String tipeBodi;
    private int jumlahPintu;
    private ArrayList<Ban> daftarBan;

    // Constructor default
    public Mobil() {
        super();
        this.daftarBan = new ArrayList<>();
    }

    // Constructor parameter
    public Mobil(String merk, String model, String tipeBodi, int jumlahPintu,
                 ArrayList<Ban> daftarBan, Mesin mesin,
                 Transmisi transmisi, TangkiBahanBakar tangkiBahanBakar) {
        super(merk, model, mesin, transmisi, tangkiBahanBakar);
        this.tipeBodi = tipeBodi;
        this.jumlahPintu = jumlahPintu;
        this.daftarBan = daftarBan;
    }

    // Setter
    public void setTipeBodi(String tipeBodi) {
        this.tipeBodi = tipeBodi;
    }

    public void setJumlahPintu(int jumlahPintu) {
        this.jumlahPintu = jumlahPintu;
    }

    public void setDaftarBan(ArrayList<Ban> daftarBan) {
        this.daftarBan = daftarBan;
    }

    // Getter
    public String getTipeBodi() {
        return tipeBodi;
    }

    public int getJumlahPintu() {
        return jumlahPintu;
    }

    public ArrayList<Ban> getDaftarBan() {
        return daftarBan;
    }

    // Method tambahan
    public void tambahBan(Ban b) {
        daftarBan.add(b);
    }
}
