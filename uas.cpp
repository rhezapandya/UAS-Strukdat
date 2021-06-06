#include "interface.hpp"

int main(){
    int opsi_main_menu;
    int banyak_data;
    char pil1, pil2, pil3;

    // Deklarasi Data Nasabah
    std::string kode;
    std::string nama;
    std::string jaminan;
    std::string pekerjaan;
    std::string npl;
    std::string key;
    pointer p_help, p_delete;
    list first = nullptr;

    // Data Nasabah Awal
    new_element(first, "N001", "Contoh 1", "Logam Mulia", "NULL", "NULL");
    insert_last(first, "N002", "Contoh 2", "BPKB", "Swasta", "NULL");
    insert_last(first, "N003", "Contoh 3", "BPKB", "Wiraswasta", "Baik");

    loading();
    do {
        header("  Program Klasifikasi Data Nasabah Bank  ");
        main_menu();
        std::cout << "Opsi : "; std::cin >> opsi_main_menu;
        switch(opsi_main_menu){
            case 1:
            loading();
            tampilan_data_nasabah(first);
            system("pause");
            system("cls");
            break;

            case 2:
            system("cls");
            tampilan_judul_submenu("Input Data Nasabah Bank Baru");
            std::cout << "Masukkan Banyak Data : "; std::cin >> banyak_data;
            system("cls");
            for (int i = 1; i <= banyak_data; i++) {
                do {
                    std::cout << "[ Data " << i << " ]" << std::endl;
                    std::cout << "Masukkan Kode : "; std::cin >> kode; 
                    std::cout << "Masukkan Nama : "; std::getline(std::cin >> std::ws, nama); 
                    menu_level_1();
                    std::cin >> pil1;
                    if (pil1 == 'L') {
                        jaminan = "Logam Mulia";
                        pekerjaan = "NULL";
                        npl = "NULL";
                        system("cls");
                        break;
                    }
                    else if (pil1 == 'B') {
                        jaminan = "BPKB";
                        menu_level_2_left();
                        std::cin >> pil2;
                        if (pil2 == 'S' || pil2 == 's') {
                            pekerjaan = "Swasta";
                            npl = "NULL";
                            system("cls");
                            break;
                        }
                        else if (pil2 == 'W') {
                            pekerjaan = "Wiraswasta";
                            menu_level_3_left();
                            std::cin >> pil3;
                            if (pil3 == 'B') {
                                npl = "Baik";
                                system("cls");
                                break;
                            }
                            else if (pil3 == 'b') {
                                npl = "Bermasalah";
                                system("cls");
                                break;
                            }
                            else error();
                        }
                        else error(); 
                    }
                    else if (pil1 == 'S') {
                        jaminan = "SHM";
                        menu_level_2_right();
                        std::cin >> pil2;
                        if (pil2 == 'P') {
                            pekerjaan = "PNS";
                            npl = "-";
                            system("cls");
                            break;
                        }
                        else if (pil2 == 'S') {
                            pekerjaan = "Swasta";
                            npl = "Baik";
                            system("cls");
                            break;
                        }
                        else error();
                    }
                    else error();
                } while (pil1 != 'L' || (pil1 != 'B' && pil2 == 'W' && pil3 == 'B')
                        || (pil1 != 'B' && pil2 == 'W' && pil3 == 'b') || (pil1 != 'B' && pil2 != 'S')
                        || (pil1 != 'S' && pil2 != 'P') || (pil1 != 'S' && pil2 != 'S'));
                insert_last(first, kode, nama, jaminan, pekerjaan, npl); 
            }
            loading();
            break;

            case 3:
            loading();
            klasifikasi();
            break;

            case 4:
            
            break;
            
            case 5:
            loading();
            anggota();
            break;

            case 6:
            system("cls");
            exit(0);
            break;

            default:
            error();
            break;
        }
    } while (opsi_main_menu != 6);
}