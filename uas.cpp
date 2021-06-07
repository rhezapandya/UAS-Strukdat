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
    new_element(first, "N001", "Contoh 1", "Logam Mulia", "PNS", "Baik");
    insert_last(first, "N002", "Contoh 2", "BPKB", "Swasta", "Bermasalah");
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
            tampilan_judul_submenu("Input Data Nasabah Bank Baru");
            std::cout << "Masukkan Banyak Data : "; std::cin >> banyak_data;
            for (int i = 1; i <= banyak_data; i++) {
                system("cls");
                std::cout << "\t\t [ Data " << i << " ]\n" << std::endl;
                std::cout << "Masukkan Kode : "; std::cin >> kode; 
                std::cout << "Masukkan Nama : "; std::getline(std::cin >> std::ws, nama);
                do {
                    system("cls"); 
                    menu_level_1();
                    std::cin >> pil1;
                    if (pil1 == 'L') {
                        jaminan = "Logam Mulia";
                        do {
                            system("cls");
                            menu_level_1_pekerjaan();
                            std::cin >> pil2;
                            if (pil2 == 'P') {
                                pekerjaan = "PNS";
                                do {
                                    system("cls");
                                    menu_level_3_left();
                                    std::cin >> pil3;
                                    if (pil3 == 'B') {
                                        npl = "Baik"; 
                                        break;
                                    }
                                    else if (pil3 == 'b') {
                                        npl = "Bermasalah";
                                        break;
                                    }
                                    else error();
                                } while (pil3 != 'B' || pil3 != 'b');
                                break;
                            }
                            else if (pil2 == 'W') {
                                do {
                                    system("cls");
                                    menu_level_3_left();
                                    std::cin >> pil3;
                                    if (pil3 == 'B') {
                                        npl = "Baik"; 
                                        break;
                                    }
                                    else if (pil3 == 'b') {
                                        npl = "Bermasalah";
                                        break;
                                    }
                                    else error();
                                } while (pil3 != 'B' || pil3 != 'b');
                                break;
                            }
                            else if (pil2 == 'S') {
                                do {
                                    system("cls");
                                    menu_level_3_left();
                                    std::cin >> pil3;
                                    if (pil3 == 'B') {
                                        npl = "Baik"; 
                                        break;
                                    }
                                    else if (pil3 == 'b') {
                                        npl = "Bermasalah";
                                        break;
                                    }
                                    else error();
                                } while (pil3 != 'B' || pil3 != 'b');
                                break;
                            }
                            else error();
                        } while (pil1 != 'P' || pil1 != 'W' || pil1 != 'S');
                        break;
                    }
                    else if (pil1 == 'B') {
                        jaminan = "BPKB";
                        do {
                            system("cls"); 
                            menu_level_2_left();
                            std::cin >> pil2;
                            if (pil2 == 'S') {
                                pekerjaan = "Swasta";
                                do {
                                    system("cls");
                                    menu_level_3_left();
                                    std::cin >> pil3;
                                    if (pil3 == 'B') {
                                        npl = "Baik"; 
                                        break;
                                    }
                                    else if (pil3 == 'b') {
                                        npl = "Bermasalah";
                                        break;
                                    }
                                    else error();
                                } while (pil3 != 'B' || pil3 != 'b');
                                break;
                            }
                            else if (pil2 == 'W') {
                                pekerjaan = "Wiraswasta";
                                do {
                                    system("cls"); 
                                    menu_level_3_left();
                                    std::cin >> pil3;
                                    if (pil3 == 'B') {
                                        npl = "Baik";
                                        break;
                                    }
                                    else if (pil3 == 'b') {
                                        npl = "Bermasalah";
                                        break;
                                    }
                                    else error();
                                } while (pil3 != 'B' || pil3 != 'b');
                                break;
                            }
                            else error();
                        } while (pil2 != 'S' || pil2 != 'W'); 
                        break;
                    }
                    else if (pil1 == 'S') {
                        jaminan = "SHM";
                        do {
                            system("cls");
                            menu_level_2_right();
                            std::cin >> pil2;
                            if (pil2 == 'P') {
                                pekerjaan = "PNS";
                                do {
                                    system("cls"); 
                                    menu_level_3_left();
                                    std::cin >> pil3;
                                    if (pil3 == 'B') {
                                        npl = "Baik";
                                        break;
                                    }
                                    else if (pil3 == 'b') {
                                        npl = "Bermasalah";
                                        break;
                                    }
                                    else error();
                                } while (pil3 != 'B' || pil3 != 'b');
                                break;
                            }
                            else if (pil2 == 'S') {
                                pekerjaan = "Swasta";
                                npl = "Baik";
                                break;
                            }
                            else error();
                        } while (pil2 != 'P' || pil2 != 'S');
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
            std::cout << "Masukkan Kode Nasabah : "; std::cin >> kode;
            search(first, p_help, kode);
            if (p_help != nullptr) {
                if (p_help->jaminan == "Logam Mulia") {
                    loading();
                    std::cout << "Kelas Mikro\n";
                    system("pause");
                    system("cls");
                }
                else if (p_help->jaminan == "BPKB") {
                    if (p_help->pekerjaan == "Swasta") {
                        loading();
                        std::cout << "Kelas Sedang\n";
                        system("pause");
                        system("cls");
                    }
                    else if (p_help->pekerjaan == "Wiraswasta") {
                        if (p_help->npl == "Baik") {
                            loading();
                            std::cout << "Kelas Atas\n";
                            system("pause");
                            system("cls");
                        }
                        else if (p_help->npl == "Bermasalah") {
                            loading();
                            std::cout << "Kelas Mikro\n";
                            system("pause");
                            system("cls");
                        }
                    }
                }
                else if (p_help->jaminan == "SHM") {
                    if (p_help->pekerjaan == "PNS") {
                        loading();
                        std::cout << "Kelas Sedang\n";
                        system("pause");
                        system("cls");
                    }
                    else if (p_help->pekerjaan == "Swasta") {
                        if (p_help->npl == "Baik") {
                            loading();
                            std::cout << "Kelas Atas\n";
                            system("pause");
                            system("cls");
                        }
                        else if (p_help->npl == "Bermasalah") {
                            loading();
                            std::cout << "Kelas Sedang\n";
                            system("pause");
                            system("cls");
                        }
                    }
                }
            }
            else {
                system("cls");
                std::cout << "Data nasabah tidak ditemukan !\n\n";
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