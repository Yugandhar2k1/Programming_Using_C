#include<stdio.h>
#include<math.h>

void index_calulation(int *array, int size) {
    int sum = 0, max_sum = 0;
    for (int index = 0; index < size; index++) 
    {
        sum = 0; 
        sum = sum + array[index];
        if(index == 0)
        {
            int count = 1;
            while (count + index < size) 
            {
                sum = sum + array[count + index];
                count++;
            }
            printf("Sum at index if %d: %d\n", index, sum);
            if (sum > max_sum) 
            {
                max_sum = sum; 
            }
        }
        else if(index >= 1)
        {
            int calc = size - index;
            if (calc >=5)
            {
                int count = 1;
                while (count + index < size) 
                {
                    sum = sum + array[count + index];
                    count++;
                }
                printf("Sum at index else if if %d: %d\n", index, sum);
                if (sum > max_sum) 
                {
                    max_sum = sum; 
                }
            }
            else
            {
                sum = array[index] + array[index+1] + array[index+2];
                printf("Sum at index else if else %d: %d\n", index, sum);
                if (sum > max_sum) 
                {
                max_sum = sum; 
                }
            }
        }
    }
    printf("Max sum: %d\n", max_sum); 
}

void main() {
    static int input_arr[6] = {-3, 2, 3, -4, 3, 1};
    int arr_size = sizeof(input_arr) / sizeof(input_arr[0]);
    int sum = 0;
    printf("Input array: ");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", input_arr[i]);
    }
    printf("\nSize of input array: %d\n", arr_size);
    index_calulation(input_arr, arr_size);
}
