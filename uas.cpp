#include "interface.hpp"

int main(){
    int opsi_main_menu;
    do {
        header("  Program Klasifikasi Data Nasabah Bank  ");
        main_menu();
        std::cout << "Opsi : "; std::cin >> opsi_main_menu;
        switch(opsi_main_menu){
            case 1:
                break;
            case 2:
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