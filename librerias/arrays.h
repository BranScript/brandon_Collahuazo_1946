#include<stdlib.h>
#include <ctime>
namespace vector{
    void llenar(int v[], int n){
        int i;
        for (int i = 0; i < n; i++)
        {
            v[i]=1+rand()%10;
        }
        
    }
}