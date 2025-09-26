#pragma once
#include <iostream>

using namespace std;

class Ban {
    private:
        // atribut
        string merk;
        string ukuran;  // contoh: "205/55 R16 91V"
    public:
        // constructor
        Ban(){}
        Ban(string merk, string ukuran) {
            this->merk = merk;
            this->ukuran = ukuran;
        }
        
        // setter
        void setMerk(string merk) { 
            this->merk = merk; 
        }

        void setUkuran(string ukuran) { 
            this->ukuran = ukuran; 
        }

        // getter
        string getMerk() { 
            return this->merk; 
        }

        string getUkuran() { 
            return this->ukuran; 
        }
        
        // destructor
        ~Ban(){
        }
    };