#pragma once
#include "kendaraanBermotor.cpp"

class PerahuBermotor : public KendaraanBermotor {
private:
    // atribut
    string tipePerahu;
    int dayaApung;

    Mesin mesin;
    Transmisi transmisi;
    TangkiBahanBakar tangkiBahanBakar;

public:
    // constructor default
    PerahuBermotor() : KendaraanBermotor() {}

    // constructor parameter
    PerahuBermotor(string merk, string model, string tipePerahu, int dayaApung,
                   Mesin mesin, Transmisi transmisi, TangkiBahanBakar tangkiBahanBakar)
        : KendaraanBermotor(merk, model, mesin, transmisi, tangkiBahanBakar) {
        this->tipePerahu = tipePerahu;
        this->dayaApung = dayaApung;
        this->mesin = mesin;
        this->transmisi = transmisi;
        this->tangkiBahanBakar = tangkiBahanBakar;
    }

    // setter
    void setTipePerahu(string tipePerahu) {
        this->tipePerahu = tipePerahu;
    }

    void setDayaApung(int dayaApung) {
        this->dayaApung = dayaApung;
    }

    void setMesin(Mesin mesin) {
        this->mesin = mesin;
    }

    void setTransmisi(Transmisi transmisi) {
        this->transmisi = transmisi;
    }

    void setTangkiBahanBakar(TangkiBahanBakar tangkiBahanBakar) {
        this->tangkiBahanBakar = tangkiBahanBakar;
    }

    // getter
    string getTipePerahu() {
        return this->tipePerahu;
    }

    int getDayaApung() {
        return this->dayaApung;
    }

    Mesin getMesin() {
        return this->mesin;
    }

    Transmisi getTransmisi() {
        return this->transmisi;
    }

    TangkiBahanBakar getTangkiBahanBakar() {
        return this->tangkiBahanBakar;
    }

    // destructor
    ~PerahuBermotor() {}
};
