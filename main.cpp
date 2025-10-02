#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
//int a[SIZE] ={1,2,3,4,5,6,7,8,9,10}; 
int n;
  cout<<"How many numbers? ";
  cin>>n;
pa = new int[n]; //new pointer with array size of n
for(i=0;i<n;i++){
  cin>>*pa;
  pa++;
}
pa-=n; //reset it to be @ the beginning
cout<<"Original: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;6
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pb=pa; //Since pa at the last, we want pb to be the last too
pa-=(n-1);  
for (i=0; i<n/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa-=n/2;
cout<<"Reversed: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

delete[]pa;
return 0;
}
