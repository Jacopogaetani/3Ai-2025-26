package Supermercato;

public class ListaSpesa {
    private int prodottiMassimi = 10, prodottiInLista;
    Prodotto[]listaSpesa = new Prodotto[prodottiMassimi];

    public ListaSpesa() {
        prodottiInLista = 0;
    }

    public int getProdottiMassimi() {
        return prodottiMassimi;
    }

    public void setProdottiMassimi(int prodottiMassimi) {
        this.prodottiMassimi = prodottiMassimi;
    }

    public int getProdottiInLista() {
        return prodottiInLista;
    }

    public void setProdottiInLista(int prodottiInLista) {
        this.prodottiInLista = prodottiInLista;
    }

    public Prodotto[] getListaSpesa() {
        return listaSpesa;
    }

    public void setListaSpesa(Prodotto[] listaSpesa) {
        this.listaSpesa = listaSpesa;
    }

    public void aggiungiProdotto(Prodotto p)
    {
        if(prodottiInLista < prodottiMassimi)
        {
            listaSpesa[prodottiInLista] = p;
            System.out.println("Aggiunto prodotto "+ p.getDescrizioneBreve());
            prodottiInLista++;
            //Commentare qui
            System.out.println("Prodotti in lista:  "+ prodotiInLista);
        }
        else{
            System.out.println("Non è possibile aggiungere questo prodotto");
        }
    }

    public void cercaScontrino()
    {
        for(int i = 0; i < prodottiInLista; i++)
        {
            listaSpesa[i].stampa();
        }
    }

    public void calcolaTotale()
    {
        float totaleUnitario = 0, totaleScontato = 0;

        for(int i = 0; i < prodottiInLista; i++)
        {
            totaleUnitario+=listaSpesa[i].getPrezzoUnitario();
            System.out.println("Prezzo unitario dell'articolo : " + listaSpesa[i].getPrezzoUnitario() + ": " + listaSpesa[i].getPrezzoUnitario());

            System.out.println("Prezzo scontato : " + listaSpesa[i].getDescrizioneBreve() + ": " + listaSpesa[i].getPrezzoScontato());
            totaleScontato+=listaSpesa[i].getPrezzoScontato();
        }

        System.out.println("Totale unitario: "+totaleUnitario);
        System.out.println("Totale scontato: "+totaleScontato);


    }

    public String letturaNome(String nome)
    {
        for(int i = 0; i < prodottiInLista; i++)
        {
            if(nome.equals(listaSpesa[i].getDescrizioneBreve()))
            {
                System.out.println("Prodotto trovato");
                return listaSpesa[i].stampa();
            }
        }
        return "Prodotto "  + nome + " non trovato";
    }

}
