package Cassa;

public class Cassa {
    public float denaroInCassa, fondoCassa;
    public int numeroAcquisti = 0;
    /*denaro in cassa: denaro attualmente in cassa
    numero acquisti: acquisti in giornata
    fondo cassa: denaro che viene inserito in cassa ogni mattina*/

    public Cassa(float fondo)
    {
        fondoCassa = fondo;
        denaroInCassa = 0;
    }
    
    public void acquisto(float incassato)
    {
        //Azione acquisto
        numeroAcquisti++;
        denaroInCassa += incassato;
    }

    public String comunicaDati()
    {
        //Stampa dei valori
        return "Numero di acquisti: " + numeroAcquisti + "\nDenaro in cassa: " + (denaroInCassa + fondoCassa);
    }

    //Chiusura della cassa
    public void chiusuraCassa()
    {
        System.out.println("Giornata finita! Andate tutti a prendere un caffè");
        fondoCassa+=denaroInCassa;
        numeroAcquisti = 0;
        denaroInCassa = 0;
    }
}
