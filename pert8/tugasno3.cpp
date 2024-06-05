#include <iostream>
#include <fstream>

int main() {
    
    std::string filename = "diagram_alur.puml";

    
    std::ofstream file(filename);

    if (file.is_open()) {
        
        file << "@startuml\n";
        file << "title Alur Proyek: Layanan Penyewaan Peralatan Camping dan Outdoor\n\n";
        file << "start\n";
        file << ":Identifying Business Goal;\n";
        file << ":Assessing Situation;\n";
        file << ":Producing Project Plan;\n";
        file << ":Riset Pasar dan Perencanaan;\n";
        file << ":Persiapan Inventaris dan Lokasi;\n";
        file << ":Pengembangan Platform Digital;\n";
        file << ":Strategi Pemasaran dan Branding;\n";
        file << ":Rekrutmen dan Pelatihan Tim;\n";
        file << ":Peluncuran dan Promosi;\n";
        file << ":Operasional dan Manajemen Berkelanjutan;\n";
        file << "stop\n\n";
        file << "@enduml\n";

        
        file.close();

        std::cout << "File " << filename << " berhasil dibuat." << std::endl;
    } else {
        std::cerr << "Tidak dapat membuka file " << filename << std::endl;
    }

    return 0;
}