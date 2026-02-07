public class Esercizio1_Gaetani3Ai {
    /*1. Calcolare il perimetro di un rettangolo date le misure dell'area e della base.
     */

    public static void main(String[] args) {
        float area = 10f, base = 5f;
        float altezza;
        float perimetro;

        altezza = area / base;

        perimetro = (2 * altezza) + (2 * base);

        System.out.println("Base: " + base + "\nAltezza: " + altezza + "\nArea: " + area + "\nPerimetro: " + perimetro);

    }
}


