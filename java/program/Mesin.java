// Mesin.java
public class Mesin {
    // atribut
    private String jenisMesin;
    private int kapasitasMesin; // satuan cc

    // Constructor default
    public Mesin() {}

    // Constructor dengan parameter
    public Mesin(String jenisMesin, int kapasitasMesin) {
        this.jenisMesin = jenisMesin;
        this.kapasitasMesin = kapasitasMesin;
    }

    // Setter
    public void setJenisMesin(String jenisMesin) {
        this.jenisMesin = jenisMesin;
    }

    public void setKapasitasMesin(int kapasitasMesin) {
        this.kapasitasMesin = kapasitasMesin;
    }

    // Getter
    public String getJenisMesin() {
        return jenisMesin;
    }

    public int getKapasitasMesin() {
        return kapasitasMesin;
    }
}
