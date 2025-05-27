#include <stdio.h>

int
check_pair_sum(int * arr, int len, int n)
{
        for(int i=0; i <=len; i++) if((arr[i]+arr[i+1]) == n) return 0;
        return -1;

}
int
check_truple(int * mas, int len)
{
        for(int i=0; i<=len; i++) for(int j=0; j<=len; j++) if(mas[i] == mas[j] && mas[i] == mas[j+1] && mas[i] == mas[j+2]) return 0;
        return -1;
}

int
check_pair(int * mas, int len)
{
        for(int i=0; i<=len; i++) for(int j=0; j<=len; j++) if(mas[j] == mas[i] && mas[j+1] == mas[i]) return 0;
        return -1;
}


int
is_ordinal(int * arr, int len)
{
        for(int i=0; i<=len-1; i++) if((arr[i] + 1) != arr[i+1]) return -1;
        return 0;
}

int
has_cross(int * arr, int * mas, int arr_len, int mas_len)
{
        /* Geometry function for search intersection of two rays*/
        for(int i=0; i<arr_len; i++) for(int j=0; j<mas_len; j++) if(mas[j] == arr[i]) return arr[i];
        return -1;

}

float
integral_area(float * arr, int len, float width)
{
        /* Function for calculate area with integral
         * method
         * Parameters:
         * arr: list of heights
         * len: length of list
         * width: width of step
         */
        float area = 0;
        for(int i=0; i<len; i++) area += arr[i] * width;
        return area;
}

int
main(void)
{

        int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
        int mas[4] = {3, 8, 8, 8};
        float heights[5] = {1.34, 1.44, 1.55, 1.65, 1.75};
        return 0;
}