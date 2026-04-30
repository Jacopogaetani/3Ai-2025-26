/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package corso_gaetani;

import java.time.LocalDate;

public class StudUniv {
    private int matricola, annoDiNascita;
    public String nome, cognome, provincia;

    public int getMatricola() {
        return matricola;
    }

    public void setMatricola(int matricola) {
        this.matricola = matricola;
    }

    public int getAnnoDiNascita() {
        return annoDiNascita;
    }

    public void setAnnoDiNascita(int annoDiNascita) {
        this.annoDiNascita = annoDiNascita;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCognome() {
        return cognome;
    }

    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    public String getProvincia() {
        return provincia;
    }

    public void setProvincia(String provincia) {
        this.provincia = provincia;
    }
    
    public StudUniv(int matricola, int annoDiNascita, String nome, String cognome, String provincia)
    {
        this.matricola = matricola;
        this.annoDiNascita = annoDiNascita;
        this.nome = nome;
        this.cognome = cognome;
        this.provincia = provincia;
           
    }
    
    public int eta()
    {
        int annoCorrente = LocalDate.now().getYear();
        int eta = annoDiNascita - annoCorrente;
        return eta;
    }        
              
            
}
