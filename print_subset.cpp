#include<iostream>
using namespace std;
void printSubsetsOfArray(int input[],int size,int output[],int m)
{
  int newoutput[10000];
  if(size==0)  //base case
  {
    for(int i=0;output[i]!='\0';i++)
     cout<<output[i]<<" ";
    cout << endl;
      return;
  }
  printSubsetsOfArray(input+1,size-1,output,m);
  //now for a function which will consider the output
  for(int i=0;i<m;i++)
  {
    newoutput[i]=output[i];
  }
  newoutput[m]=input[0];
  printSubsetsOfArray(input+1,size-1,newoutput,m+1);
}
void printSubsetsOfArray(int input[], int size) {
  int output[400];
printSubsetsOfArray(input,size,output,0);
}
int main()
{
int a[100000];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
printSubsetsOfArray(a,n);
}
