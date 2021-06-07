#include "functions.hpp"

// General
void header(std::string judul) {
    std::cout << '+' << std::setw(40) << std::setfill('-') << '+' << std::endl;
    std::cout << judul << std::endl;
    std::cout << '+' << std::setw(40) << std::setfill('-') << '+' << std::endl;
}
void tampilan_judul_submenu(std::string judul_submenu, int batas){
    std::cout << '=' << std::setw(batas) << std::setfill('=') << '=' << std::endl;
    std::cout << judul_submenu << std::endl;
    std::cout << '=' << std::setw(batas) << std::setfill('=') << '=' << std::endl;
}
void main_menu() {
    std::cout << "\n\t       [ Main Menu ]\n\n";
    std::cout << "1. Data Nasabah Bank\n";
    std::cout << "2. Input Data Nasabah Bank Baru\n";
    std::cout << "3. Mekanisme Pengklasifikasian\n";
    std::cout << "4. Jalankan Pengklasifikasian\n";
    std::cout << "5. Program Developer\n";
    std::cout << "6. Keluar Program\n";
    std::cout << '+' << std::setw(40) << std::setfill('-') << '+' << std::endl;
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
void tampilan_data_nasabah(list &head) {
    tampilan_judul_submenu("\t\t\t\tDATA NASABAH BANK", 80);
    std::cout << '+' << std::setw(79) << std::setfill('-') << '+' << std::endl;
    std::cout << "| " << "No |";
    std::cout << " " << "Kode |";
    std::cout << " " << "\t\tNama\t       |";
    std::cout << " " << "  Jaminan   |";
    std::cout << " " << " Pekerjaan |";
    std::cout << " " << "\tNPL    |\n";
    std::cout << '+' << std::setw(79) << std::setfill('-') << '+' << std::endl;
    traversal_data_nasabah(head);
    std::cout << '+' << std::setw(79) << std::setfill('-') << '+' << std::endl;
}

// Menu 2 : Input Data Nasabah Bank Baru
void menu_level_1() {
    std::cout << "Masukkan Jaminan !\n";
    std::cout << "[L] -> Logam Mulia (LM)\n";
    std::cout << "[B] -> Bukti Kepemilikan Kendaraan Bermotor (BPKB)\n";
    std::cout << "[S] -> Sertifikat Hak Milik (SHM)\n";
    std::cout << "Jaminan : ";
}
void menu_level_2_full(){
    std::cout << "Masukkan Pekerjaan Anda!\n";
    std::cout << "[W] -> Wiraswasta\n";
    std::cout << "[S] -> Swasta\n";
    std::cout << "[P] -> PNS\n";
    std::cout << "[L] -> Lainnya\n";
    std::cout << "Pekerjaan : "; 
}
void menu_level_2_bpkb(){
    std::cout << "Masukkan Pekerjaan Anda!\n";
    std::cout << "[W] -> Wiraswasta\n";
    std::cout << "[S] -> Swasta\n";
    std::cout << "Pekerjaan : "; 
}
void menu_level_2_shm(){
    std::cout << "Masukkan Pekerjaan Anda!\n";
    std::cout << "[S] -> Swasta\n";
    std::cout << "[P] -> PNS\n";
    std::cout << "Pekerjaan : "; 
}
void menu_level_3_full(){
    std::cout << "Masukkan NPL(Non-Performing Loan) Anda!\n";
    std::cout << "[B] -> Baik\n";
    std::cout << "[b] -> Bermasalah\n";
    std::cout << "[T] -> Tidak Ada\n";
    std::cout << "NPL : ";
}
void menu_level_3_swasta(){
    std::cout << "Masukkan NPL (Prestasi) Anda!\n";
    std::cout << "[B] -> Baik\n";
    std::cout << "[b] -> Bermasalah\n";
    std::cout << "NPL : ";
}

// Menu 3 : Mekanisme Pengklasifikasian
void klasifikasi() {
    system("cls");
    tampilan_judul_submenu("\tMEKANISME PENGKLASIFIKASIAN", 40);
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
void tampilan_menu_klasifikasi(list &head, std::string kelas){
    loading();
    tampilan_judul_submenu("\t   KLASIFIKASI NASABAH", 40);
    std::cout << "Kode Nasabah      : " << head->kode << "\n";
    std::cout << "Nama Nasabah      : " << head->nama << "\n";
    std::cout << "Jaminan Nasabah   : " << head->jaminan << "\n";
    std::cout << "Pekerjaan Nasabah : " << head->pekerjaan << "\n";
    std::cout << "NPL Nasabah       : " << head->npl << "\n";
    std::cout << '=' << std::setw(40) << std::setfill('=') << '=' << std::endl;
    std::cout << "Anda Tergolong Nasabah Kelas " << kelas << " !\n\n";
    system("pause");
    system("cls");
}

// Menu 5 : Program Developer
void anggota() {
    system("cls");
    tampilan_judul_submenu("\t   PROGRAM DEVELOPER", 40);
    std::cout << "This Program is Developed by : \n";
    std::cout << "1. Affan Rifqy Kurniadi - 140810200003\n";
    std::cout << "2. Rheza Pandya Andhikaputra - 140810200023\n\n";
    system("pause");
    system("cls");
}