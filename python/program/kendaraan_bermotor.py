# kendaraan_bermotor.py
from mesin import Mesin
from transmisi import Transmisi
from tangki_bahan_bakar import TangkiBahanBakar

class KendaraanBermotor:
    # constructor
    def __init__(self, merk="", model="", mesin=None, transmisi=None, tangki=None):
        self.merk = merk
        self.model = model
        self.mesin = mesin if mesin else Mesin()
        self.transmisi = transmisi if transmisi else Transmisi()
        self.tangki_bahan_bakar = tangki if tangki else TangkiBahanBakar()

    # Setter
    def set_merk(self, merk):
        self.merk = merk

    def set_model(self, model):
        self.model = model

    def set_mesin(self, mesin):
        self.mesin = mesin

    def set_transmisi(self, transmisi):
        self.transmisi = transmisi

    def set_tangki_bahan_bakar(self, tangki):
        self.tangki_bahan_bakar = tangki

    # Getter
    def get_merk(self):
        return self.merk

    def get_model(self):
        return self.model

    def get_mesin(self):
        return self.mesin

    def get_transmisi(self):
        return self.transmisi

    def get_tangki_bahan_bakar(self):
        return self.tangki_bahan_bakar
