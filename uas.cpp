#include "interface.hpp"

int main(){
    int opsi_main_menu;
    int banyak_data;
    char pil1, pil2, pil3;

    // Data Nasabah
    std::string kode;
    std::string nama;
    std::string jaminan;
    std::string pekerjaan;
    std::string npl;
    std::string key;
    pointer p_help, p_delete;
    list first = nullptr;
    new_element(first, "N001", "Affan Gans", "Logam Mulia", "-", "-");
    insert_last(first, "N002", "Rheza GTG", "BPKB", "Swasta", "-");
    insert_last(first, "N003", "Babi", "BPKB", "Wiraswasta", "Baik");

    do {
        system("cls");
        header("  Program Klasifikasi Data Nasabah Bank  ");
        main_menu();
        std::cout << "Opsi : "; std::cin >> opsi_main_menu;
        switch(opsi_main_menu){
            case 1:
            system("cls");
            traversal(first);
            system("pause");
            system("cls");
            break;

            case 2:
            system("cls");
            std::cout << "Masukkan banyak data : "; std::cin >> banyak_data;
            system("cls");
            for (int i = 1; i <= banyak_data; i++) {
                do {
                    std::cout << "< Data " << i << " >" << std::endl;
                    std::cout << "Masukkan Kode : "; std::cin >> kode; 
                    std::cout << "Masukkan Nama : "; std::getline(std::cin >> std::ws, nama); 
                    std::cout << "Masukkan Jaminan ([L]ogam Mulia / [B]PKB / [S]HM) : "; std::cin >> pil1;
                    if (pil1 == 'L') {
                        jaminan = "Logam Mulia";
                        pekerjaan = "-";
                        npl = "-";
                        system("cls");
                        break;
                    }
                    else if (pil1 == 'B') {
                        jaminan = "BPKB";
                        std::cout << "Masukkan Pekerjaan ([W]iraswasta / [S]wasta) : "; std::cin >> pil2;
                        if (pil2 == 'S' || pil2 == 's') {
                            pekerjaan = "Swasta";
                            npl = "-";
                            system("cls");
                            break;
                        }
                        else if (pil2 == 'W') {
                            pekerjaan = "Wiraswasta";
                            std::cout << "Masukkan NPL ([B]aik / [b]ermasalah) : "; std::cin >> pil3;
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
                        std::cout << "Masukkan Pekerjaan ([P]NS / [S]wasta) : "; std::cin >> pil2;
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
            break;

            case 3:
            klasifikasi();
            break;

            case 4:
            break;
            
            case 5:
            anggota();
            break;

            case 6:
            system("cls");
            exit(0);
            break;

            default:
            system("cls");
            std::cout << "Input Salah! Silahkan Coba Lagi!\n";
            system("pause");
            system("cls");
            break;
        }
    } while (opsi_main_menu != 4);
}