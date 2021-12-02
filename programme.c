#include <stdio.h>
#include "maBib.c"

void main()
{
    CLIENT clt;
    clt = creer_client();
    afficher_client(clt);
}