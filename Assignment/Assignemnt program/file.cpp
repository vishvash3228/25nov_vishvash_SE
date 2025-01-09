#include <stdio.h>
main() 
{
    FILE *f1;
    char manage[] = "Hello!";
    char open[100];

    f1=fopen("file.txt","w");
    fprintf(f1, "%s",manage);
    fclose(f1);

    f1 = fopen("file.txt", "r");
    fgets(open, sizeof(open), f1);
    printf("File contains: %s\n",open);
    fclose(f1);
}

