# ban.py
class Ban:
    # constructor
    def __init__(self, merk="", ukuran=""):
        self.merk = merk
        self.ukuran = ukuran

    # Setter
    def set_merk(self, merk):
        self.merk = merk

    def set_ukuran(self, ukuran):
        self.ukuran = ukuran

    # Getter
    def get_merk(self):
        return self.merk

    def get_ukuran(self):
        return self.ukuran
