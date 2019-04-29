#ifndef LU_SCANER_KEYWORD_TABLE_H
#define LU_SCANER_KEYWORD_TABLE_H
#   include "../include/elem.h"
#   include "../include/lu_lexeme.h"
namespace lu_scanner{
    extern const trans_table::Elem<Lexem_code> keywords_jump_table[];
};
#endif