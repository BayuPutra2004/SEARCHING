	#include<stdio.h>
int binaryIteratif(int data[],int n,int cari,int kiri,int kanan){
   
   int mid,index=0;
 
   while(kiri<=kanan){
    mid=(kiri+kanan)/2;
    
   if(cari==data[mid]){
      return mid;
   }
    
    else if(cari>data[mid]){
     kiri = mid+1;
  }
      
    else{
     kanan = mid -1;  
  }
    
   }
  return -1;
}
int main(){
  int data[100];
  int n;
  int cari;
  int index;
  int kiri,kanan;
  
  printf("Masukkan banyaknya data : ");
  scanf("%d",&n);
  printf("Masukkan %d angka : ", n);
  for(int i=0;i<n;i++){
     scanf("%d",&data[i]);
  }
 
 
  printf("Masukkan angka yang ingin dicari: ");
  scanf("%d",&cari);
 
  kiri=0,kanan=n-1;
  index=binaryIteratif(data,n,cari,kiri,kanan);
  
  if(index==0){
      printf("Data tidak ditemukan.\n");
  }
 
  else{
      printf("Angka %d ditemukan pada index ke %d\n",cari,index);
  }
  
 return 0;
 }
 
 
