// PerahuBermotor.java
public class PerahuBermotor extends KendaraanBermotor {
    // atribut
    private String tipePerahu;
    private int dayaApung;

    // Constructor default
    public PerahuBermotor() {
        super();
    }

    // Constructor parameter
    public PerahuBermotor(String merk, String model, String tipePerahu, int dayaApung,
                          Mesin mesin, Transmisi transmisi, TangkiBahanBakar tangkiBahanBakar) {
        super(merk, model, mesin, transmisi, tangkiBahanBakar);
        this.tipePerahu = tipePerahu;
        this.dayaApung = dayaApung;
    }

    // Setter
    public void setTipePerahu(String tipePerahu) {
        this.tipePerahu = tipePerahu;
    }

    public void setDayaApung(int dayaApung) {
        this.dayaApung = dayaApung;
    }

    // Getter
    public String getTipePerahu() {
        return tipePerahu;
    }

    public int getDayaApung() {
        return dayaApung;
    }
}
