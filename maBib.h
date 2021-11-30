#include "maBib.c"

struct date
{
    int jour;
    int mois;
    int annee;
};
typedef struct date DATE;

struct client
{
    char[50] nom;
    char[50] prenom;
    char[9] cin;
    DATE date_naiss;
    char[10] num_passport;
};
typedef struct client CLIENT;

struct voyage
{
    char[50] destination;
    float prix;
    int nb_places;
    int places_dispo;
    DATE date_depart;
    DATE date_arrive;
    float duree_vol;
    char[50] airline;
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
void afficher_client();
void afficher_clients();

void ajouter_reservation();
void modif_reservation();
void supprimer_reservation();
void afficher_reservation();
void afficher_reservation();

bool cntrl_date(DATE);
bool cntrl_cin(char *);
bool cntrl_nom(char *);