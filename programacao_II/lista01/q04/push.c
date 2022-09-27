
#include<stdio.h>


void push(int array[], int size, int element[]){

        for (int i = 0; i < size; i++)
        {       
                array[i] = 0;
        }

        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        if (array[i] == 0)
                        {
                                array[i] = element[j];
                                break;
                        }
                }
        }
        for (int i = 0; i < 5; i++)
        {
                printf("[%d] ", array[i]);
        }
        

}



int main () {


        int array[5];
        int element[3] = {5, 8, 2};


        push(array, 5, element);



        return 0;
}