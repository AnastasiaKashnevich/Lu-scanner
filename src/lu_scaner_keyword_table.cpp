/*
    File:    lynx_scaner_keyword_table.cpp
    Created: 09 February 2019 at 15:18 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#include "../include/lu_scaner_keyword_table.h"

namespace lu_scanner{
    const trans_table::Elem<Lexem_code> keywords_jump_table[] = {
        {const_cast<char32_t*>(U"ir"),   Lexem_code::Id,                 1}, // 0:   b...
        {const_cast<char32_t*>(U"g"),    Lexem_code::Id,                 2}, // 1:   bi...
        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                 3}, // 2:   br...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_big,             0}, // 3:   big
        {const_cast<char32_t*>(U"a"),    Lexem_code::Id,                 5}, // 4:   bre...
        {const_cast<char32_t*>(U"k"),    Lexem_code::Id,                 6}, // 5:   brea...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_break,           0}, // 6:   break
       

        {const_cast<char32_t*>(U"ol"),   Lexem_code::Id,                 8}, // 7:  c...
        {const_cast<char32_t*>(U"n"),    Lexem_code::Id,                 9}, // 8:  co...
        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                10}, // 9:  cl...
        {const_cast<char32_t*>(U"s"),    Lexem_code::Id,                11}, // 10: con...
        {const_cast<char32_t*>(U"a"),    Lexem_code::Id,                12}, // 11: cle...
        {const_cast<char32_t*>(U"t"),    Lexem_code::Id,                13}, // 12: cons...
        {const_cast<char32_t*>(U"n"),    Lexem_code::Id,                14}, // 13: clea...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_const,           0}, // 14: const
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_clean,           0}, // 15: clean
        

        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                17}, // 16:  d...
        {const_cast<char32_t*>(U"l"),    Lexem_code::Id,                18}, // 17:  de...
        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                19}, // 18:  del...
        {const_cast<char32_t*>(U"t"),    Lexem_code::Id,                20}, // 19:  dele...
        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                21}, // 20:  delet...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_delete,          0}, // 21:  delete
        

        {const_cast<char32_t*>(U"l"),    Lexem_code::Id,                23}, // 22:  e...
        {const_cast<char32_t*>(U"s"),    Lexem_code::Id,                24}, // 23:  el...
        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                25}, // 24:  els...
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_else,            0}, // 25:  else

        {const_cast<char32_t*>(U"aou"),  Lexem_code::Id,                27}, // 26:  f...
        {const_cast<char32_t*>(U"l"),    Lexem_code::Id,                28}, // 27:  fa...
        {const_cast<char32_t*>(U"r"),    Lexem_code::Id,                29}, // 28:  fo...
        {const_cast<char32_t*>(U"l"),    Lexem_code::Id,                30}, // 29:  fu...
		{const_cast<char32_t*>(U"s"),    Lexem_code::Id,                31}, // 30:  fal...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_for,             0}, // 31:  for
        {const_cast<char32_t*>(U"l"),    Lexem_code::Id,                33}, // 32:  ful...
        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                34}, // 33:  fals...
		{const_cast<char32_t*>(U"1368"), Lexem_code::Id,                35}, // 34:  full...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_false,           0}, // 35:  false
        {const_cast<char32_t*>(U"26"),   Lexem_code::Id,                37}, // 36:  full1...
		{const_cast<char32_t*>(U"2"),    Lexem_code::Id,                38}, // 37:  full3...
        {const_cast<char32_t*>(U"4"),    Lexem_code::Id,                39}, // 38:  full6...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_full8,           0}, // 39:  full8
        {const_cast<char32_t*>(U"8"),    Lexem_code::Id,                41}, // 40:  full12...
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_full16,          0}, // 41:  full16
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_full32,          0}, // 42:  full32
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_full64,          0}, // 43:  full64
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_full128,         0}, // 44:  full128
        
		

        {const_cast<char32_t*>(U"o"),    Lexem_code::Id,                46}, // 45:  g...
        {const_cast<char32_t*>(U"o"),    Lexem_code::Id,                47}, // 46:  go...
        {const_cast<char32_t*>(U"d"),    Lexem_code::Id,                48}, // 47:  goo...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_good,            0}, // 48:  good
		
		{const_cast<char32_t*>(U"f"),    Lexem_code::Id,                50}, // 49:  i...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_if,             51}, // 50: if
        

        {const_cast<char32_t*>(U"o"),    Lexem_code::Id,                52}, // 51:  l...
        {const_cast<char32_t*>(U"g"),    Lexem_code::Id,                53}, // 52:  lo...
        {const_cast<char32_t*>(U"1368"), Lexem_code::Id,                54}, // 53:  log...
        {const_cast<char32_t*>(U"6"),    Lexem_code::Id,                55}, // 54:  log1...
        {const_cast<char32_t*>(U"3"),    Lexem_code::Id,                56}, // 55:  log3...
        {const_cast<char32_t*>(U"4"),    Lexem_code::Id,                57}, // 56:  log6...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_log8,            0}, // 57:  log8
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_log16,           0}, // 58:  log16
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_log32,           0}, // 59:  log32
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_log64,           0}, // 60:  log64
        

        {const_cast<char32_t*>(U"a"),    Lexem_code::Id,                62}, // 61: m...
        {const_cast<char32_t*>(U"i"),    Lexem_code::Id,                63}, // 62: ma...
        {const_cast<char32_t*>(U"n"),    Lexem_code::Id,                64}, // 63: mai...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_main,            0}, // 64: main
        
		
		{const_cast<char32_t*>(U"e"),    Lexem_code::Id,                66}, // 65: p...
        {const_cast<char32_t*>(U"r"),    Lexem_code::Id,                67}, // 66: pe...
        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                68}, // 67: per...
        {const_cast<char32_t*>(U"m"),    Lexem_code::Id,                69}, // 68: pere...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_perem,           0}, // 69: perem
        

        {const_cast<char32_t*>(U"mit"),  Lexem_code::Id,                71}, // 70: s...
        {const_cast<char32_t*>(U"a"),    Lexem_code::Id,                72}, // 71: sm...
        {const_cast<char32_t*>(U"g"),    Lexem_code::Id,                73}, // 72: si...
        {const_cast<char32_t*>(U"r"),    Lexem_code::Id,                74}, // 73: st...
        {const_cast<char32_t*>(U"l"),    Lexem_code::Id,                75}, // 74: sma...
        {const_cast<char32_t*>(U"n"),    Lexem_code::Id,                76}, // 75: sig...
        {const_cast<char32_t*>(U"i"),    Lexem_code::Id,                77}, // 76: str...
        {const_cast<char32_t*>(U"l"),    Lexem_code::Id,                78}, // 77: smal...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_sign,            0}, // 78: sign
        {const_cast<char32_t*>(U"n"),    Lexem_code::Id,                80}, // 79: stri...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_small,           0}, // 80: small
        {const_cast<char32_t*>(U"g"),    Lexem_code::Id,                82}, // 81: strin...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_string,          0}, // 82: string
        

        {const_cast<char32_t*>(U"iyhr"), Lexem_code::Id,                84}, // 83: t...
        {const_cast<char32_t*>(U"m"),    Lexem_code::Id,                85}, // 84: ti...
        {const_cast<char32_t*>(U"p"),    Lexem_code::Id,                86}, // 85: ty...
		{const_cast<char32_t*>(U"e"),    Lexem_code::Id,                87}, // 86: th...
        {const_cast<char32_t*>(U"u"),    Lexem_code::Id,                88}, // 87: tr...
        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                89}, // 88: tim...
        {const_cast<char32_t*>(U"e"),    Lexem_code::Id,                90}, // 89: typ...
        {const_cast<char32_t*>(U"n"),    Lexem_code::Id,                91}, // 90: the...
		{const_cast<char32_t*>(U"e"),    Lexem_code::Id,                92}, // 91: tru...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_time,            0}, // 92: time
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_type,            0}, // 93: type
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_then,            0}, // 94: then
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_true,            0}, // 95: true
		
		
		{const_cast<char32_t*>(U"s"),    Lexem_code::Id,                97}, // 96: u...
        {const_cast<char32_t*>(U"l"),    Lexem_code::Id,                98}, // 97: us...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_usl,             0}, // 98: usl
        


        {const_cast<char32_t*>(U"h"),    Lexem_code::Id,               100}, // 99: w...
        {const_cast<char32_t*>(U"i"),    Lexem_code::Id,               101}, // 100: wh...
        {const_cast<char32_t*>(U"l"),    Lexem_code::Id,               102}, // 101: whi...
        {const_cast<char32_t*>(U"е"),    Lexem_code::Id,               103}, // 102: whil...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_while,           0}, // 103: while
        
    };
};