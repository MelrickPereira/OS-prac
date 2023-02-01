#include <iostream>
#include <conio.h>

using namespace std;

int main()
{


int mem_arr[7] = {0, 10, 0, 8, 0, 0, 15}; 
// Sample Main Memory Array.
// 0s represent occupied Partitions.
// A non-zero Integer 'n' represents a Hole of size 'n'.

// First fit
int incom_process_size = 3;

int first_fit_holder = 0;
for (int i = 0; i < 7; i++)
{
    if (mem_arr[i] >= incom_process_size)
        {
            first_fit_holder = mem_arr[i];
            break;
        }
}


// Best fit

int best_fit_holder = 0;
for (int i = 0; i < 7; i++)
{
    if (mem_arr[i] >= incom_process_size && mem_arr[i] <= best_fit_holder)
        best_fit_holder = mem_arr[i];
    else if (best_fit_holder == 0 && mem_arr[i] >= incom_process_size)
        best_fit_holder = mem_arr[i]; 
}

int worst_fit_holder = 0;

for (int i = 0; i < 7; i++)
{
    if (mem_arr[i] >= incom_process_size && mem_arr[i] >= worst_fit_holder)
        worst_fit_holder = mem_arr[i];
    else if (worst_fit_holder == 0 && mem_arr[i] >= incom_process_size)
        worst_fit_holder = mem_arr[i]; 
}

cout<<"First Fit: "<<first_fit_holder<<endl;
cout<<"Best Fit: "<<best_fit_holder<<endl;
cout<<"Worst Fit: "<<worst_fit_holder<<endl;

}

