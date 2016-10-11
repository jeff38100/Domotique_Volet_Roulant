//------------------------------
//Clignotement LED
void led_13() {
  
    if (timeElapsed > interval_clignotement) {
           
            // if the LED is off turn it on and vice-versa:
            if (ledState == LOW) {
              ledState = HIGH;
            } 
            else {
              ledState = LOW;
            }
        timeElapsed = 0;       // reset the counter to 0 so the counting starts over...
    }
}
//Fin Clignotement LED
//------------------------------

