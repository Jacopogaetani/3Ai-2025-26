/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package agenzia;

/**
 *
 * @author Studente
 */
public class Polizza {
    private String targa, intestatarioAuto;
    private float premioAnnuo, rc;
    
    public Polizza(String targa, String intestatarioAuto, float premioAnnuo, float rc)
    {
        this.targa = targa;
        this.intestatarioAuto = intestatarioAuto;
        this.premioAnnuo = premioAnnuo;
        this.rc = rc;
    }

    public String getTarga() {
        return targa;
    }

    public void setTarga(String targa) {
        this.targa = targa;
    }

    public String getIntestatarioAuto() {
        return intestatarioAuto;
    }

    public void setIntestatarioAuto(String intestatarioAuto) {
        this.intestatarioAuto = intestatarioAuto;
    }

    public float getPremioAnnuo() {
        return premioAnnuo;
    }

    public void setPremioAnnuo(float premioAnnuo) {
        this.premioAnnuo = premioAnnuo;
    }
    
    public String stampaPolizza()
    {
        return "La polizza dell'auto targata " + targa + " Intestato al signor/alla signora " + intestatarioAuto + " Ha un premio annuo di " + premioAnnuo + " E una rc di " + rc;
    }

    public float applicaSconto(float percentuale)
    {
        premioAnnuo = premioAnnuo - (premioAnnuo * percentuale);
        return premioAnnuo;
    }

    public float aumentaPremio(float percentuale)
    {
        premioAnnuo = premioAnnuo + (premioAnnuo * percentuale);
        return premioAnnuo;
    }

    public boolean haValoreRCAlto(float soglia)
    {
        if(rc > soglia)
        {
            return true;
        }
        else {
            return false;
        }
    }

    public boolean stessaTarga(Polizza p)
    {
        if(this.targa == p.targa)
        {
            return true;
        }
        else
        {
            return true;
        }
    }

    public String descrizioneBreve()
    {
        return "Targa: " + this.targa + "\nIntestatario: " + this.intestatarioAuto;
        
    }







}
