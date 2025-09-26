// Ban.java
public class Ban {
    // atribut
    private String merk;
    private String ukuran; // contoh: "205/55 R16 91V"

    // Constructor default
    public Ban() {}

    // Constructor dengan parameter
    public Ban(String merk, String ukuran) {
        this.merk = merk;
        this.ukuran = ukuran;
    }

    // Setter
    public void setMerk(String merk) {
        this.merk = merk;
    }

    public void setUkuran(String ukuran) {
        this.ukuran = ukuran;
    }

    // Getter
    public String getMerk() {
        return merk;
    }

    public String getUkuran() {
        return ukuran;
    }
}
