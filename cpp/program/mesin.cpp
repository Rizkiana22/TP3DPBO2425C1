#pragma once
#include <iostream>

using namespace std;

class Mesin {
    private:
        // atribut
        string jenisMesin;
        int kapasitasMesin; // satuan cc
    public:
        // constructor
        Mesin() {}
        Mesin(string jenisMesin, int kapasitasMesin){
            this->jenisMesin = jenisMesin;
            this->kapasitasMesin = kapasitasMesin;
        }

        // setter
        void setJenisMesin(string jenisMesin) { 
            this->jenisMesin = jenisMesin; 
        }
        void setKapasitasMesin(int kapasitasMesin) { 
            this->kapasitasMesin = kapasitasMesin; 
        }
        
        // getter
        string getJenisMesin() { 
            return this->jenisMesin; 
        }

        int getKapasitasMesin() { 
            return this->kapasitasMesin; 
        }

        // destructor
        ~Mesin(){
        }
};