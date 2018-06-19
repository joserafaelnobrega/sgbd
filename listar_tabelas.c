#include "biblioteca.h"

void listar_tabelas ()
{
    system("cls");
    DIR *dir;
    struct dirent *lsdir;

    dir = opendir("C:\\Users\\Public\\Documents\\SGBD\\arquivos");

    printf("as tabelas encontradas foram:\n");
    while ( ( lsdir = readdir(dir) ) != NULL )
    {
        printf ("%s\n\n", lsdir->d_name);
    }

    closedir(dir);

}
