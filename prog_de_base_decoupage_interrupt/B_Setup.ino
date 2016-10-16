// -----------------------------
// the setup routine runs once when you press reset:
void setup() {
    //Initialize the digital pin as an output.
            pinMode(led, OUTPUT);
            pinMode(bp1_up, INPUT);
            pinMode(bp1_down, INPUT);
            pinMode(led1_up, OUTPUT);
            pinMode(led1_down, OUTPUT);

    //Initialisation du serial
            Serial.begin(9600);                   //Activation de la liaison serie
            
            for (int i=0; i <= 10; i++){          //Saut de 10 ligne pour nettoyer la console au demarrage
                  Serial.println("");
            }
            Serial.println("=================");
            Serial.println("NOUVEAU DEMARRAGE");
            Serial.println("=================");
           

            

    //Mise à zero des sorties au demarrage
            raz_output();
    

    //Passage du volet en condition initiale (position basse)
            raz_position_volets();
    
       
    
    //Gestion des interrupts sur les entrée BP.
          attachInterrupt (digitalPinToInterrupt(bp1_up), comptage_bp_up, RISING);      //Appel de la fonction sur front descendant du BP UP
          attachInterrupt (digitalPinToInterrupt(bp1_down), comptage_bp_down, RISING);  //Appel de la fonction sur front descendant du BP DOWN
  
  
  
  
  
  
  }
//Fin du setup
// -----------------------------
  
