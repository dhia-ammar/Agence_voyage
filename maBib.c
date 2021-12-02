#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#pragma once
#include "maBib.h"

CLIENT creer_client()
{
    CLIENT clt;
    printf("Donner le nom du client : ");
    fgets(clt.nom, 50, stdin);
    printf("Donner le prenom du client : ");
    fgets(clt.prenom, 50, stdin);
    printf("Donner le CIN du client : ");
    fgets(clt.cin, 12, stdin);
    while (cntrl_cin(clt.cin) == false)
    {
        fgets(clt.cin, 12, stdin);
    }
    printf("donner la date de naissance");
    scanf("%d%d%d", &clt.date_naiss.jour, &clt.date_naiss.mois, &clt.date_naiss.annee);
    getchar();
    printf("donner le numero de passeport : ");
    fgets(clt.num_passport, 10, stdin);
    return clt;
}
bool cntrl_cin(char *cin)
{
    if (strlen(cin) != 9)
    {
        printf("Le cin doit contenir 8 chiffres");
        return false;
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            if (!((*(cin + i) <= '9') && (*(cin + i) >= '0')))
            {
                printf("Le cin ne doit contenir que des chiffres");
                return false;
            }
        }
    }
    return true;
}
void afficher_client(CLIENT clt)
{
    printf("nom: %s \tprenom:%s\ncin:%s\ndate de naissance: %d/%d/%d \nnumero passeport: %s", clt.nom, clt.prenom, clt.cin, clt.date_naiss.jour, clt.date_naiss.mois, clt.date_naiss.annee, clt.num_passport);
}