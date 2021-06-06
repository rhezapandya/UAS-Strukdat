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
    pointer curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr ->next = pBaru;
}

void search(pointer &head, pointer &pBantu, std::string key) 
{ 
    pBantu = head;
    while (pBantu != nullptr) 
    { 
        if (pBantu->kode == key) {
            break;
        }
        else {
            system("cls");
            std::cout << "Data Nasabah Tidak Ditemukan !\n\n";
            system("pause");
            system("cls");
        }
        pBantu = pBantu->next; 
    } 
} 

void delete_by_key(pointer &head, pointer &p_delete, std::string key){
    search(head, p_delete, key);
        if (head == nullptr || p_delete == nullptr) {
        std::cout << "Data Nasabah Tidak Ditemukan !\n\n";
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
        }
}

void traversal_data_nasabah(list &head){
    pointer curr = head;
    int i = 1;
    while(curr != nullptr){
        std::cout << "| " << std::setiosflags(std::ios::left) << std::setw(4) << i << std::setfill(' ') << "|";
        std::cout << " " << std::setiosflags(std::ios::left) << std::setw(5) << curr->kode << std::setfill(' ') << "|";
        std::cout << " " << std::setiosflags(std::ios::left) << std::setw(25) << curr->nama << std::setfill(' ') << "|";
        std::cout << " " << std::setiosflags(std::ios::left) << std::setw(12) << curr->jaminan << std::setfill(' ') << "|";
        std::cout << " " << std::setiosflags(std::ios::left) << std::setw(11) << curr->pekerjaan << std::setfill(' ') << "|";
        std::cout << " " << std::setiosflags(std::ios::left) << std::setw(11) << curr->npl << std::setfill(' ') << "|\n";
        curr = curr->next;
        i++;
    }
}
