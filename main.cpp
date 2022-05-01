#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/utsname.h>

int main(void){
    std::cout << R"(
        .--.
       |o_o |
       |:_/ |
      //   \ \
     (|     | )
    /'\_   _/`\
    \___)=(___/
    )" << '\n';

    struct utsname buffer;

    errno = 0;
    if (uname(&buffer) < 0)
    {
        perror("uname");
        exit(EXIT_FAILURE);
    }
    printf("OS:             %s\n", buffer.sysname);
    printf("Distro:         %s\n", buffer.nodename);
    printf("Architecture:   %s\n", buffer.machine);
}