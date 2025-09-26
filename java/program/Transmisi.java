// Transmisi.java
public class Transmisi {
    // atribut
    private String jenisTransmisi;

    // Constructor default
    public Transmisi() {}

    // Constructor dengan parameter
    public Transmisi(String jenisTransmisi) {
        this.jenisTransmisi = jenisTransmisi;
    }

    // Setter
    public void setJenisTransmisi(String jenisTransmisi) {
        this.jenisTransmisi = jenisTransmisi;
    }

    // Getter
    public String getJenisTransmisi() {
        return jenisTransmisi;
    }
}
