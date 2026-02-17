package org.example;

//Stabilire se una persona può votare alle elezioni

import java.util.Scanner;

public class Esercizio1_Gaetani3Ai {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int eta;

            System.out.println("Inserisci la tua età:");
            eta = scanner.nextInt();

        if (eta >= 18) {
            System.out.println("Puoi votare!");
        }

        else{
            System.out.println("Non puoi andare a votare, non hai raggiunto la maggiore età");
        }
        
        }
    }
