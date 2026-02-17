package org.example;


//2. Dati due numeri A e B verificare se A è il quadrato di B.

import java.util.Scanner;

public class Esercizio2_Gaetani3Ai {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int a, b;

        System.out.print("Inserisci a: ");
        a = scanner.nextInt();

        System.out.print("Inserisci b: ");
        b = scanner.nextInt();

        if(a == b*b)
        {
            System.out.println(a + " è il quadrato di " + b);
        }else{
            System.out.println(a + " non è il quadrato di " + b);
        }


        
        }
    }
