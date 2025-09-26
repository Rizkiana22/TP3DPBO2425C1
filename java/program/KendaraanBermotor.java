// KendaraanBermotor.java
public class KendaraanBermotor {
    // atribut
    private String merk;
    private String model;
    private Transmisi transmisi;
    private TangkiBahanBakar tangkiBahanBakar;
    private Mesin mesin;

    // Constructor default
    public KendaraanBermotor() {}

    // Constructor dengan parameter
    public KendaraanBermotor(String merk, String model, Mesin mesin, Transmisi transmisi, TangkiBahanBakar tangkiBahanBakar) {
        this.merk = merk;
        this.model = model;
        this.mesin = mesin;
        this.transmisi = transmisi;
        this.tangkiBahanBakar = tangkiBahanBakar;
    }

    // Setter
    public void setMerk(String merk) {
        this.merk = merk;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public void setTransmisi(Transmisi transmisi) {
        this.transmisi = transmisi;
    }

    public void setTangkiBahanBakar(TangkiBahanBakar tangkiBahanBakar) {
        this.tangkiBahanBakar = tangkiBahanBakar;
    }

    public void setMesin(Mesin mesin) {
        this.mesin = mesin;
    }

    // Getter
    public String getMerk() {
        return merk;
    }

    public String getModel() {
        return model;
    }

    public Transmisi getTransmisi() {
        return transmisi;
    }

    public TangkiBahanBakar getTangkiBahanBakar() {
        return tangkiBahanBakar;
    }

    public Mesin getMesin() {
        return mesin;
    }
}
