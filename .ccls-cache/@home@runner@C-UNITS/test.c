#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    size_t size;
    int array[];
}data_t;

data_t *addNumber(data_t **data, int number)
{
    data_t *tmp;
    size_t size = 0;

    if(*data)
    {
        size = (*data) -> size;
    }

    tmp = realloc(*data, (size + 1) * sizeof(int) + sizeof(**data));
    if(tmp)
    {
        *data = tmp;
        (*data) -> size = size + 1;
        (*data) -> array[size] = number;
    }
    return tmp;
}

int main()
{
    data_t *array = NULL;
    char str[500];

    while(fgets(str, 500, stdin) != NULL)
    {
        int number;

        if(sscanf(str, "%d", &number) != 1) break;
        if(!addNumber(&array, number))
        {
            printf("Error adding number\n");
        }
    }
    if(array)
    {
       for(size_t index = 0; index < array -> size; index ++)
       {
           printf("Index %zu Number: %d\n", index, array -> array[index]);
       }
    }
}
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    size_t size;
    int array[];
}data_t;

data_t *addNumber(data_t **data, int number)
{
    data_t *tmp;
    size_t size = 0;

    if(*data)
    {
        size = (*data) -> size;
    }

    tmp = realloc(*data, (size + 1) * sizeof(int) + sizeof(**data));
    if(tmp)
    {
        *data = tmp;
        (*data) -> size = size + 1;
        (*data) -> array[size] = number;
    }
    return tmp;
}

int main()
{
    data_t *array = NULL;
    char str[500];

    while(fgets(str, 500, stdin) != NULL)
    {
        int number;

        if(sscanf(str, "%d", &number) != 1) break;
        if(!addNumber(&array, number))
        {
            printf("Error adding number\n");
        }
    }
    if(array)
    {
       for(size_t index = 0; index < array -> size; index ++)
       {
           printf("Index %zu Number: %d\n", index, array -> array[index]);
       }
    }
}
