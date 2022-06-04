#include <stdio.h>
#include <stdlib.h>

int main(){
    int nrsoci;
    float utile, ires, irap, irpef, casomax, casomin, inps, rimanenze, utiledistr;

    printf("Inserire il numero dei soci : \n");
    scanf("%d",&nrsoci);

 if(nrsoci>1){
   printf("Inserire l' Utile Lordo in Euro : \n");
   scanf("%f", &utile);

   printf("\n\n");
   printf("Le imposte da sostenere sono : \n\n");

   ires=utile*24/100;
   printf("-IRES : %.2f Euro\n",ires);

   irap=utile*3.5/100;
   printf("\n-IRAP : %.2f Euro\n\n\n",irap);

   printf("\nL' utile netto rimanente e' %.2f Euro\n\n",utile-ires-irap);


   printf("\nIndicare Utile distribuito a testa in Euro : \n");
   scanf("%f",&utiledistr);

   casomin=utiledistr*23/100;
   casomax=utiledistr*43/100;
   rimanenze=utiledistr-ires-irap;

   float addreg=utile*1.4/100;


   printf("\n\nPer l' utile di %.2f Euro distribuito tra soci bisognera' versare : \n\n", utiledistr);
   printf("-IRPEF minima imponibile : %.2f Euro\n-IRPEF massima imponibile : %.2f Euro\n-Addizionale Regionale : %.2f Euro",casomin,casomax,addreg);

   float rimanenze1=utile-ires-irap-casomin*nrsoci-3500*nrsoci;
   float rimanenze2=utile-ires-irap-casomax*nrsoci-3500*nrsoci;
   printf("\n\n\n\nL' utile netto rimanente migliore e' : %.2f Euro\nL' utile netto rimanente peggiore e' : %.2f Euro\n\n\n\n", rimanenze1, rimanenze2);

 }else{

   printf("Inserire l' Utile Lordo : \n");
   scanf("%f", &utile);

   printf("\n\n");
   printf("Le imposte da sostenere sono : \n\n");

   ires=utile*24/100;
   printf("-IRES : %.2f Euro\n",ires);

   irap=utile*3.5/100;
   printf("\n-IRAP : %.2f Euro\n\n\n",irap);

   rimanenze=utile-ires-irap;
   printf("L' utile netto rimanente e' : %.2f Euro\n\n\n\n", rimanenze);
 }

}
