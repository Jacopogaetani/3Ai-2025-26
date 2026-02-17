package org.example;

/*Un tappezziere deve fare un preventivo per una stanza. La stanza ha
dimensioni 3m per 4,5 m, ed è alta 2,80 m. Ogni rotolo è lungo 10,05 m
ed è alto 53 cm (dimensioni standard di un rotolo).Sono possibili diverse
soluzioni, con prezzi diversificati: la carta normale costa 24 € a rotolo,
quella extra costa 30 € a rotolo e quella extra-fine 34 € a rotolo.
Calcolare il costo stimato per i tre casi. A vostra discrezione scegliete di
tapezzare solo pareti o includere anche il tetto. Nell'output dovete
specificare la scelta fatta.*/

//8 rotoli + 3 rotoli (Tetto)

//Tetto: 13,5 m


public class Esercizio6_Gaetani3Ai {
    public static void main(String[] args)
    {
        int costoNormale = 24, costoExtra = 30, costoExtraFine = 34, rotoli = 11, totale;
        //Includendo il tetto sono necessari 11 rotoli

        //Normale
        System.out.println("I prezzi sotto rappresentati includono il rivestimento di tetto e pareti");
        
        totale = costoNormale * rotoli;
        System.out.println("Usando i rotoli normali sono necessari " + totale + " euro");
        //Extra
        totale = costoExtra * rotoli;
        System.out.println("Usando i rotoli extra sono necessari " + totale + " euro");
        //Extra fine
        totale = costoExtraFine * rotoli;
        System.out.println("Usando i rotoli extra fini sono necessari " + totale + " euro");

    }
}
