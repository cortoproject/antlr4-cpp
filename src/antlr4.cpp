
#include <antlr4.cpp>

/* STUB - clock_gettime is the only symbol that causes a dependency on
 * GLIBC 2.17. I assume a high-resolution clock is not critical for a parser, so
 * this may just work.. */
int clock_gettime(int clk_id, struct timespec *res) {
    return 0;
}
