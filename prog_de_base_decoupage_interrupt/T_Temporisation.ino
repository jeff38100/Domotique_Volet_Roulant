//Gère les temporisations en millis dans le programme. 
//Chaque tempo necessite la délaration d'une variable delais.

//------------------------------
//Fonction Temporisation
bool tempo(unsigned long millis_depart,long delais){
  
  unsigned long millis_actuel = millis();
  
  if (millis_depart + delais < millis_actuel) 
      {
      return true;
      }
  else
      {
      return false;
      }
    }
//Fonction Temporisation
//------------------------------
