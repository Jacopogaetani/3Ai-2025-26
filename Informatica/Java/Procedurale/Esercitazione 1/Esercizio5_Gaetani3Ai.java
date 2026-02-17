//Dato un voto espresso in decimi verificare se accettabile (cioè compreso fra
//uno e dieci) e comunicare se è sufficiente o insufficiente.

public class Esercizio5_Gaetani3Ai {
    public static void main(String[] args)
    {
        int voto = 7;

        if(voto <= 10 && voto >=1) {
            if (voto >= 6) {
                System.out.println(voto + "è un voto sufficiente");
            } else {
                System.out.println(voto + "non è un voto sufficiente");
            }
        }

    }
}
