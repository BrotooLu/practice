#include <stdio.h>
#include <stdlib.h>

extern int fee_count, fie_count, foe_count, fum_count;
extern int yylex();

int main(int argc, char** argv) {
    yylex();
    printf("fee_count:%d fie_count:%d foe_count:%d fum_count:%d\n",
	    fee_count, fie_count, foe_count, fum_count);
    exit(0);
}
