#pragma once
#include <iostream>
#include <vector>
#include "kendaraanBermotor.cpp"
#include "ban.cpp"

using namespace std;

class Mobil : public KendaraanBermotor {
private:
    // atribut
    string tipeBodi;
    int jumlahPintu;
    vector<Ban> daftarBan;
    Mesin mesin;
    Transmisi transmisi;
    TangkiBahanBakar tangkiBahanBakar;

public:
    // Constructor default
    Mobil() {}

    // Constructor parameter
    Mobil(string merk, string model, string tipeBodi, int jumlahPintu,
          vector<Ban> daftarBan, Mesin mesin,
          Transmisi transmisi, TangkiBahanBakar tangkiBahanBakar)
        : KendaraanBermotor(merk, model, mesin, transmisi, tangkiBahanBakar) 
    {
        this->tipeBodi = tipeBodi;
        this->jumlahPintu = jumlahPintu;
        this->daftarBan = daftarBan;
        this->mesin = mesin;
        this->transmisi = transmisi;
        this->tangkiBahanBakar = tangkiBahanBakar;
    }

    // Setter
    void setTipeBodi(string tipeBodi) { 
        this->tipeBodi = tipeBodi; 
    }

    void setJumlahPintu(int jumlahPintu) { 
        this->jumlahPintu = jumlahPintu; 
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
    string getTipeBodi() { 
        return this->tipeBodi; 
    }
    
    int getJumlahPintu() { 
        return this->jumlahPintu; 
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
    ~Mobil() {}
};
