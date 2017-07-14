#include <stdio.h>

int main() {

    char *fileName = "README.md";
    FILE *fp;
    char StrLine[1024] = {};
    fp = fopen(fileName, "r");

    if (fp == NULL) {
        printf("erroe !");
        return -1;
    }
    while (!feof(fp)) {
        fgets(StrLine, 1024, fp);
        printf("%s\n", StrLine);
    }
    fclose(fp);
    return 0;
}
