#include <stdio.h>

int main() {
   int n, i, x;
   int arr[100];

   // Dizinin boyutunu kullan�c�dan istedim
   printf("Dizinin boyutunu girin: ");
   scanf("%d", &n);

   // Dizinin elemanlar�n� kullan�c�dan ald�m
   for(i = 0; i < n; i++) {
      printf("Dizinin %d. eleman�n� girin: ", i+1);
      scanf("%d", &arr[i]);
   }

   // Aranacak eleman� kullan�c�dan istedim
   printf("Aranacak eleman� girin: ");
   scanf("%d", &x);

   // Linear Search algoritmas�yla arama i�lemini ger�ekle�tirddi�
   int A = 0;
   for(i = 0; i < n; i++) {
      if(arr[i] == x) {
         A = 1;
         break;
      }
   }

   // Sonucu ekrana yazd�rd�m
   if(A) {
      printf("Aranan eleman dizide bulundu.");
   } else {
      printf("Aranan eleman dizide bulunamad�.");
   }

   return 0;
}
