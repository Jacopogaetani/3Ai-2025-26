/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package agenzia;

/**
 *
 * @author Studente
 */
public class AgenziaAssicurativa {
    private String agenzia;
    Polizza[] polizze;
    private int numeroMassimo, polizzeRegistrate = 0;

    public AgenziaAssicurativa(String agenzia, int numeroMassimo)
    {
        this.agenzia = agenzia;
        this.numeroMassimo = numeroMassimo;
        this.polizze = new Polizza[numeroMassimo];


    }

    public String getAgenzia() {
        return agenzia;
    }

    public void setAgenzia(String agenzia) {
        this.agenzia = agenzia;
    }

    public Polizza[] getPolizze() {
        return polizze;
    }

    public void setPolizze(Polizza[] polizze) {
        this.polizze = polizze;
    }

    public int getNumeroMassimo() {
        return numeroMassimo;
    }

    public void setNumeroMassimo(int numeroMassimo) {
        this.numeroMassimo = numeroMassimo;
    }

    public int getPolizzeRegistrate() {
        return polizzeRegistrate;
    }

    public void setPolizzeRegistrate(int polizzeRegistrate) {
        this.polizzeRegistrate = polizzeRegistrate;
    }



    public void aggiungiPolizza(Polizza p)
    {
        if(polizzeRegistrate < numeroMassimo)
        {
            polizze[polizzeRegistrate] = p;
            polizzeRegistrate++;
        }
    }

    public float sommaPremiAnnui()
    {
        float somma = 0;
        for(int i = 0; i < polizzeRegistrate; i++)
        {
            somma+=polizze[i].getPremioAnnuo();
        }

        return somma;
    }

    //Fare elenco valoriRC

    //Fare cerca taarga

    public float premioMedio()
    {
        float media = 0, somma = 0;

        for(int i = 0; i < polizzeRegistrate; i++)
        {
            somma+=polizze[i].getPremioAnnuo();
        }

        media = somma/polizzeRegistrate;

        return media;
    }

    public float premioMax()
    {
        float max = 0;

        for(int i = 0; i < polizzeRegistrate; i++)
        {
            if(polizze[i].getPremioAnnuo() > max)
            {
                max = polizze[i].getPremioAnnuo();
            }
        }

        return max;

    }

    public int contaPolizzeRC(float soglia)
    {
        int maggiori = 0;
        for(int i = 0; i < polizzeRegistrate; i++)
        {
            if(polizze[i].getRc() > soglia)
            {
                maggiori++;
            }
        }

        return maggiori;
    }

    public void applicaScontoTutte(float percentuale) {
        for(int i = 0; i < polizzeRegistrate; i++)
        {
           polizze[i].applicaSconto(percentuale);
        }
    }
}
