/*
    File:    keyword_init_table.cpp
    Created: 10 February 2019 at 10:49 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#include "../include/keyword_init_table.h"
#include "../include/mysize.h"

namespace lynx_scanner{
    const State_for_char keyword_init_table[] = {
        {0,   U'b'}, {7,   U'c'}, {16,  U'd'},
        {22,  U'e'}, {26,  U'f'}, {45,  U'g'},
        {48,  U'i'}, {51,  U'l'}, {61,  U'm'},
        {65,  U'p'}, {70,  U's'}, {83,  U't'},
        {96,  U'u'}, {99,  U'w'}
    };

    const std::size_t    keyword_init_table_size = size(keyword_init_table);
};