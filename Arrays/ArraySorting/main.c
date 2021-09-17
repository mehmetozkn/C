#include <stdio.h>



//Englsih - Sorting the elements of an array in reverse without using another array.
//Turkish - Baska bir dizi kullanmadan bir dizinin elemanlarini tersten siralama.
int main()
{

    int size;
    int i;
    int number;
    int temp;


    printf("Array Size : ");
    scanf("%d",&size);

    int array[size];


    for(i = 0 ; i < size ; i++)
    {
        printf("%d. Eleman : ",(i+1));
        scanf("%d",&number);
        array[i] = number;

    }
    printf("\nArray : ");

    for(i = 0 ; i < size ; i++)
    {

        if((i+1) < size)
        {

            printf("%d, ",array[i]);
        }
        else
        {

            printf("%d",array[i]);

        }

    }
    int j = size-1;
    for(i = 0 ; i < size ; i++)
    {
        if(size%2 != 0)
        {
            if(i != j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                j--;
            }
            else
            {
                break;
            }

        }
        else
        {
            if(i != j+1)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                j--;


            }
            else
            {
                break;

            }


        }


    }


    for(i = size-1 ; i>= 0; i--)
    {



    }

    printf("\nInverted Array : ");
    for(i = 0 ; i < size ; i++)
    {

        if((i+1) < size)
        {

            printf("%d, ",array[i]);
        }
        else
        {

            printf("%d",array[i]);

        }

    }


    return 0;
}
