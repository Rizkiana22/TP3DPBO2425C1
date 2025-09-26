# perahu_bermotor.py
from kendaraan_bermotor import KendaraanBermotor
from mesin import Mesin
from transmisi import Transmisi
from tangki_bahan_bakar import TangkiBahanBakar

class PerahuBermotor(KendaraanBermotor):
    # constructor
    def __init__(self, merk="", model="", tipe_perahu="", daya_apung=0,
                 mesin=None, transmisi=None, tangki=None):
        super().__init__(merk, model, mesin, transmisi, tangki)
        self.tipe_perahu = tipe_perahu
        self.daya_apung = daya_apung
        self.mesin = mesin if mesin else Mesin()
        self.transmisi = transmisi if transmisi else Transmisi()
        self.tangki_bahan_bakar = tangki if tangki else TangkiBahanBakar()

    # Setter
    def set_tipe_perahu(self, tipe_perahu):
        self.tipe_perahu = tipe_perahu

    def set_daya_apung(self, daya_apung):
        self.daya_apung = daya_apung

    def set_mesin(self, mesin):
        self.mesin = mesin

    def set_transmisi(self, transmisi):
        self.transmisi = transmisi

    def set_tangki_bahan_bakar(self, tangki):
        self.tangki_bahan_bakar = tangki

    # Getter
    def get_tipe_perahu(self):
        return self.tipe_perahu

    def get_daya_apung(self):
        return self.daya_apung

    def get_mesin(self):
        return self.mesin

    def get_transmisi(self):
        return self.transmisi

    def get_tangki_bahan_bakar(self):
        return self.tangki_bahan_bakar
