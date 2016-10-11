/*
 * Les void ci dessous sont appelées via des interrupts.
 * Elles incrementent un compteur (1/bouton)
 */


// Increment variable d'appuis sur le BP UP
// -----------------------------
void comptage_bp_up()
    {
      cpt_bp_up++;
      Serial.println("Comptage BP_up");
      Serial.println(cpt_bp_up);
    }

// Fin Increment variable
// -----------------------------


// Increment variable d'appuis sur le BP DOWN
// -----------------------------
void comptage_bp_down() 
    {
      cpt_bp_down++;
      Serial.println("Comptage BP_down");
      Serial.println(cpt_bp_down);
    }

// Fin Increment variable
// -----------------------------

/*
front_montant(etat_variable,memoire){
 

     if((etat_variable != memoire) && (etat_variable == TRUE)){

        return true;
        }
    else{
        return false;
         }

    }
*/


