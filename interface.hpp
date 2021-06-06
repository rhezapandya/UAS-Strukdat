#include "functions.hpp"

// General
void header(std::string judul) {
    std::cout << '+' << std::setw(40) << std::setfill('-') << '+' << std::endl;
    std::cout << judul << "\n";
    std::cout << '+' << std::setw(40) << std::setfill('-') << '+' << std::endl;
}
void tampilan_judul_submenu(std::string judul_submenu){
    std::cout << '=' << std::setw(40) << std::setfill('=') << '=' << "\n";
    std::cout << judul_submenu << "\n";
    std::cout << '=' << std::setw(40) << std::setfill('=') << '=' << "\n";
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
void error() {
    system("cls");
    std::cout << "Input Salah !!!\n\n";
    system("pause");
    system("cls");
}

// Menu 1 : Data Nasabah Bank
void tampilan_data_nasabah(list &head){
    tampilan_judul_submenu("        Data Nasabah Bank");
    std::cout << "Layout Data\nNomor | Kode Nasabah | Nama Nasabah | Jaminan | Pekerjaan | NPL\n\n";
    std::cout << "Data Nasabah Bank\n";
    traversal(head);
    std::cout << "\n";
}

// Menu 2 : Input Data Nasabah Bank Baru
void menu_level_1(){
    std::cout << "Masukkan Jaminan!\n";
    std::cout << "[L] -> Logam Mulia\n";
    std::cout << "[B] -> BPKB\n";
    std::cout << "[S] -> SHM\n";
    std::cout << "Jaminan : ";
}
void menu_level_2_left(){
    std::cout << "Masukkan Pekerjaan!\n";
    std::cout << "[W] : Wiraswasta\n";
    std::cout << "[S] : Swasta\n";
    std::cout << "Pekerjaan : "; 
}
void menu_level_3_left(){
    std::cout << "Masukkan NPL!\n";
    std::cout << "[B] : Baik\n";
    std::cout << "[b] : bermasalah)\n";
    std::cout << "NPL : ";
}
void menu_level_2_right(){
    std::cout << "Masukkan Pekerjaan\n";
    std::cout << "[P] : PNS\n";
    std::cout << "[S] : Swasta\n";
    std::cout << "Pekerjaan : ";
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
    
    
}

// Menu 5 : Program Developer
void anggota() {
    system("cls");
    std::cout << "Developed by : \n";
    std::cout << "1. Affan Rifqy Kurniadi - 140810200003\n";
    std::cout << "2. Rheza Pandya Andhikaputra - 140810200023\n";
    system("pause");
    system("cls");
}