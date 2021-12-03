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
    int nb_res; //nombre de places reserves par le client
    float montantTotal bool paye;
};
typedef struct reservation RES;

VOYAGE creer_voyage();          //Creer un voyage
void ajouter_voyage(VOYAGE);    //ajouter un voyage au tableau
void modif_voyage();            //modifier un voyage du tableau
void supprimer_voyage();        //supprimer un voyage du tableau
void afficher_voyage(VOYAGE);   //afficher un voyage du tableau
void afficher_voyages();        //afficher tous les voyages
void afficher_voyages_dispo();  //afficher tous les voyages dont le nbre de places disponible est superieur a 0
bool places_dispo(int, VOYAGE); // retourner si un nobre de places donne est disponioble pour un certain voyage
int recherche_voyage();         //retourne l'indexe d'un voyage dans le tableau utilise das supprimer et modifier voyage

CLIENT creer_client();
void ajouter_client();           //ajoute un client au tableau
void modif_client();             //modifie un client du tableau
void supprimer_client();         //supprime un client du tableau
void afficher_client(CLIENT);    //affiche un certain client
void afficher_clients();         //affichae tous les clients
int recherche_client(char *cin); // utiliser par creer modifier et supprimer client pour verifier l existance du client retourne l'indexe du client dans la table ou -1 s'il n'existe pas

RES creer_reservation(CLIENT, VOYAGE); //creer une reservation
void ajouter_reservation(RES);         //ajouter une reservation au tableau
void modif_reservation();              //modifier une reservation du tableau
void supprimer_reservation();          //supprimer une reservation du tableau
void afficher_reservation(RES);        //afficher une reservation
void afficher_reservation();           //afficher toutes les reservations
void afficher_res_client(CLIENT);      //afficher les reservations d'un certain client
void payer_reservation();              //payer un reservation

void montant_caisse(); //affiche le montant total dans la caisse de l'agence

bool cntrl_date(DATE);  //controle sur la date
bool cntrl_cin(char *); //controle sur le cin
bool cntrl_nom(char *); //controle sur le nom (ne doit pas contenir des chiffres)