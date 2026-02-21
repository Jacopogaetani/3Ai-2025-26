package primoEsempio;

public class PrimoEsempio {
    public static void main(String[] args){
        //Nuovo oggetto di nome s1 di tipo studente
        Studente s1 = new Studente("Jacopo", "Gaetani", 17); //Usa il costruttore parametrico: ha bisogno di parametri
        s1.media = 6;
        s1.nVoti = 1;

        Studente s2 = new Studente();

        s2.nome = "Lorenzo";
        s2.cognome = "Cavedoni";
        s2.matricola = 1234;
        s2.media = 7;
        s2.nVoti = 3;

        System.out.println(s1.stampaInformazioni());
        System.out.println(s2.stampaInformazioni());
    }
}
