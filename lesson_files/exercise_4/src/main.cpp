#include <iostream>

auto main() -> int
{
    //init int for length of array 
    int noe = 0;

    std::cout << "Number of Elements: ";
    scanf("%d", &noe);

    int* arr_ptr = new int[noe];

    if(arr_ptr == NULL)
    {
        //status
        std::cout << "Memory couldn't be allocated" << std::endl;
        exit(0);
        //stop program
    }
    else
    {
        //status
        std::cout << "Memory succesfully allocated!" << std::endl;
        //do things - set values for array
        for (int i = 0; i < noe; ++i) //1. i is set to 0 - 2. i is compared to noe - 3. fnctn is used - 4. i is set one up - 5. return
        {
            arr_ptr[i] = i + 1;
        }
        //array values are set

        //print arrray values
        std::cout << "The elements of the array are: ";
            for (int i = 0; i < noe; ++i)
            {
                std::cout << arr_ptr[i] << ", ";
            }
        std::cout << std::endl;

    }
    //free up memory space
    delete[] arr_ptr; 

    return 0;
}