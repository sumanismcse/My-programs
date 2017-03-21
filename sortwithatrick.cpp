#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
    ar=new int[ar_size];
    int i,temp;
    for(i=ar_size-1;i>=0;i--)
        {
        if(ar[i]<ar[i-1])
            {
            temp=ar[i];
            ar[i]=ar[i-1];
        }
        if(ar[i]<temp)
            {
            ar[i+1]=temp;
        }
    }

}
int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
    return 0;
}

