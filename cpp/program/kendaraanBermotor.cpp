#pragma once
#include <iostream>
#include <vector>
#include "mesin.cpp"
#include "tangkiBahanBakar.cpp"
#include "transmisi.cpp"


using namespace std;

class KendaraanBermotor {
    private:
        // atribut
        string merk;
        string model;
        Transmisi transmisi;
        TangkiBahanBakar tangkiBahanBakar;
        Mesin mesin;

    public:
        // constructor
        KendaraanBermotor() {}
        KendaraanBermotor(string merk, string model, Mesin mesin, Transmisi transmisi, TangkiBahanBakar tangkiBahanBakar) {
            this->merk = merk;
            this->model = model;
            this->mesin = mesin;
            this->transmisi = transmisi;
            this->tangkiBahanBakar = tangkiBahanBakar;
        }

        // setter
        void setMerk(string merk) { 
            this->merk = merk; 
        }

        void setModel(string model) { 
            this->model = model; 
        }

        void setTransmisi(Transmisi transmisi) { 
            this->transmisi = transmisi; 
        }

        void setTangkiBahanBakar(TangkiBahanBakar tangkiBahanBakar) { 
            this->tangkiBahanBakar = tangkiBahanBakar; 
        }

        void setMesin(Mesin mesin){
            this->mesin = mesin;
        }

        // getter
        string getMerk() { 
            return this->merk; 
        }

        string getModel() { 
            return this->model; 
        }

        Transmisi getTransmisi() { 
            return this->transmisi; 
        }

        TangkiBahanBakar getTangkiBahanBakar() { 
            return this->tangkiBahanBakar; 
        }

        // destructor
        ~KendaraanBermotor() {}
};