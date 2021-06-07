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
    pointer p_help, p_delete;
    list first = nullptr;

    // Data Nasabah Awal
    new_element(first, "N001", "Contoh 1", "LM", "PNS", "Baik");
    insert_last(first, "N002", "Contoh 2", "BPKB", "Swasta", "-");
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
            loading();
            tampilan_judul_submenu("\tInput Data Nasabah Bank Baru", 40);
            std::cout << "Masukkan Banyak Data : "; std::cin >> banyak_data;
            std::cout << "\n";
            for (int i = 1; i <= banyak_data; i++) {
                std::cout << "\t\t [ Data " << i << " ]\n";
                std::cout << "Masukkan Kode : "; std::cin >> kode; 
                std::cout << "Masukkan Nama : "; std::getline(std::cin >> std::ws, nama);
                std::cout << "\n";
                do {
                    menu_level_1();
                    std::cin >> pil1;
                    if (pil1 == 'L') {
                        jaminan = "LM";
                        std::cout << "\n";
                        menu_level_2_full();
                        std::cin >> pil2;
                        if (pil2 == 'W') {
                            pekerjaan = "Wiraswasta";
                            std::cout << "\n";
                            menu_level_3_full();
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
                            else if (pil3 == 'T') {
                                npl = "-";
                                system("cls");
                                break;
                            }
                            else error();
                            break;
                        }
                        else if (pil2 == 'S') {
                            pekerjaan = "Swasta";
                            std::cout << "\n";
                            menu_level_3_full();
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
                            else if (pil3 == 'T') {
                                npl = "-";
                                system("cls");
                                break;
                            }
                            else error();
                            break;
                        }
                        else if (pil2 == 'P') {
                            pekerjaan = "PNS";
                            std::cout << "\n";
                            menu_level_3_full();
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
                            else if (pil3 == 'T') {
                                npl = "-";
                                system("cls");
                                break;
                            }
                            else error();
                            break;
                        }
                        else if (pil2 == 'L') {
                            pekerjaan = "Lainnya";
                            std::cout << "\n";
                            menu_level_3_full();
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
                            else if (pil3 == 'T') {
                                npl = "-";
                                system("cls");
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
                        std::cout << "\n";
                        menu_level_2_bpkb();
                        std::cin >> pil2;
                        if (pil2 == 'W') {
                            pekerjaan = "Wiraswasta"; 
                            std::cout << "\n";
                            menu_level_3_swasta();
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
                            break;
                        }
                        else if (pil2 == 'S') {
                            pekerjaan = "Swasta";
                            std::cout << "\n";
                            menu_level_3_full();
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
                            else if (pil3 == 'T') {
                                npl = "-";
                                system("cls");
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
                        std::cout << "\n";
                        menu_level_2_shm();
                        std::cin >> pil2;
                        if (pil2 == 'P') {
                            pekerjaan = "PNS";
                            std::cout << "\n";
                            menu_level_3_full();
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
                            else if (pil3 == 'T') {
                                npl = "-";
                                system("cls");
                                break;
                            }
                            else error();
                            break;
                        }
                        else if (pil2 == 'S') {
                            pekerjaan = "Swasta";
                            std::cout << "\n";
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
            loading();
            break;

            case 3:
            loading();
            klasifikasi();
            break;

            case 4:
            system("cls");
            tampilan_judul_submenu("\tKlasifikasi Nasabah", 40);
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
                system("cls");
                std::cout << "Data Nasabah Tidak Ditemukan !\n\n";
                system("pause");
                system("cls");
            }
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