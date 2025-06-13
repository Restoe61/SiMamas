#include "sistempelayanan.h"
#include <iomanip>

SistemPelayanan::SistemPelayanan() {
    bacaLastID();
    bacaKeluhanSaran();
    bacaRiwayat();
}

SistemPelayanan::~SistemPelayanan() {
    simpanRiwayat();
    simpanLastID();
}

    void bacaLastID();
    void simpanLastID();
    void bacaKeluhanSaran();
    void bacaRiwayat();
    void simpanRiwayat();
