#pragma once

#define BUILD 1907

#include "glob.h"
#include "parse.h"

typedef struct args {
    int a, f, h, l, m, r, s, v;
} args_t;

/* clang-format off */
void display    (glob_t *glob, args_t p_args);
void parse_args (glob_t *glob, int argc, char **argv,
                 args_t *args);
void show_flags (void);
/* clang-format on */