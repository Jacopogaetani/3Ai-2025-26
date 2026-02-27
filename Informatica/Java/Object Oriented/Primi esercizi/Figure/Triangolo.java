package Figure;

public class Triangolo {
    float latoA, latoB, base, altezza;
    String nome;

    public Triangolo(float a, float b, float ba, float h, String n)
    {
        //ba si riferisce alla base del triangolo
        base = ba;
        altezza = h;
        latoA = a;
        latoB = b;
        nome = n;
    }

    float area()
    {
        float area = (base * altezza) / 2;
        return area;
    }

    float perimetro()
    {
        float perimetro = latoA + latoB + base;
        return perimetro;
    }

    String stampaInformazioni()
    {
        return "Nome figura: " + nome + "\nBase: " + base + "\nAltezza: " + altezza  + "\nPerimetro del triangolo: " + perimetro() + "\nArea del rettangolo: " + area() + "\n";

    }





}
