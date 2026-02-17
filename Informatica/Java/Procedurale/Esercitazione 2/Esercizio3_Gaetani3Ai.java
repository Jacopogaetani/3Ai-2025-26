package org.example;


//3. Determinare se un numero A è il precedente del numero B.

import java.util.Scanner;

public class Esercizio3_Gaetani3Ai {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int a, b;

        System.out.print("Inserisci a: ");
        a = scanner.nextInt();

        System.out.print("Inserisci b: ");
        b = scanner.nextInt();

        if(a == b-1)
        {
            System.out.println(a + " è il precedente di " + b);
        }else{
            System.out.println(a + " non è il precedente di " + b);
        }


        
        }
    }
