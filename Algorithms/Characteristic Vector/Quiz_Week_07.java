package com.company;

public class Main {
    public static void main(String[] args) {

        char[] U = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        char[] A = {'c', 'e', 'f', 'h'};
        char[] B = {'a', 'c', 'e', 'h'};

        int[] karA = getCharacteristicVector(U,A);
        char[] intersection = intersection(U,A,B);
        int[] kar_intersection = getCharacteristicVector(U,intersection);

        System.out.printf("A ∩ B = ");
        for (int eleman:kar_intersection ) {
            System.out.print(eleman);
        }
        System.out.print(" = ");

        for (char eleman: intersection) {
            System.out.print(eleman+ " ");
        }
        System.out.println();
        char[] compB = complement(U,B);
        int[] karBComp = getCharacteristicVector(U,compB);

        System.out.printf("U / B = ");
        for (int eleman:karBComp ) {
            System.out.print(eleman);
        }
        System.out.print(" = ");

        for (char eleman: compB) {
            System.out.print(eleman+ " ");
        }

    }

    public static int[] getCharacteristicVector(char[] U, char[] arr) {
        int[] karVektor = new int[U.length];
        for (int i = 0; i < U.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if(U[i] == arr[j]){
                    karVektor[i] = 1;
                    break;
                }
            }
        }
        return karVektor;
    }

    public static char [] intersection(char[] U, char[] B, char[] A){
        int ortakSayisi = 0;

        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j < B.length; j++) {
                if(A[i] == B[j]) ortakSayisi++;
            }
        }
        char[] intersection = new char[ortakSayisi];
        int k = 0;
        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j < B.length; j++) {
                if(A[i] == B[j]) {
                    intersection[k++] = A[i];
                    break;
                }
            }
        }

        return intersection;
    }

    public static char [] complement(char[] U, char[] arr){
        char[] complement = new char[U.length - arr.length];
        int k = 0;
        for (int i = 0; i < U.length; i++) {
            boolean isExist = false;
            for (int j = 0; j < arr.length; j++) {
                if(U[i] == arr[j]){
                    isExist = true;
                    break;
                }
            }
            if(!isExist){
                complement[k++] = U[i];
            }
        }

        return complement;
    }

}
