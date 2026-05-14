package Supermercato;

public class Supermercato {
    public static void main(String[] args) {
        ListaSpesa lista = new ListaSpesa();

        Alimentari a1 = new Alimentari(0001, "pane", 1.0f, 5);
        NonAlimentari n1 = new NonAlimentari(0010, "quaderno", 2.5f, "carta");
        Alimentari a2 = new Alimentari(0011, "Gelato", 2.0f, 5);
        NonAlimentari n2 = new NonAlimentari(0100, "coltello", 5.0f, "metallo");
        Alimentari a3 = new Alimentari(1000, "ciambelle", 3.0f, 3);

        lista.aggiungiProdotto(a1);
        lista.aggiungiProdotto(n1);
        lista.aggiungiProdotto(a2);
        lista.aggiungiProdotto(n2);
        lista.aggiungiProdotto(a3);


        System.out.println(a1.stampa());
        System.out.println(a1.scontoGiorniConservazione());
        System.out.println(a2.scontoGiorniConservazione());
        System.out.println(a3.scontoGiorniConservazione());

        System.out.println(n1.scontoMateriale());
        System.out.println(n2.scontoMateriale());

        n2.applicaSconto();
        lista.letturaNome("quaderno");
        lista.letturaNome("Mouse");
        lista.calcolaTotale();

    }
}
