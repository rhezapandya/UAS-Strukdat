#include "interface.hpp"

int main(){
    int opsi_main_menu, banyak_data, pilihan_klasifikasi, pil_menu_input, pil_menu_hapus;
    char pil1, pil2, pil3;


    // Deklarasi Data Nasabah
    std::string kode;
    std::string nama;
    std::string jaminan;
    std::string pekerjaan;
    std::string npl;
    pointer p_help, p_delete;
    list first = nullptr;

    // Data Nasabah Awal
    new_element(first, "N001", "Rafathar", "LM", "PNS", "Baik");
    insert_last(first, "N002", "Gempi", "BPKB", "Swasta", "-");
    insert_last(first, "N003", "Affan", "BPKB", "Wiraswasta", "Baik");

    loading();
    do {
        header("  PROGRAM KLASIFIKASI DATA NASABAH BANK  ");
        main_menu();
        std::cout << "Opsi : "; std::cin >> opsi_main_menu;
        switch (opsi_main_menu) {
            case 1:
            loading();
            tampilan_data_nasabah(first, p_delete, kode);
            break;

            case 2:
            loading();
            do {
                tampilan_judul_submenu("\tINPUT DATA NASABAH BANK BARU", 40);
                std::cout << "1. Input Data Baru\n2. Kembali\n\nOpsi : ";
                std::cin >> pil_menu_input;
                system("cls");
                switch(pil_menu_input){
                    case 1 :
                        tampilan_judul_submenu("\tINPUT DATA NASABAH BANK BARU", 40);
                        std::cout << "Masukkan Banyak Data : "; std::cin >> banyak_data;
                        std::cout << "\n";
                        for (int i = 1; i <= banyak_data; i++) {
                            system("cls");
                            tampilan_judul_submenu("\tINPUT DATA NASABAH BANK BARU", 40);
                            std::cout << "\t\t [ Data " << i << " ]\n\n";
                            std::cout << "Masukkan Kode : "; std::cin >> kode; 
                            std::cout << "Masukkan Nama : "; std::getline(std::cin >> std::ws, nama);
                            jaminan = "-";
                            pekerjaan = "-";
                            npl = "-";
                            do {
                                std::cout << '\n';
                                menu_level_1();
                                std::cin >> pil1;
                                if (pil1 == 'L') {
                                    jaminan = "LM";
                                    std::cout << '\n';
                                    menu_level_2_full();
                                    std::cin >> pil2;
                                    if (pil2 == 'W') {
                                        pekerjaan = "Wiraswasta";
                                        std::cout << '\n';
                                        menu_level_3_full();
                                        std::cin >> pil3;
                                        if (pil3 == 'B') {
                                            npl = "Baik";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else if (pil3 == 'b') {
                                            npl = "Bermasalah";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else if (pil3 == 'T') {
                                            npl = "-";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else error();
                                        break;
                                    }
                                    else if (pil2 == 'S') {
                                        pekerjaan = "Swasta";
                                        std::cout << '\n';
                                        menu_level_3_full();
                                        std::cin >> pil3;
                                        if (pil3 == 'B') {
                                            npl = "Baik";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else if (pil3 == 'b') {
                                            npl = "Bermasalah";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else if (pil3 == 'T') {
                                            npl = "-";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else error();
                                        break;
                                    }
                                    else if (pil2 == 'P') {
                                        pekerjaan = "PNS";
                                        std::cout << '\n';
                                        menu_level_3_full();
                                        std::cin >> pil3;
                                        if (pil3 == 'B') {
                                            npl = "Baik";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else if (pil3 == 'b') {
                                            npl = "Bermasalah";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else if (pil3 == 'T') {
                                            npl = "-";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else error();
                                        break;
                                    }
                                    else if (pil2 == 'L') {
                                        pekerjaan = "Lainnya";
                                        std::cout << '\n';
                                        menu_level_3_full();
                                        std::cin >> pil3;
                                        if (pil3 == 'B') {
                                            npl = "Baik";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else if (pil3 == 'b') {
                                            npl = "Bermasalah";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else if (pil3 == 'T') {
                                            npl = "-";
                                            std::cout << '\n';
                                            break;
                                        }
                                        else error();
                                        break;
                                    }
                                    else error();
                                    break;
                                }
                                else if (pil1 == 'B') {
                                jaminan = "BPKB";
                                std::cout << '\n';
                                menu_level_2_bpkb();
                                std::cin >> pil2;
                                if (pil2 == 'W') {
                                    pekerjaan = "Wiraswasta"; 
                                    std::cout << '\n';
                                    menu_level_3_swasta();
                                    std::cin >> pil3;
                                    if (pil3 == 'B') {
                                        npl = "Baik";
                                        std::cout << '\n';
                                        break;
                                    }
                                    else if (pil3 == 'b') {
                                        npl = "Bermasalah";
                                        std::cout << '\n';
                                        break;
                                    }
                                    else error();
                                    break;
                                }
                                else if (pil2 == 'S') {
                                    pekerjaan = "Swasta";
                                    std::cout << '\n';
                                    menu_level_3_full();
                                    std::cin >> pil3;
                                    if (pil3 == 'B') {
                                        npl = "Baik";
                                        std::cout << '\n';
                                        break;
                                    }
                                    else if (pil3 == 'b') {
                                        npl = "Bermasalah";
                                        std::cout << '\n';
                                        break;
                                    }
                                    else if (pil3 == 'T') {
                                        npl = "-";
                                        std::cout << '\n';
                                        break;
                                    }
                                    else error();
                                    break;
                                }
                                else error();
                                break;
                            }
                            else if (pil1 == 'S') {
                                jaminan = "SHM";
                                std::cout << '\n';
                                menu_level_2_shm();
                                std::cin >> pil2;
                                if (pil2 == 'P') {
                                    pekerjaan = "PNS";
                                    std::cout << '\n';
                                    menu_level_3_full();
                                    std::cin >> pil3;
                                    if (pil3 == 'B') {
                                        npl = "Baik";
                                        std::cout << '\n';
                                        break;
                                    }
                                    else if (pil3 == 'b') {
                                        npl = "Bermasalah";
                                        std::cout << '\n';
                                        break;
                                    }
                                    else if (pil3 == 'T') {
                                        npl = "-";
                                        std::cout << '\n';
                                        break;
                                    }
                                    else error();
                                    break;
                                }
                                else if (pil2 == 'S') {
                                    pekerjaan = "Swasta";
                                    std::cout << '\n';
                                    std::cout << "NPL Anda Tergolong Baik!\n\n";
                                    npl = "Baik";
                                    system("pause");
                                    break;
                                }
                                else error();
                                break;
                                }
                                else error();
                            } while (pil1 != 'L' || pil1 != 'B' || pil1 != 'S');
                            insert_last(first, kode, nama, jaminan, pekerjaan, npl); 
                        }
                        data_berhasil_ditambahkan();
                        break;
                    
                    case 2 :
                        system("cls");
                        break;
                    
                    default :
                        error();
                        break;
                }
            } while (pil_menu_input != 2);
            break;

            case 3:
            int pil_menu;
            loading();
            do {
                tampilan_judul_submenu("\tHAPUS DATA NASABAH BANK", 40);
                std::cout << "1. Hapus Data\n2. Kembali\n\nOpsi : ";
                std::cin >> pil_menu_hapus;
                system("cls");
                switch(pil_menu_hapus){
                    case 1 :
                        tampilan_judul_submenu("\tHAPUS DATA NASABAH BANK", 40);
                        std::cout << "Masukkan Kode Nasabah : "; std::cin >> kode;
                        search(first, p_help, kode);
                        if (p_help != nullptr) {
                            tampilan_hapus_data_nasabah_individu(p_help);
                            std::cout << "\n1. Hapus Data ini\n2. Kembali\n\nOpsi : "; std::cin >> pil_menu;
                            system("cls");
                            switch(pil_menu){
                                case 1:
                                    loading();
                                    delete_by_key(first, p_delete, kode);
                                    break;

                                case 2:
                                    system("cls");
                                    break;

                                default:
                                    error();
                                    break;
                            }
                            break;
                        }
                        else {
                            data_notfound();
                        }
                        break;

                    case 2 :
                        system("cls");
                        break;

                    default :
                        error();
                        break;
                }
            } while (pil_menu_hapus != 2);
            break;
            
            case 4:
            loading();
            klasifikasi();
            break;

            case 5:
            loading();
            do {
                tampilan_data_klasifikasi(first);
                std::cin >> pilihan_klasifikasi;
                switch (pilihan_klasifikasi) {
                    case 1:
                    std::cout << '=' << std::setw(39) << std::setfill('=') << '=' << std::endl;
                    std::cout << "Masukkan Kode Nasabah : "; std::cin >> kode;
                    search(first, p_help, kode);
                    if (p_help != nullptr) {
                        if (p_help->jaminan == "LM") {
                            tampilan_menu_klasifikasi(p_help, "Mikro");
                        }
                        else if (p_help->jaminan == "BPKB") {
                            if (p_help->pekerjaan == "Swasta") {
                                tampilan_menu_klasifikasi(p_help, "Sedang");
                            }
                            else if (p_help->pekerjaan == "Wiraswasta") {
                                if (p_help->npl == "Baik") {
                                    tampilan_menu_klasifikasi(p_help, "Atas");
                                }
                                else if (p_help->npl == "Bermasalah") {
                                    tampilan_menu_klasifikasi(p_help, "Mikro");
                                }
                            }
                        }
                        else if (p_help->jaminan == "SHM") {
                            if (p_help->pekerjaan == "PNS") {
                                tampilan_menu_klasifikasi(p_help, "Sedang");
                            }
                            else if (p_help->pekerjaan == "Swasta") {
                                tampilan_menu_klasifikasi(p_help, "Sedang atau Kelas Atas");
                            }
                        }
                    }
                    else {
                        data_notfound();
                    }
                    break;

                    case 2:
                    system("cls");
                    break;

                    default:
                    error();
                }
            } while (pilihan_klasifikasi != 2);
            break;
            
            case 6:
            loading();
            anggota();
            break;

            case 7:
            system("cls");
            exit(0);
            break;

            default:
            error();
            break;
        }
    } while (opsi_main_menu != 7);
}