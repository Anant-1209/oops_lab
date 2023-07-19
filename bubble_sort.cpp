// #include <iostream>
// #include <cstring>
// using namespace std;

// template <class T>void bubble_sort(T*arr,int n)
// {   
//     T temp;
//      for (int j = 0; j < n; j++)
//         {
//             for (int i = 1; i < n; i++)
//             {
//                 if (arr[i - 1] > arr[i])
//                 {
//                     temp = arr[i - 1];
//                     arr[i - 1] = arr[i];
//                     arr[i] = temp;
//                 }
//             }
//         }

//         for (int i = 0; i < 4; i++)
//         {
//             cout << arr[i] << endl;
//         }
// };

// int main()
// {

//     int arr[4]={3,5,4,2};
//     bubble_sort(arr,4);

//     float arra[4]={1.1 ,2.3 ,0.1 ,-1.0};
//     bubble_sort (arra,4);

//     return 0;
// }





#include<iostream>
using namespace std;

template<class x>void bubble(x*arr, int n)
{
    x temp;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        cout<<arr[i] << endl;
    }
};

int main()
{
int arr1[]={1,2,5,6,3,9};
bubble(arr1,6);
float arr2[]={-2,1.6,-5,1.9};
bubble(arr2,4);


    return 0;
}