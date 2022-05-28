#include<iostream>
using namespace std;

float* getAddressOfMaxElement(float*, int);

int main()
{
   int n;
   cout << "Enter the length of the array: ";
   cin >> n;
  
   float fArray[n];
   cout << "Enter the elements into the array: ";
   for(int i = 0; i < n; i++)
       cin >> fArray[i];
   float *ptr;
   ptr = fArray;
  
   cout << endl << "Value\tAddress" << endl;
   for(int i = 0; i < n; i++)
       cout << *(ptr + i) << "\t" << ptr + i << "\n";
      
   cout << endl << "The address of the maximum value in array is: " << getAddressOfMaxElement(ptr, n);
   return 0;
}

float* getAddressOfMaxElement(float *ptr, int n)
{
   float *max = ptr;
   for(int i = 0; i < n; i++)
   {
       if(*(ptr + i) > *max)
           max = (ptr + i);
   }
   return max;
}
