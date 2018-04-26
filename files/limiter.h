void limiters()
/* Gestione di due hard limiter switches.

Come deve funzionare:
      se motore è fermo : ritorna subito
      leggo pin_limiters
se limiter risulta ALTO : fermo il motore, inverto senso, ritorno indietro per quantità sufficiente a ripristino switch.

 */


{
  unsigned char limiters_status = digitalRead(PIN_LIMITERS);
  if (limit_status == HIGH){
  	// cose da fare  
	// Fermo motore: gli stepper hanno freno particolare? 
	// output su qualcosa per un warning
	// inverto senso motore
	// imposto un numero di step di sicurezza pari alla corsa dello switch
      // riattivo il motore
      // verifico il ripristino del limiter
// se ho raggiunto il limiter vuol dire che qualcosa non ha funzionato
// nel calcolo della corsa disponibile ?
  }

  return;
}


