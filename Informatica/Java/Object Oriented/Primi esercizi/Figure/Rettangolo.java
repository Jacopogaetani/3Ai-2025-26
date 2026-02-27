package Figure;

public class Rettangolo {
    float base, altezza;
    String nome;

    public Rettangolo(float b, float h, String n)
    {
        base = b;
        altezza = h;
        nome = n;
    }

    public float perimetro()
    {
        float perimetro = (base*2) + (altezza*2);
        return perimetro;
    }

    public float area()
    {
        float area = base * altezza;
        return area;
    }

    public String stampaInformazioni()
    {
        return "Nome figura: " + nome + "\nBase: " + base + "\nAltezza: " + altezza  + "\nPerimetro del rettangolo: " + perimetro() + "\nArea del rettangolo: " + area() + "\n";
    }





}
