#include <string.h>

#include "hexdump.h"


int main() {
    unsigned char *value = "\1\2\3\4\5ABCabc01234РСТрст";

    hex_dump(value, strlen(value));

    return 0;
}