//there are 3 methods to make an array
// first method



/*
#include<stdio.h>
int main()
{
    int arr[5]={1,23,7,98,56};
    
    return 0;
}



*/

/*
//second method

#include<stdio.h>
int main()
{
    int arr[] = {1,96,15,154,48,126,15};
    
    return 0;

}

*/
// third method
/*
#include<stdio.h>
int main()
{
    int arr[5];
    arr[0]=56;
    arr[1]=10;
    arr[2]=748;
    arr[3]=354;
    arr[4]=352;
   return 0;
}
*/
//fourth method


#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);

    }
    
    return 0;
}


