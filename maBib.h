#pragma once
#include <stdbool.h>

struct date
{
    int jour;
    int mois;
    int annee;
};
typedef struct date DATE;

struct client
{
    char nom[50];
    char prenom[50];
    char cin[12];
    DATE date_naiss;
    char num_passport[10];
    int a;
};
typedef struct client CLIENT;

struct voyage
{
    char destination[50];
    float prix;
    int nb_places;
    int places_dispo;
    DATE date_depart;
    DATE date_arrive;
    float duree_vol;
    char airline[50];
};
typedef struct voyage VOYAGE;

struct reservation
{
    CLIENT client;
    VOYAGE voyage;
    DATE date_reservation;
    int nb_res;
};
typedef struct reservation RES;

void ajouter_voyage();
void modif_voyage();
void supprimer_voyage();
void afficher_voyage();
void afficher_voyages();
bool places_dispo(int);

void ajouter_client();
void modif_client();
void supprimer_client();
void afficher_client(CLIENT);
void afficher_clients();
void creer_client(CLIENT *);

void ajouter_reservation();
void modif_reservation();
void supprimer_reservation();
void afficher_reservation();
void afficher_reservation();
//afficher les reservations d'un certain client

bool cntrl_date(DATE);
bool cntrl_cin(char *);
bool cntrl_nom(char *);