
#include <locale.h> // veya C++ için <clocale>
#include <string.h>
#include <iostream>

int main() {
  setlocale(LC_ALL, "Turkish");
  // printf("Türkçe karakter yazdırmak için örnek kod\n");
  // printf("setlocale fonksiyonu olmadan çalıştırınca ekrana saçmasapan bir yazı bastırır.\n");

  std::string s;
  std::cin>>s;
  while(s.length()<3) s='0'+s;
  switch(s[0]){
    case '2': printf("iki"); break;
    case '3': printf("üç"); break;
    case '4': printf("dört"); break;
    case '5': printf("beş"); break;
    case '6': printf("altı"); break;
    case '7': printf("yedi"); break;
    case '8': printf("sekiz"); break;
    case '9': printf("dokuz"); break;
  }
  if (s[0]!='0')
  {
    printf("yüz");
  }

  switch(s[1]){
    case '1': printf("on"); break;
    case '2': printf("yirmi"); break;
    case '3': printf("otuz"); break;
    case '4': printf("kırk"); break;
    case '5': printf("elli"); break;
    case '6': printf("altmış"); break;
    case '7': printf("yetmiş"); break;
    case '8': printf("seksen"); break;
    case '9': printf("doksan"); break;
  }
  switch(s[2]){
    case '1': printf("bir"); break;
    case '2': printf("iki"); break;
    case '3': printf("üç"); break;
    case '4': printf("dört"); break;
    case '5': printf("beş"); break;
    case '6': printf("altı"); break;
    case '7': printf("yedi"); break;
    case '8': printf("sekiz"); break;
    case '9': printf("dokuz"); break;
  }

  if (s=="000")
  {
    printf("sıfır");
  }
  printf("\n");
  return 0;
}