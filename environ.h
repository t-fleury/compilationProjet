/* environ.h */
#ifndef ENVIRON_H
#define ENVIRON_H
/* ----------------------------types--------------------------------------------*/
/* environnement := liste de couples (identificateur, entier) */

typedef enum type {integer, booleen, array } TYPE;

typedef struct cellenv{
  char *ID;
  TYPE type;
  int  VAL;
  struct cellenv *SUIV;} *ENV;




/*------------------FONCTIONS ---------------------------------------------------*/
/*---------------------allocation memoire----------------------------------------*/
extern char *Idalloc();      /* retourne un tableau de MAXIDENT char             */
extern ENV Envalloc();       /* retourne un ENV                                  */
/*---------------------environnements--------------------------------------------*/
extern int initenv(ENV *prho,char *var, TYPE t);/* initialise l'ident var dans *prho*/
extern int ecrire_env(ENV rho);/* affiche l'environnement                        */
extern ENV rech(char *chaine, ENV listident);/* retourne la position de chaine   */
extern int affect(ENV rho, char *var, int val);/* affecte val a la variable var  */
extern int valch(ENV rho, char *var); /* valeur de var dans envirnt rho          */
/* ------------------CONSTANTES -------------------------------------------------*/
#define MAXIDENT 16          /* long max d'un identificateur de variable         */
#define MAXQUAD  5*MAXIDENT  /* long max d'un quadruplet c3a                     */
#endif
