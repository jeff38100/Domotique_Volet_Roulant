#include <elapsedMillis.h>    //Integration d'une temporisation millis
elapsedMillis timeElapsed;

//----------------------------------------------------------------
//------------------------LED_13----------------------------------  
//----------------------------------------------------------------
//Variables LED 13
    const int led = 13;
    int ledState = LOW;

//----------------------------------------------------------------
//--------------------TEMPORISATIONS------------------------------  
//----------------------------------------------------------------
//Variables temporisation
    unsigned int interval_clignotement = 500;
    unsigned int interval = 1000;

    
    unsigned int interval_course_totale_volet = 10000;   //Tempo à changer pour chaque volets.
    unsigned int interval_course_en_cours_volet = 0;
    unsigned int interval_course_raz = 2000;  //Tempo de RAZ volet.
   
//----------------------------------------------------------------
//-----------------------ENTREES----------------------------------
//----------------------------------------------------------------
//Déclaration des variables/entrée UP
    const int bp1_up = 2;
    boolean mem_bp1_up = false;
    boolean cmd1_up = false;

//Déclaration des variables/entrée UP
    const int bp1_down = 3;
    boolean mem_bp1_down = false;
    boolean cmd1_down = false;

//Compteurs interrupts,incrémentés à chaque appuis sur BP.
    volatile int cpt_bp_up = 0;
    volatile int cpt_bp_down = 0;
    
//----------------------------------------------------------------
//-----------------------SORTIES----------------------------------
//----------------------------------------------------------------    
//Déclaration des variables/sorties UP
    const int led1_up = 7;
    boolean relay1_up = false;

//Déclaration des variables/sorties DOWN
    const int led1_down = 8;
    boolean relay1_down = false;

   boolean front_montant = false;
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------

