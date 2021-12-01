#include <stdio.h>
#include "maBib.c"

void main()
{
    CLIENT clt;
    creer_client(&clt);
    afficher_client(clt);
}