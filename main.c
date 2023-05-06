#include <stdio.h>

int main() {
   int n, i, x;
   int arr[100];

   // Dizinin boyutunu kullanýcýdan istedim
   printf("Dizinin boyutunu girin: ");
   scanf("%d", &n);

   // Dizinin elemanlarýný kullanýcýdan aldým
   for(i = 0; i < n; i++) {
      printf("Dizinin %d. elemanýný girin: ", i+1);
      scanf("%d", &arr[i]);
   }

   // Aranacak elemaný kullanýcýdan istedim
   printf("Aranacak elemaný girin: ");
   scanf("%d", &x);

   // Linear Search algoritmasýyla arama iþlemini gerçekleþtirddiö
   int A = 0;
   for(i = 0; i < n; i++) {
      if(arr[i] == x) {
         A = 1;
         break;
      }
   }

   // Sonucu ekrana yazdýrdým
   if(A) {
      printf("Aranan eleman dizide bulundu.");
   } else {
      printf("Aranan eleman dizide bulunamadý.");
   }

   return 0;
}
