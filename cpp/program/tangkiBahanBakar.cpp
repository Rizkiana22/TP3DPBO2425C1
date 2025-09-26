#pragma once
#include <iostream>

using namespace std;

class TangkiBahanBakar {
    private:
        // atribut
        int kapasitas;
        string jenisBahanBakar;
    public:
        // constructor
        TangkiBahanBakar(){}
        TangkiBahanBakar(int kapasitas, string jenisBahanBakar){
            this->kapasitas = kapasitas;
            this->jenisBahanBakar = jenisBahanBakar;
        }

        // setter
        void setKapasitas(int kapasitas) { 
            this->kapasitas = kapasitas; 
        }

        void setJenisBahanBakar(string jenisBahanBakar) { 
            this->jenisBahanBakar = jenisBahanBakar; 
        }

        // getter
        int getKapasitas() { 
            return this->kapasitas; 
        }

        string getJenisBahanBakar() { 
            return this->jenisBahanBakar; 
        }
};