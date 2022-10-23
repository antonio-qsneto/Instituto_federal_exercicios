
#include<stdio.h>


void push(int element[], int size, int array[]){

        int index = 0;

        for (int i = 0; i < 5; i++)
        {
                if (element[i]>= 5)
                {
                        array[index] = element[i];
                        index++;
                }
                
        }

        for (int i = 0; i < 5; i++)
        {
                printf("[%d] ", array[i]);
        }
        

}

int main () {


        int aprovados[5];
        int element[5] = {5, 8, 2, 7, 1};


        push(element, 5, aprovados);



        return 0;
}