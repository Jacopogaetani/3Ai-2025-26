package Figure;

public class Cerchio {
    float raggio;
    String nome;

    public Cerchio(float r, String n){
        raggio = r;
        nome = n;
    }


    public float circonferenza()
    {
        float circonferenza = 2 * 3.14f * raggio;
        return circonferenza;
    }

    public float area()
    {
        float area = 3.14f * (raggio * raggio);
        return area;
    }


    public String stampaInformazioni()
    {
        return "Nome figura: " + nome + "\nRaggio: " + raggio + "\nCirconferenza del cerchio: " + circonferenza() + "\nArea del cerchio: " + area() + "\n";
    }
}