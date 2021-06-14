#include "interface.hpp"

void input_data_nasabah_full(int pil1, int pil2, int pil3, std::string jaminan, std::string pekerjaan, std::string npl) {
    do {
        menu_level_1();
        std::cin >> pil1;
        if (pil1 == 'L') {
            jaminan = "LM";
            std::cout << '\n';
            do {
                menu_level_2_full();
                std::cin >> pil2;
                if (pil2 == 'W') {
                    pekerjaan = "Wiraswasta";
                    std::cout << '\n';
                    do {
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
                    } while (pil3 != 'B' || pil3 != 'b' || pil3 != 'T');
                    break;
                }
                else if (pil2 == 'S') {
                    pekerjaan = "Swasta";
                    std::cout << '\n';
                    do {
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
                    } while (pil3 != 'B' || pil3 != 'b' || pil3 != 'T');
                    break;
                }
                else if (pil2 == 'P') {
                    pekerjaan = "PNS";
                    std::cout << '\n';
                    do {
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
                    } while (pil3 != 'B' || pil3 != 'b' || pil3 != 'T');
                    break;
                }
                else if (pil2 == 'L') {
                    pekerjaan = "Lainnya";
                    std::cout << '\n';
                    do {
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
                    } while (pil3 != 'B' || pil3 != 'b' || pil3 != 'T');
                    break;
                }
                else error();
            } while (pil2 != 'W' || pil2 != 'S' || pil2 != 'P' || pil2 != 'L');
            break;
        }
        else if (pil1 == 'B') {
            jaminan = "BPKB";
            std::cout << '\n';
            do {
                menu_level_2_bpkb();
                std::cin >> pil2;
                if (pil2 == 'W') {
                    pekerjaan = "Wiraswasta"; 
                    std::cout << '\n';
                    do {
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
                    } while (pil3 != 'B' || pil3 != 'b' || pil3 != 'T');
                    break;
                }
                else if (pil2 == 'S') {
                    pekerjaan = "Swasta";
                    std::cout << '\n';
                    do {
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
                    } while (pil3 != 'B' || pil3 != 'b' || pil3 != 'T');
                    break;
                }
                else error();
            } while (pil2 != 'W' || pil2 != 'S');
            break;
        }
        else if (pil1 == 'S') {
            jaminan = "SHM";
            std::cout << '\n';
            do {
                menu_level_2_shm();
                std::cin >> pil2;
                if (pil2 == 'P') {
                    pekerjaan = "PNS";
                    std::cout << '\n';
                    do {
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
                    } while (pil3 != 'B' || pil3 != 'b' || pil3 != 'T');
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
            } while (pil2 != 'P' || pil2 != 'S');
            break;
        }
        else error();
    } while (pil1 != 'L' || pil1 != 'B' || pil1 != 'S');