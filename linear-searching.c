#include <stdio.h>
 
int linearSearch(int data[],int datayangdicari){
  
  //looping untuk mencari datanya
  int bykdata;
    for(int i= 0; i<bykdata;i++){       
      if(data[i]==datayangdicari)return i;
    }
 
  return -1;  
}
 
int main (){
  int data[4]={9,11,1,8}; //data
  int indexSearch = linearSearch(data,1); //(data, angka yang dicari)
 
  if(indexSearch == -1){
  printf("Data tidak ditemukan dalam array\n");
  }
  else{
  printf("Data %d ditemukan dalam array\n",data[indexSearch]);  
  }
  return 0;

 #include <stdio.h>
 
int binarySearch(int array[], int CariAngka, int left, int right) {
  if (right >= left) {
    int mid = left + (right - left) / 2;
 
    // Jika menemukan angka tengah maka return mid
    if (array[mid] == CariAngka)
      return mid;
 
    // Cari angka pada bagian kiri
    if (array[mid] > CariAngka)
      return binarySearch(array, CariAngka, left, mid - 1);
 
    // Cari angka pada bagian kanan
    return binarySearch(array, CariAngka, mid + 1, right);
  }
 
  return -1;
}
 
int main() {
  int array[] = {7, 11, 12, 23, 29, 32, 38};
  int n = sizeof(array) / sizeof(array[0]);
  int CariAngka = 32; //angka yang ingin dicari
  int hasil = binarySearch(array, CariAngka, 0, n - 1);
  
  if (hasil == -1){
    printf("Data tidak ditemukan\n");
  }
  else{
    printf("Angka %d ditemukan pada index %d\n", CariAngka, hasil);
  }
  
  return 0;
