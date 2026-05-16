package Personale;

public class ListaDipendenti {
    //Crea un array di oggetti di tipo Personale e dimensione dipendentiMassimi
    private int dipendentiIscritti, dipendentiMassimi = 10;
    Personale[]lista = new Personale[dipendentiMassimi];

    public ListaDipendenti() {
        this.dipendentiIscritti = 0;
    }

    //Aggiungere elementi all'array passando l'oggetto
    public void aggiungiDipendente(Personale p)
    {
        //Controllo per verificare che non si sia riempito l'array
        if(dipendentiIscritti < dipendentiMassimi)
        {
            //Il dipendente viene iscritto
            lista[dipendentiIscritti] = p;
            dipendentiIscritti++;
        }
        else{
            System.out.println("Non è stato possibile aggiungere il dipendente");
        }
    }

    //Viene calcolata la paga chiamando il metodo paga su ogni elemento dell'array mediante ciclo for che parte da 0 e controlla ogni dipendente iscritto
    public float pagaTotale()
    {
        float pagaTotale = 0;
        for(int i = 0; i < dipendentiIscritti; i++)
        {
            pagaTotale+=lista[i].paga();
        }

        return pagaTotale;
    }


}
