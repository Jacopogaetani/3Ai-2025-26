/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package corso_gaetani;

/**
 *
 * @author Studente
 */
public class Corso_Gaetani {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        StudUniv stud1 = new StudUniv(001, 2007, "Abd", "Nekkaa", "Bologna");
        StudUniv stud2 = new StudUniv(002, 2006, "Ann", "Takamaki", "Tokyo");
        StudUniv stud3 = new StudUniv(003, 2003, "Marco", "Parini", "Sydney");
        StudUniv stud4 = new StudUniv(004, 2008, "Lorenzo", "Cavedoni", "Ferrara");
        StudUniv stud5 = new StudUniv(005, 2007, "Ale", "gotcaught", "Bologna");
        StudUniv stud6 = new StudUniv(006, 2008, "Vale", "Yu", "Pechino");
     
        
        //String nomeCorso, String docenteTitolare, String settoreScientifico, int crediti, int studentiMassimo
        Corso c1 = new Corso("Informatica", "Mario Rossi", "Tecnico", 30, 7, 5);
        c1.addStudente(stud1);
        c1.addStudente(stud2);
        c1.addStudente(stud3);
        c1.addStudente(stud4);
        c1.addStudente(stud5);
        c1.stampa();
        c1.addStudente(stud6);  
        c1.stampa();
        
        c1.restituisciMatricola();
        
        
    }
    
}
