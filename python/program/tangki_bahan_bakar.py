# tangki_bahan_bakar.py
class TangkiBahanBakar:
    # constructor
    def __init__(self, kapasitas=0, jenis_bahan_bakar=""):
        self.kapasitas = kapasitas
        self.jenis_bahan_bakar = jenis_bahan_bakar

    # Setter
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    def set_jenis_bahan_bakar(self, jenis_bahan_bakar):
        self.jenis_bahan_bakar = jenis_bahan_bakar

    # Getter
    def get_kapasitas(self):
        return self.kapasitas

    def get_jenis_bahan_bakar(self):
        return self.jenis_bahan_bakar
