
package Figure;

public class Quadrato {
    float lato;
    String nome;

    public Quadrato()
    {
        lato = 0f;
        nome = "";
    }

    public Quadrato(float l, String n)
    {
        lato = l;
        nome = n;
    }


    float area()
    {
        float area = lato * lato;
        return area;
    }

    float perimetro()
    {
        float perimetro = lato * 4;
        return perimetro;
    }

    public String stampaInformazioni()
    {
        return "Nome figura: " + nome + "\nlato: " + lato + "\nPerimetro del quadrato: " + perimetro() + "\nArea del quadrato: " + area() + "\n";
    }


}
