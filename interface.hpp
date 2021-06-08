#include "functions.hpp"

// General / Umum
void header(std::string judul) {
    std::cout << '+' << std::setw(40) << std::setfill('-') << '+' << std::endl;
    std::cout << judul << std::endl;
    std::cout << '+' << std::setw(40) << std::setfill('-') << '+' << std::endl;
}

void tampilan_judul_submenu(std::string judul_submenu, int batas) {
    std::cout << '=' << std::setw(batas) << std::setfill('=') << '=' << std::endl;
    std::cout << judul_submenu << std::endl;
    std::cout << '=' << std::setw(batas) << std::setfill('=') << '=' << std::endl;
}

void main_menu() {
    std::cout << "\n\t       [ Main Menu ]\n\n";
    std::cout << "1. Data Nasabah Bank\n";
    std::cout << "2. Input Data Nasabah Bank Baru\n";
    std::cout << "3. Hapus Data Nasabah Bank\n";
    std::cout << "4. Mekanisme Pengklasifikasian\n";
    std::cout << "5. Jalankan Pengklasifikasian\n";
    std::cout << "6. Program Developer\n";
    std::cout << "7. Keluar Program\n";
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

void data_notfound(){
    system("cls");
    std::cout << "Data Nasabah Tidak Ditemukan !\n\n";
    system("pause");
    system("cls");
}

// Menu 1 : Data Nasabah Bank
void tampilan_data_nasabah(list &head, pointer &p_delete, std::string kode) {
    tampilan_judul_submenu("\t\t\t\tDATA NASABAH BANK", 79);
    std::cout << '+' << std::setw(79) << std::setfill('-') << '+' << std::endl;
    std::cout << "| No |" << " Kode |" << " \t\tNama\t       |" << "   Jaminan   |" << "  Pekerjaan |" << " \tNPL    |\n";
    std::cout << '+' << std::setw(79) << std::setfill('-') << '+' << std::endl;
    traversal_data_nasabah(head);
    std::cout << '+' << std::setw(79) << std::setfill('-') << '+' << std::endl;
    std::cout << '=' << std::setw(79) << std::setfill('=') << '=' << std::endl;
    std::cout << "\nLegends\nNPL  : Prestasi\nLM   : Logam Mulia\n";
    std::cout << "BPKB : Bukti Kepemilikan Kendaraan Bermotor\nSHM  : Sertifikat Hak Milik\n\n";
    system("pause");
    system("cls");
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
    std::cout << "Masukkan NPL (Prestasi) Anda!\n";
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
void data_berhasil_ditambahkan(){
    loading();
    std::cout << "Data Berhasil Ditambahkan\n";
    std::cout << "Jika Input Salah, Maka Data akan Menjadi : '-'\n\n";
    system("pause");
    system("cls");
}

// Menu 3 : Hapus Data Nasabah Bank
void tampilan_hapus_data_nasabah_individu(list &head){
    loading();
    tampilan_judul_submenu("\t   DATA NASABAH", 40);
    std::cout << "Kode Nasabah      : " << head->kode << "\n";
    std::cout << "Nama Nasabah      : " << head->nama << "\n";
    std::cout << "Jaminan Nasabah   : " << head->jaminan << "\n";
    std::cout << "Pekerjaan Nasabah : " << head->pekerjaan << "\n";
    std::cout << "NPL Nasabah       : " << head->npl << "\n";
    std::cout << '=' << std::setw(40) << std::setfill('=') << '=' << std::endl;
}

// Menu 4 : Mekanisme Pengklasifikasian
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
    std::cout << "Ketentuan Pengklasifikasian\n\n";
    std::cout << "1. Jika jaminannya LOGAM MULIA maka akan mendapatkan tingkat kelas kelayakan mikro.\n";
    std::cout << "2. Namun jika jaminan BPKB dan SERTIFIKAT HM tidak bisa menentukan tingkat kelas kelayakan,\n";
    std::cout << "   karena belum final keputusannya maka digunakan cabang kedua yang lebih tinggi nilai gainnya\n";
    std::cout << "   yaitu cabang pekerjaan dimana jaminan BPKB dengan pekerjaan Swasta mendapatkan tingkat\n";
    std::cout << "   kelas kelayakan sedang.\n";
    std::cout << "3. Sedangkan jaminan BPKB dengan pekerjaan Wiraswasta belum mendapatkan keputusan final,\n";
    std::cout << "   maka digunakan cabang ketiga yaitu cabang Prestasi dimana jaminan BPKB dengan pekerjaan\n";
    std::cout << "   Wiraswasta dan Prestasi baik mendapatkan tingkat kelayakan kelas atas.\n";
    std::cout << "4. Sedangkan jaminan BPKB dengan pekerjaan Wiraswasta dan Prestasi bermasalah mendapatkan\n";
    std::cout << "   tingkat kelayakan kelas mikro.\n";
    std::cout << "5. Jika jaminan SERTIFIKAT HM dengan pekerjaan PNS mendapatkan tingkat kelas kelayakan atas.\n";
    std::cout << "6. Jika jaminan SERTIFIKAT HM dengan pekerjaan Swasta belum mendapatkan keputusan final,\n";
    std::cout << "   maka digunakan cabang ketiga yaitu cabang Prestasi dimana jaminan SERTIFIKAT HM dengan\n";
    std::cout << "   pekerjaan Swasta dan Prestasi baik mendapatkan tingkat kelayakan kelas atas dan sedang.\n\n";
    system("pause");
    system("cls");
}

// Menu 5 : Jalankan Pengklasifikasian
void tampilan_data_klasifikasi(list &head) {
    tampilan_judul_submenu("\t   KLASIFIKASI NASABAH", 39);
    std::cout << '+' << std::setw(39) << std::setfill('-') << '+' << std::endl;
    std::cout << "| No |" << " Kode |" << " \t\tNama\t       |\n";
    std::cout << '+' << std::setw(39) << std::setfill('-') << '+' << std::endl;
    traversal_data_klasifikasi(head);
    std::cout << '+' << std::setw(39) << std::setfill('-') << '+' << std::endl;
    std::cout << '=' << std::setw(39) << std::setfill('=') << '=' << std::endl;
    std::cout << "1. Klasifikasi Data\n2. Kembali\n\nOpsi : ";
}

void tampilan_menu_klasifikasi(list &head, std::string kelas) {
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

// Menu 6 : Program Developer
void anggota() {
    system("cls");
    tampilan_judul_submenu("\t    PROGRAM DEVELOPER", 40);
    std::cout << "This Program is Developed by : \n";
    std::cout << "1. Affan Rifqy Kurniadi - 140810200003\n";
    std::cout << "2. Rheza Pandya Andhikaputra - 140810200023\n\n";
    system("pause");
    system("cls");
}