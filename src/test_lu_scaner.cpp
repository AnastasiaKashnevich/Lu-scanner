
#include <cstdio>
#include "../include/test_lu_scaner.h"
#include "../include/lu_lexeme.h"

void test_lu_scaner(const std::shared_ptr<lu_scanner::Scanner>& lusc)
{
    lu_scanner::Lu_token lti;
    lu_scanner::Lexem_code llc;
    do{
        lti    = lusc->current_lexeme();
        llc   = lti.lexeme_.code_;
        auto s = lusc->token_to_string(lti);
        puts(s.c_str());
    }while(llc != lu_scanner::Lexem_code::Nothing);
}