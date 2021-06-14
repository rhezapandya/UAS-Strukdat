#include "interface.hpp"

void decision_tree(pointer &p_help) {
    if (p_help != nullptr) {
        if (p_help->jaminan == "LM") {
            tampilan_data_nasabah_individu(p_help,"\t   KLASIFIKASI NASABAH");
            std::cout << "Anda Tergolong Nasabah Kelas Mikro !\n\n";
            system("pause");
            system("cls");
        }
        else if (p_help->jaminan == "BPKB") {
            if (p_help->pekerjaan == "Swasta") {
                tampilan_data_nasabah_individu(p_help,"\t   KLASIFIKASI NASABAH");
                std::cout << "Anda Tergolong Nasabah Kelas Sedang !\n\n";
                system("pause");
                system("cls");
            }
            else if (p_help->pekerjaan == "Wiraswasta") {
                if (p_help->npl == "Baik") {
                    tampilan_data_nasabah_individu(p_help,"\t   KLASIFIKASI NASABAH");
                    std::cout << "Anda Tergolong Nasabah Kelas Atas !\n\n";
                    system("pause");
                    system("cls");
                }
                else if (p_help->npl == "Bermasalah") {
                    tampilan_data_nasabah_individu(p_help,"\t   KLASIFIKASI NASABAH");
                    std::cout << "Anda Tergolong Nasabah Kelas Mikro !\n\n";
                    system("pause");
                    system("cls");
                }
            }
        }
        else if (p_help->jaminan == "SHM") {
            if (p_help->pekerjaan == "PNS") {
                tampilan_data_nasabah_individu(p_help,"\t   KLASIFIKASI NASABAH");
                std::cout << "Anda Tergolong Nasabah Kelas Sedang !\n\n";
                system("pause");
                system("cls");
            }
            else if (p_help->pekerjaan == "Swasta") {
                tampilan_data_nasabah_individu(p_help,"\t   KLASIFIKASI NASABAH");
                std::cout << "Anda Tergolong Nasabah Kelas Sedang atau Kelas Atas !\n\n";
                system("pause");
                system("cls");
            }
        }
    }
    else {
        data_notfound();
    }   
}