# mesin.py
class Mesin:
    # constructor
    def __init__(self, jenis_mesin="", kapasitas_mesin=0):
        self.jenis_mesin = jenis_mesin
        self.kapasitas_mesin = kapasitas_mesin

    # Setter
    def set_jenis_mesin(self, jenis_mesin):
        self.jenis_mesin = jenis_mesin

    def set_kapasitas_mesin(self, kapasitas_mesin):
        self.kapasitas_mesin = kapasitas_mesin

    # Getter
    def get_jenis_mesin(self):
        return self.jenis_mesin

    def get_kapasitas_mesin(self):
        return self.kapasitas_mesin
