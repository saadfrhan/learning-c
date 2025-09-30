#include <stdio.h>

int main() {
    int max_threads = 8;
    char default_perms = 'r';
    float default_pi = 3.141592f;
    char *title = "hello world";

    printf("default max threads: %d\n", max_threads);
    printf("Custom perms: %c\n", default_perms);
    printf("Constant pi value: %f\n", default_pi);
    printf("title: %s", title);

    return 0;
}