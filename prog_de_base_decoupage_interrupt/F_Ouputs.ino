//------------------------------
//Gestion des sorties
void output() {

digitalWrite(led, ledState);    //Activation/Désactivation de la LED 13


//Gestion de la sortie UP
      if ((relay1_up ==true)&&(relay1_down ==false)){        //Si la variable image est à TRUE alors on active la sortie
        digitalWrite(led1_up, LOW);
        Serial.print("cpt_bp_up : ");   //Affichage de la valeur du compteur pour debug
        Serial.println(cpt_bp_up);      //Affichage de la valeur du compteur pour debug
        }
      else {
        digitalWrite(led1_up, HIGH); //Sinon on la désactive
      }

//Gestion de la sortie DOWN
       if ((relay1_down ==true)&&(relay1_up ==false)){    //Si la variable image est à TRUE alors on active la sortie
        digitalWrite(led1_down, LOW);
        Serial.print("cpt_bp_down : "); //Affichage de la valeur du compteur pour debug
        Serial.println(cpt_bp_down);    //Affichage de la valeur du compteur pour debug
        }
      else {
        digitalWrite(led1_down, HIGH); //Sinon on la désactive
        }

}
//Fin Gestion des sorties
//------------------------------


// -----------------------------
// Passage à zéro des sorties
void raz_output(){
  
  digitalWrite(led1_down, HIGH);
  digitalWrite(led1_up, HIGH);
  
  
   relay1_up = false;
   relay1_down = false;
  }
// Fin de Passage à zéro des sorties
// -----------------------------

// -----------------------------
// Volets en condtion initiale
void raz_position_volets(){
  
  digitalWrite(led1_down, LOW);
  delay(interval_course_raz);       //Tempo déclarée au début
  digitalWrite(led1_up, HIGH);
  
  
   relay1_up = false;
   relay1_down = false;
  }
// Volets en condtion initiale
// -----------------------------



