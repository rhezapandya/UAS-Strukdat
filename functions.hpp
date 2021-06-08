#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

struct nasabah {
    std::string kode;
    std::string nama;
    std::string jaminan;
    std::string pekerjaan;
    std::string npl;
    nasabah *next;
};
typedef nasabah* pointer;
typedef pointer list;

void new_element(pointer &pBaru, std::string kode, std::string nama, std::string jaminan, std::string pekerjaan, std::string npl){
    pBaru = new nasabah;
    pBaru->kode = kode;
    pBaru->nama = nama;
    pBaru->jaminan = jaminan;
    pBaru->pekerjaan = pekerjaan;
    pBaru->npl = npl;
    pBaru->next = nullptr;
}

void insert_last(pointer &head, std::string kode, std::string nama, std::string jaminan, std::string pekerjaan, std::string npl){
    pointer pBaru;
    new_element(pBaru, kode, nama, jaminan, pekerjaan, npl);
    if (head == nullptr) {
        head = pBaru;
    }
    else {
        pointer curr = head;
        while (curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = pBaru;
    }
}

void search(pointer &head, pointer &pBantu, std::string key) 
{ 
    pBantu = head;
    while (pBantu != nullptr) 
    { 
        if (pBantu->kode == key) {
            break;
        }
        pBantu = pBantu->next;
    } 
} 

void delete_by_key(pointer &head, pointer &p_delete, std::string key){
    search(head, p_delete, key);
        if (head == nullptr || p_delete == nullptr) {
            std::cout << "Data Nasabah Tidak Ditemukan !\n\n";
            system("pause");
            system("cls");
        } else {
            if (p_delete == head) {
            head = head->next;
            p_delete->next = nullptr;
            } else if (p_delete->next == nullptr) {
            pointer pre = head;
            while (pre->next != p_delete) {
                pre = pre->next;
            }
            pre->next = nullptr;
            } else {
            pointer pre = head;
            while (pre->next != p_delete) {
                pre = pre->next;
            }
            pre->next = p_delete->next;
            p_delete->next = nullptr;
            }
            delete p_delete;
            std::cout << "Data Berhasil Dihapus\n\n";
            system("pause");
            system("cls");
        }
}

void traversal_data_nasabah(list &head){
    if (head == nullptr) {
        std::cout << "\t\t\t\tDATA KOSONG\n";
    }
    else {
        pointer curr = head;
        int i = 1;
        while (curr != nullptr) {
            std::cout << '|' << std::setw(1) << std::setfill(' ') << std::setw(4) << i << std::setfill(' ') << '|';
            std::cout << " " << std::setw(5) << curr->kode << std::setfill(' ') << '|';
            std::cout << " " << std::setw(25) << curr->nama << std::setfill(' ') << '|';
            std::cout << " " << std::setw(12) << curr->jaminan << std::setfill(' ') << '|';
            std::cout << " " << std::setw(11) << curr->pekerjaan << std::setfill(' ') << '|';
            std::cout << " " <<  std::setw(11) << curr->npl << std::setfill(' ') << '|' << std::endl;
            curr = curr->next;
            i++;
        }
    }
}

void traversal_data_klasifikasi(list &head) {
    if (head == nullptr) {
        std::cout << "\t   DATA KOSONG\n";
    }
    else {
        pointer curr = head;
        int i = 1;
        while (curr != nullptr) {
            std::cout << '|' << std::setw(1) << std::setfill(' ') << std::setw(4) << i << std::setfill(' ') << '|';
            std::cout << " " << std::setw(5) << curr->kode << std::setfill(' ') << '|';
            std::cout << " " << std::setw(25) << curr->nama << std::setfill(' ') << '|' << std::endl;
            curr = curr->next;
            i++;
        }
    }
}