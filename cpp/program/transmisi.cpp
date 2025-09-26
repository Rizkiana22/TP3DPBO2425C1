#pragma once
#include <iostream>

using namespace std;

class Transmisi {
    private:
        // atribut
        string jenisTransmisi;
    public:
        // constructor
        Transmisi(){}
        Transmisi(string jenisTransmisi) {
            this->jenisTransmisi = jenisTransmisi;
        }
        
        // setter
        void setJenisTransmisi(string jenisTransmisi) { 
            this->jenisTransmisi = jenisTransmisi; 
        }
        
        // getter
        string getJenisTransmisi() { 
            return this->jenisTransmisi; 
        }

        // destructor
        ~Transmisi(){
        }
};