//------------------------------
//Gestion des entrées
void input() { 

//Stop des volets via l'appuis sur le bouton du sens opposé
  
  //Raz du compteur UP
      if (((cpt_bp_up > 0)&&(cpt_bp_down > 0))&&(cpt_bp_up>=cpt_bp_down)){ //Si les deux compteur sont superieurs à 0 et que le compteur UP soit superieur au compteur DOWN
         cpt_bp_up=0;       //RAZ variable
         cpt_bp_down=0;     //RAZ variable
      }

  
  //Raz du compteur DOWN
      if (((cpt_bp_down > 0)&&(cpt_bp_up > 0))&&(cpt_bp_down>=cpt_bp_up)){  //Si les deux compteur sont superieurs à 0 et que le compteur DOWN soit superieur au compteur UP
         cpt_bp_up=0;         //RAZ variable
         cpt_bp_down=0;       //RAZ variable
      }


  
//Activation des variables d'image des sorties

  //Gestion de la variable image de la sortie UP
      if (cpt_bp_up > 0){   //Si le compteur UP > 0 alors passage de la variable associée à la sortie UP à TRUE
         relay1_up=true;
      }
      else {                  //Sinon passage à FALSE de la variable
        relay1_up=false;
      }

  //Gestion de la variable image de la sortie DOWN
      if (cpt_bp_down > 0){ //Si le compteur DOWN > 0 alors passage de la variable associée à la sortie DOWN à TRUE
           relay1_down=true;
        }
      else {                //Sinon passage à FALSE de la variable
          relay1_down=false;
        }

}
//Fin Gestion des entrées
//------------------------------

