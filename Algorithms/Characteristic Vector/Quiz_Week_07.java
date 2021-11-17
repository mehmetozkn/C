package com.company;

public class Quiz_Week_07 {

    public static void main(String[] args) {

        char[] uni = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        char[] a = {'c', 'e', 'f', 'h'};
        char[] b = {'a', 'c', 'e', 'h'};

        int[] vectora = getCharacteristicVector(uni, a);
        int[] vectorb = getCharacteristicVector(uni, b);
        int[] vector1 = new int[uni.length];

        for (int i = 0; i < uni.length; i++) {
            if (vectora[i] != 0 && vectorb[i] != 0) {
                vector1[i] = 1;
            }
        }

        System.out.print("A  ∩  B = ");
        print(uni, vector1);

        System.out.println("");
        int[] vector2 = getCharacteristicVector2(uni, b);
        System.out.print("Complement of B = ");
        print(uni, vector2);

    }

    public static int[] getCharacteristicVector(char[] uni, char[] arr) {

        int sum[] = new int[uni.length];
        for (int i = 0; i < uni.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if (uni[i] == arr[j]) {
                    sum[i] = 1;
                    break;
                } else {
                    sum[i] = 0;
                }
            }
        }
        return sum;
    }

    public static int[] getCharacteristicVector2(char[] uni, char[] arr) {
        int sum[] = new int[uni.length];
        for (int i = 0; i < uni.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if (uni[i] == arr[j]) {
                    sum[i] = 0;
                    break;
                } else {
                    sum[i] = 1;
                }
            }
        }
        return sum;
    }

    public static void print(char[] uni, int vector[]) {

        for (int i = 0; i < vector.length; i++) {
            System.out.print(vector[i]);
        }
        System.out.print(" = ");
        for (int i = 0; i < vector.length; i++) {
            if (vector[i] == 1) {
                System.out.print(uni[i] + " ");
            }
        }

    }

}