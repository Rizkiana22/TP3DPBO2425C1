# transmisi.py
class Transmisi:
    # constructor
    def __init__(self, jenis_transmisi=""):
        self.jenis_transmisi = jenis_transmisi

    # Setter
    def set_jenis_transmisi(self, jenis_transmisi):
        self.jenis_transmisi = jenis_transmisi

    # Getter
    def get_jenis_transmisi(self):
        return self.jenis_transmisi
