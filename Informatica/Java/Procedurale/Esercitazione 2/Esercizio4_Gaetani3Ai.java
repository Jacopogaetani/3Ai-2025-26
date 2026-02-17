package org.example;

import java.util.Scanner;

//Dati due numeri A e B controllare se A è minore, uguale o maggiore di B

public class Esercizio4_Gaetani3Ai {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        int a, b;

        System.out.print("Inserisci a: ");
        a = scanner.nextInt();

        System.out.print("Inserisci b: ");
        b = scanner.nextInt();

        if(a < b)
        {
            System.out.println(a + " è minore di " + b);
        }
        else if(a > b)
        {
            System.out.println(a + " è maggiore di " + b);
        }else{
            System.out.println(a + " è uguale a " + b);
        }

    }
}
