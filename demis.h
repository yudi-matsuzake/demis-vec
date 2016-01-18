#ifndef __DEMIS_H__
#define __DEMIS_H__
#include "cloak.h"

#define DEMIS_VAR(i, TYPE, PREFIX, _) TYPE PREFIX ## i ;
#define demis_vec(TYPE, PREFIX, N) EVAL(REPEAT(N, DEMIS_VAR, TYPE, PREFIX, ~))


#endif
