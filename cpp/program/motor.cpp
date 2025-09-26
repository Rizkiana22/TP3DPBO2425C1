#pragma once
#include "kendaraanBermotor.cpp"
#include "ban.cpp"


class Motor : public KendaraanBermotor {
private:
    // atribut
    string jenisMotor;
    Mesin mesin;
    Transmisi transmisi;
    TangkiBahanBakar tangkiBahanBakar;
    vector<Ban> daftarBan;

public:
    // Constructor default
    Motor() {}

    // Constructor parameter
    Motor(string merk, string model, string jenisMotor,
          vector<Ban> daftarBan, Mesin mesin,
          Transmisi transmisi, TangkiBahanBakar tangkiBahanBakar)
        : KendaraanBermotor(merk, model, mesin, transmisi, tangkiBahanBakar) {
        this->jenisMotor = jenisMotor;
        this->daftarBan = daftarBan;
        this->mesin = mesin;
        this->transmisi = transmisi;
        this->tangkiBahanBakar = tangkiBahanBakar;
    }

    // Setter
    void setJenisMotor(string jenisMotor) {
        this->jenisMotor = jenisMotor;
    }

    void setDaftarBan(vector<Ban> daftarBan) {
        this->daftarBan = daftarBan;
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

    // Getter
    string getJenisMotor() {
        return this->jenisMotor;
    }

    vector<Ban> getDaftarBan() {
        return this->daftarBan;
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

    // Method tambahan
    void tambahBan(Ban b) {
        daftarBan.push_back(b);
    }

    // Destructor
    ~Motor() {}
};
