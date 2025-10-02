#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
  int n= argc-1;
  pa = new int[n]; //new pointer with array size of n
  for(i=0;i<n;i++,pa++){
    *pa=atoi(argv[i+1]);
  //cin>>*pa; //if we aff pa++; after it go to the last array it will add another array
}
  /*cout<<"How many numbers? ";
  cin>>n;*/
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
   cout<<setw(3)<<*pa;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;
pa-=(n-1);
delete []pa;
return 0;
}
