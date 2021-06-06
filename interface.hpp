#include "functions.hpp"

// General
void header(std::string judul) {
    std::cout << '+' << std::setw(40) << std::setfill('-') << '+' << std::endl;
    std::cout << judul << "\n";
    std::cout << '+' << std::setw(40) << std::setfill('-') << '+' << std::endl;
}

void tampilan_judul_submenu(std::string judul_submenu){
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "\t\t " << judul_submenu << "\n";
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
}

void main_menu() {
    std::cout << "\nMain Menu\n";
    std::cout << "1. Data Nasabah Bank\n";
    std::cout << "2. Input Data Nasabah Bank Baru\n";
    std::cout << "3. Mekanisme Pengklasifikasian\n";
    std::cout << "4. Jalankan Pengklasifikasian\n";
    std::cout << "5. Program Developer\n";
    std::cout << "6. Keluar Program\n";
}

void loading()
{
    system("cls");
    char a = 177, b = 219;
    std::cout << "LOADING\t";
    for (int i = 0; i < 23; i++)
        std::cout << a;
        
    std::cout << "\r";
    std::cout << "\t";
    
    for (int i = 0; i < 23; i++) {
        std::cout << b;
        Sleep(20);
    }
    system("cls");
}

// Menu 1 : Data Nasabah Bank
void tampilan_data_nasabah(){
    tampilan_judul_submenu("Data Nasabah Bank");

}

// Menu 2 : Input Data Nasabah Bank Baru
void input_data_nasabah(){
    tampilan_judul_submenu("Input Data Nasabah Bank Baru");

}

// Menu 3 : Mekanisme Pengklasifikasian
void klasifikasi() {
    system("cls");
    std::cout << "Overview Pengklasifikasian\n\n";
    std::cout << "               JAMINAN                                 \n";
    std::cout << "     _____________|________________                    \n";
    std::cout << "    |             |                |                   \n";
    std::cout << "Jaminan LM   Jaminan BPKB    Jaminan SHM               \n";
    std::cout << "    |             |                |                   \n";
    std::cout << "K. Mikro      PEKERJAAN        PEKERJAAN               \n";
    std::cout << "         _________|                |__________         \n";
    std::cout << "        |         |                |          |        \n";
    std::cout << "   Pekerjaan  Pekerjaan        Pekerjaan  Pekerjaan    \n";
    std::cout << "     Swasta   Wiraswasta          PNS       Swasta     \n";
    std::cout << "        |         |                |          |        \n";
    std::cout << "    K. Sedang    NPL            K. Atas      NPL       \n";
    std::cout << "         _________|                           |        \n";
    std::cout << "        |         |                           |        \n";
    std::cout << "       NPL       NPL                         NPL       \n";
    std::cout << "      Baik    Bermasalah                    Baik       \n";
    std::cout << "        |         |                           |        \n";
    std::cout << "     K. Atas   K. Mikro                   K. Sedang    \n";
    std::cout << "                                          K. Atas      \n\n";
    system("pause");
    system("cls");
}

// Menu 4 : Jalankan Pengklasifikasian
void program_klasifikasi(){
    tampilan_judul_submenu("Program Klasifikasi");
    
}

// Menu 5 : Program Developer
void anggota() {
    std::cout << "\n\nDeveloped by : \n";
    std::cout << "1. Affan Rifqy Kurniadi - 140810200003\n";
    std::cout << "2. Rheza Pandya Andhikaputra - 140810200023\n";
}

void error() {
    system("cls");
    std::cout << "Input Salah !!!\n\n";
    system("pause");
    system("cls");
}