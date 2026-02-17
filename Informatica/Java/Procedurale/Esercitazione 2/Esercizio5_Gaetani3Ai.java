package org.example;

import java.util.Scanner;

//. Dati due numeri naturali A e B, con A diverso da B, sottrarre il più piccolo
//dal più grande

public class Esercizio5_Gaetani3Ai {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        int a, b, risultato;

        System.out.print("Inserisci a: ");
        a = scanner.nextInt();

        System.out.print("Inserisci b: ");
        b = scanner.nextInt();

        if(a < b)
        {
            risultato = b - a;
            System.out.println("Il risultato di " + b + " - " + a + "è " + risultato);
        }
        else if(a > b)
        {
            risultato = a - b;
            System.out.println("Il risultato di " + a + " - " + b + " è " + risultato);
        }else{
            System.out.println(a + " è uguale a " + b);
        }

    }
}
