#include <iostream>
#include <iomanip>
#include <string>

struct nasabah {
    int kode;
    std::string nama;
    std::string jaminan;
    std::string pekerjaan;
    std::string npl;
    nasabah *next;
};
typedef nasabah* pointer;

void new_element(pointer &pBaru, std::string data1, std::string data2, std::string data3, std::string data4){
    pBaru = new nasabah;
    pBaru->nama = data1;
    pBaru->jaminan = data2;
    pBaru->pekerjaan = data3;
    pBaru->npl = data4;
    pBaru->next = nullptr;
}

void insert_last(pointer &head, std::string data1, std::string data2, std::string data3, std::string data4){
    pointer pBaru;
    new_element(pBaru, data1, data2, data3, data4);
    pointer curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr ->next = pBaru;
}

void traversal(pointer &head){
    pointer curr = head;
    int i = 1;
    while(curr != nullptr){
        std::cout << i << " | " << curr->nama << "\n";
        curr = curr -> next;
        i++;
    }
}

void decision_tree() {
    char jaminan, pekerjaan, npl;
    std::cout << "Jaminan : [L]ogam Mulia / [B]PKB / [S]HM ? > "; std::cin >> jaminan;
    if (jaminan == 'L' || jaminan == 'l') {
        std::cout << "Kelas Mikro";
    }
    else if (jaminan == 'B' || jaminan == 'b') {
        std::cout << "Pekerjaan : [S]wasta / [W]iraswasta ? > "; std::cin >> pekerjaan;
        if (pekerjaan == 'S' || pekerjaan == 's') {
            std::cout << "Kelas Sedang";
        }
        else if (pekerjaan == 'W' || pekerjaan == 'w') {
            std::cout << "NPL : [B]aik / [b]ermasalah ? > "; std::cin >> npl;
            if (npl == 'B') {
                std::cout << "Kelas Atas";
            }
            else if (npl == 'b') {
                std::cout << "Kelas Mikro";
            }
            else {
                std::cout << "Input Salah !!!";
            }
        }
        else {
            std::cout << "Input Salah !!!";
        }
    }
    else if (jaminan == 'S' || jaminan == 's') {
        std::cout << "Pekerjaan : [P]NS / [S]wasta ? > "; std::cin >> pekerjaan;
        if (pekerjaan == 'P' || pekerjaan == 'p') {
            std::cout << "Kelas Atas";
        }
        else if (pekerjaan == 'S' || pekerjaan == 's') {
            std::cout << "NPL : [B]aik / [b]ermasalah ? > "; std::cin >> npl;
            if (npl == 'B') {
                std::cout << "Kelas Atas dan Kelas Sedang";
            }
            else if (npl == 'b') {
                std::cout << "Kelas Mikro";
            }
            else {
                std::cout << "Input Salah !!!";
            }
        }
        else {
            std::cout << "Input Salah !!!";
        }
    }
    else {
        std::cout << "Input Salah !!!";
    }
}