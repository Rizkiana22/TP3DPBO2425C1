// TangkiBahanBakar.java
public class TangkiBahanBakar {
    // atribut
    private int kapasitas;
    private String jenisBahanBakar;

    // Constructor default
    public TangkiBahanBakar() {}

    // Constructor dengan parameter
    public TangkiBahanBakar(int kapasitas, String jenisBahanBakar) {
        this.kapasitas = kapasitas;
        this.jenisBahanBakar = jenisBahanBakar;
    }

    // Setter
    public void setKapasitas(int kapasitas) {
        this.kapasitas = kapasitas;
    }

    public void setJenisBahanBakar(String jenisBahanBakar) {
        this.jenisBahanBakar = jenisBahanBakar;
    }

    // Getter
    public int getKapasitas() {
        return kapasitas;
    }

    public String getJenisBahanBakar() {
        return jenisBahanBakar;
    }
}
