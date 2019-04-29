#ifndef LU_SCANER_DELIMITER_TABLE_H
#define LU_SCANER_DELIMITER_TABLE_H
#   include "../include/elem.h"
#   include "../include/lu_lexeme.h"
namespace lu_scanner{
    extern const trans_table::Elem<Lexem_code> delimiters_jump_table[];
};
#endif