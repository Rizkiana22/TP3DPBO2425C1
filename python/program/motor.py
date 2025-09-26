# motor.py
from kendaraan_bermotor import KendaraanBermotor
from mesin import Mesin
from transmisi import Transmisi
from tangki_bahan_bakar import TangkiBahanBakar
from ban import Ban

class Motor(KendaraanBermotor):
    # constructor
    def __init__(self, merk="", model="", jenis_motor="", daftar_ban=None,
                 mesin=None, transmisi=None, tangki=None):
        super().__init__(merk, model, mesin, transmisi, tangki)
        self.jenis_motor = jenis_motor
        self.daftar_ban = daftar_ban if daftar_ban is not None else []
        self.mesin = mesin if mesin else Mesin()
        self.transmisi = transmisi if transmisi else Transmisi()
        self.tangki_bahan_bakar = tangki if tangki else TangkiBahanBakar()

    # Setter
    def set_jenis_motor(self, jenis_motor):
        self.jenis_motor = jenis_motor

    def set_daftar_ban(self, daftar_ban):
        self.daftar_ban = daftar_ban

    def set_mesin(self, mesin):
        self.mesin = mesin

    def set_transmisi(self, transmisi):
        self.transmisi = transmisi

    def set_tangki_bahan_bakar(self, tangki):
        self.tangki_bahan_bakar = tangki

    # Getter
    def get_jenis_motor(self):
        return self.jenis_motor

    def get_daftar_ban(self):
        return self.daftar_ban

    def get_mesin(self):
        return self.mesin

    def get_transmisi(self):
        return self.transmisi

    def get_tangki_bahan_bakar(self):
        return self.tangki_bahan_bakar

    # Method tambahan
    def tambah_ban(self, ban):
        self.daftar_ban.append(ban)
