#ifndef LU_LEXEME_H
#define LU_LEXEME_H
#include <cstddef>
#include <quadmath.h>
namespace lu_scanner{
    enum class Lexem_code : uint16_t{
        Nothing,                     UnknownLexem,
        Kw_big,                      Kw_break,
        Kw_const,                    Kw_clean,
        Kw_delete,                   Kw_else,
        Kw_false,                    Kw_for,
        Kw_full8,                    Kw_full16,
        Kw_full32,                   Kw_full64,
        Kw_ful128,                   Kw_good,
        Kw_if,                       Kw_log,
        Kw_log8,                     Kw_log16,
        Kw_log32,                    Kw_log64,
        Kw_main,                     Kw_perem,
        Kw_small,                    Kw_sign,
        Kw_string,                   Kw_time,
        Kw_type,                     Kw_then,
        Kw_true,                     Kw_usl,
        Kw_while,                    
        Id,                          Integer,
        Float32,                     Float64,
        Float80,                     Float128,
        Complex32,                   Complex64,
        Complex80,                   Complex128,
        String,                      Char,
        Sq_br_opened,                Sq_br_closed,
        Round_br_opened,             Round_br_closed,
        Set_field,                   Component_is,
        Logical_not,                 Bitwise_not,
        Bitwise_xor,                 At,
        Point,                       Colon,
        Semicolon,                   Equals,
        Sharp,                       Plus,
        Minus,                       Mul,
        Div,                         Remainder,
        Bitwise_or,                  Bitwise_and,
        Less_than,                   Greater_than,
        Cond_op,                     Sq_br_colon_opened,
        Sq_br_colon_closed,          Tuple_begin,
        Tuple_end,                   Resolution,
        Curly_brace_opened,          Curly_brace_closed,
        Cycle_name_prefix,           Next,
        Prev,                        Float_add,
        Float_sub,                   Float_mul,
        Float_div,                   Float_remainder,
        Range,                       Cond_op_full,
        Less_or_equals_than,         Greater_or_equals_than,
        Not_equals,                  Power,
        Logical_xor,                 Logical_or,
        Logical_and,                 Left_shift,
        Right_shift,                 Size_of,
        Assignment,                  Data_address,
        Bitwise_or_not,              Bitwise_and_not,
        Logical_or_not,              Logical_and_not,
        Float_power,                 Data_size,
        Next_with_wrapping,          Prev_with_wrapping,
        Plus_assign,                 Minus_assign,
        Mul_assign,                  Div_assign,
        Remainder_assign,            Copy,
        Bitwise_or_assign,           Bitwise_and_assign,
        Bitwise_xor_assign,          Logical_or_full,
        Logical_and_full,            Float_plus_assign,
        Float_minus_assign,          Float_mul_assign,
        Float_div_assign,            Float_remainder_assign,
        Logical_or_assign,           Logical_and_assign,
        Logical_xor_assign,          Power_assign,
        Left_shift_assign,           Right_shift_assign,
        Bitwise_or_not_assign,       Bitwise_and_not_assign,
        Logical_or_not_full,         Logical_and_not_full,
        Logical_or_full_assign,      Logical_and_full_assign,
        Float_power_assign,          Logical_or_not_assign,
        Logical_and_not_assign,      Logical_or_not_full_assign,
        Logical_and_not_full_assign, Component,
        Comment_begin,               Comment_end,
        Maybe_logical_or_not,        Maybe_logical_and_not,
        Maybe_component,             Component_or,
        Maybe_component_or,          Comma
    };

    struct Lexeme_info{
        Lexem_code code_;
        union{
            unsigned __int128 int_val_;
            __float128        float_val_;
            __complex128      complex_val_;
            char32_t          char_val_;
            std::size_t       str_index_;
            std::size_t       id_index_;
        };
    };
};
#endif