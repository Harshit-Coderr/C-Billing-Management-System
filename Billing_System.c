#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include<time.h>

int main()
{
   long long int number, id;
   int number1, name1;
   float CGST, SGST, grand;
   int foundation, wine, concealer, lip, soda, eyeshadow, mascara, eyeliner, blush, lip_gloss, kajal, juice, sugar, tea, qt_gro_sum, qt_cos_sum;
   int wheat, rice, coffee, almods, oil, salt, energe_drink, milk, almods_shake, Tonic_water, bev_sum, cos_sum, gro_sum, qt_bev_sum, all_sum;
   char name[50];
   time_t t;
   printf("\t\t\t\t\t--------------------------------\t\t\t\t\t\n");
   printf("\t\t\t\t\t\t\e[1;34m BILLIYING SYSTEM \e[0m\t\t\t\t\t\t\n");
   printf("\t\t\t\t\t--------------------------------\t\t\t\t\t\n");
   printf("\n\n\033[1mCustomer Detail\033[0m\n");
   printf("\nCustomer  Name                  :  ");
   fgets(name, 50, stdin);

   if (isalpha(name[0]) && strspn(name, "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ") == strlen(name) - 1)
   {
      printf("\nCustomer Number (10 digit )     :  ");
      scanf("%lld", &number);
      if (number > 1000000000 && number < 10000000000)
      {
         printf("\nCustomer ID                     :  ");
         scanf("%11d", &id);
         if (number > 1000000000 && number < 10000000000)
         {

            printf("\e[4;36;1mCOSMETICS\e[0m\n\n");
            printf("\t\e[1mITEMS        PRICE        QUANTITY\e[0m\n\n");
            printf("\tFoundation  ( RS 250 )   :  ");
            scanf("%d", &foundation);
            printf("\tConcealer   ( RS 355 )   :  ");
            scanf("%d", &concealer);
            printf("\tEyeshadow   ( RS 535 )   :  ");
            scanf("%d", &eyeshadow);
            printf("\tMascara     ( RS 380 )   :  ");
            scanf("%d", &mascara);
            printf("\tEyeliner    ( RS 730 )   :  ");
            scanf("%d", &eyeliner);
            printf("\tBlush       ( RS 125 )   :  ");
            scanf("%d", &blush);
            printf("\tLip Gloss   ( RS 235 )   :  ");
            scanf("%d", &lip_gloss);
            printf("\tKajal       ( RS 145 )   :  ");
            scanf("%d", &kajal);
            printf("\tLipstick    ( RS 100 )   :  ");
            scanf("%d", &lip);

            printf("----------------------------------------\n\n");
            printf("\e[4;36;1mGROCERIES\e[0m\n\n");
            printf("\t\e[1mITEMS      PRICE          QUANTITY\e[0m\n\n");
            printf("\t Sugar   ( RS 45/Kg )     :  ");
            scanf("%d", &sugar);
            printf("\t Tea     ( RS 25/Pkt )    :  ");
            scanf("%d", &tea);
            printf("\t Rice    ( RS 27/Kg )     :  ");
            scanf("%d", &rice);
            printf("\t Wheat   ( RS 28/Kg )     :  ");
            scanf("%d", &wheat);
            printf("\t Coffee  ( RS 45/Kg )     :  ");
            scanf("%d", &coffee);
            printf("\t Oil     ( RS 45/Lt )     :  ");
            scanf("%d", &oil);
            printf("\t Salt    ( RS 45/Pkt )    :  ");
            scanf("%d", &salt);
            printf("\t Almods  ( RS 245/Kg )    :  ");
            scanf("%d", &almods);
            printf("----------------------------------------\n\n");

            printf("\e[4;36;1mBEVERAGE\e[0m\n\n");
            printf("\t\e[1mITEMS          PRICE            QUANTITY\e[0m\n\n");
            printf("\tEnerge drink   ( RS 45/pice )   :  ");
            scanf("%d", &energe_drink);
            printf("\tMilk           ( RS 40/Lt )     :  ");
            scanf("%d", &milk);
            printf("\tAlmod Shake    ( RS 100/Lt )    :  ");
            scanf("%d", &almods_shake);
            printf("\tJuice          ( RS 145/Lt )    :  ");
            scanf("%d", &juice);
            printf("\tTonic Water    ( RS 150/Lt )    :  ");
            scanf("%d", &Tonic_water);
            printf("\tWine           ( Rs 599/Lt )    :  ");
            scanf("%d", &wine);
            printf("\tSoda           ( Rs 30/Lt )     :  ");
            scanf("%d", &soda);
            printf("----------------------------------------------\n\n\n");

            printf("\t\t\t\t\t\t  ---------------------------------\t\t\t\t\t\n");
            printf("\t\t\t\t\t\t\t\e[1;34m    TOTAL  AMOUNT \e[0m\t\t\t\t\t\t\n");
            printf("\t\t\t\t\t\t  ---------------------------------\t\t\t\t\t\n\n\n");

            printf("----------------------------------------\t");
            printf("----------------------------------------\t");
            printf("----------------------------------------\n");
            printf("|\t\e[1;34m    COSMETICS                  \e[0m|\t");
            printf("|\t\e[1;34m     GROCERIES                 \e[0m|\t");
            printf("|\t\t\e[1;34m BEVERAGE              \e[0m|\t");
            printf("\n----------------------------------------\t");
            printf("----------------------------------------\t");
            printf("----------------------------------------\t");

            printf("\n\n\e[1;4mProduct Name        Quantity       Price\e[0m");
            printf("\t\e[1;4mProduct Name        Quantity       Price\e[0m");
            printf("\t\e[1;4mProduct Name        Quantity       Price\e[0m");
            printf("\nFoundation (RS 250)    %d      :    %d", foundation, 250 * foundation);
            printf("\t\tSugar    (RS 45/Kg)    %d      :    %d", sugar, 45 * sugar);
            printf("\t\tMilk     (RS 40/Lt)    %d      :    %d", milk, 40 * milk);
            printf("\nConcealer  (RS 355)    %d      :    %d", concealer, 355 * concealer);
            printf("\t\tTea      (RS 25/Pkt)   %d      :    %d", tea, 25 * tea);
            printf("\t\tJuice    (RS 145/Lt)   %d      :    %d", juice, 145 * juice);
            printf("\nEyeshadow  (RS 535)    %d      :    %d", eyeshadow, 535 * eyeshadow);
            printf("\t\tRice     (RS 27/Kg)    %d      :    %d", rice, 27 * rice);
            printf("\t\tWine     (Rs 599/Lt)   %d      :    %d", wine, 599 * wine);
            printf("\nMascara    (RS 380)    %d      :    %d", mascara, 380 * mascara);
            printf("\t\tWheat    (RS 28/Kg)    %d      :    %d", wheat, 28 * wheat);
            printf("\t\tSoda     (Rs 30/Lt)    %d      :    %d", soda, 30 * soda);
            printf("\nEyeliner   (RS 730)    %d      :    %d", eyeliner, 730 * eyeliner);
            printf("\t\tCoffee   (RS 45/Kg)    %d      :    %d", coffee, 45 * coffee);
            printf("\t\tAlmod Shake(RS 100/Lt) %d      :    %d", almods_shake, 100 * almods_shake);
            printf("\nBlush      (RS 125)    %d      :    %d", blush, 125 * blush);
            printf("\t\tOil      (RS 45/Lt)    %d      :    %d", oil, 45 * oil);
            printf("\t\tTonic Water(RS 150/Lt) %d      :    %d", Tonic_water, 150 * Tonic_water);
            printf("\nLip Gloss  (RS 235)    %d      :    %d", lip_gloss, 235 * lip_gloss);
            printf("\t\tSalt     (RS 45/Pkt)   %d      :    %d", salt, 45 * salt);
            printf("\t\tEnerge drink(RS 45/pice) %d    :    %d", energe_drink, 45 * energe_drink);
            printf("\nKajal      (RS 145)    %d      :    %d", kajal, 145 * kajal);
            printf("\t\tAlmods   (RS 245/Kg)   %d      :    %d", almods, 245 * almods);
            printf("\nLipstick ( RS 100 )    %d      :    %d", lip, 100 * lip);

            cos_sum = (250 * foundation) + (355 * concealer) + (535 * eyeshadow) + (380 * mascara) + (730 * eyeliner) + (125 * blush) + (235 * lip_gloss) + (145 * kajal) + (100 * lip);
            gro_sum = (45 * sugar) + (25 * tea) + (27 * rice) + (28 * wheat) + (45 * coffee) + (45 * oil) + (45 * salt) + (245 * almods);
            bev_sum = (45 * energe_drink) + (40 * milk) + (100 * almods_shake) + (145 * juice) + (150 * Tonic_water) + (599 * wine) + (30 * soda);
            qt_gro_sum = sugar + tea + rice + wheat + coffee + oil + salt + almods;
            qt_cos_sum = foundation + concealer + eyeshadow + mascara + eyeliner + blush + lip_gloss + kajal + lip;
            qt_bev_sum = energe_drink + milk + almods_shake + juice + Tonic_water + wine + soda;
            all_sum = cos_sum + gro_sum + bev_sum;
            CGST = (2.5 * all_sum) / 100;
            SGST = (2.5 * all_sum) / 100;
            grand = CGST + SGST + all_sum;

            printf("\n\e[1m----------------------------------------\e[0m\t");
            printf("\e[1m----------------------------------------\e[0m\t");
            printf("\e[1m----------------------------------------\e[0m\n");
            printf("\e[1m Cosmetic   Total   Price    =    %d\e[0m", cos_sum);
            printf("\t\t\e[1m Grocery    Total   Price    =    %d\e[0m", gro_sum);
            printf("\t\t\e[1m Beverage   Total   Price    =    %d\e[0m", bev_sum);
            printf("\n\e[1m----------------------------------------\e[0m\t");
            printf("\e[1m----------------------------------------\e[0m\t");
            printf("\e[1m----------------------------------------\e[0m\n");
            printf("---------------------------------------------------------------------");
            printf("--------------------------------------------------------------------\n\n");

            number1 = number;
            printf("\t\t\t\t\t\t\t\t\e[1;4;33m KASHI  BAZAAR\e[0m");
            printf("\n\t\t\t\t\t\t\t      Sigra Rd,  Varanasi");
            printf("\n\t\t\t\t\t\t\t     Uttar Pradesh-400703");
            printf("\n\t\t\t\t\t\t\t    GSTIN : 36AANCA1901GY16");
            printf("\n\t\t\t\t\t\t\t        Ph : 7069338000");
            printf("\n\n\t\e[1m Cumtomer      Nmae    :  %s\e[0m", name);

              
            time(&t);
            printf("\e[1m  \t\t\t\t\t\t\t\t\t\t\t%s\e[0m",ctime(&t));


            printf("\t\e[1m Cumtomer      Number  :  %d\e[0m", number);
            printf("\n\n\t\e[1m Cumtomer      ID      :%11d\e[0m", id);
            printf("\n\t---------------------------------------------------------------------");
            printf("-----------------------------------------\n");
            printf("\t\e[1m Description\e[0m");
            printf("\t\t\t\t\t\t\e[1mQty\e[0m");
            printf("\t\t\t\t\t\e[1m      Price\e[0m");
            printf("\n\t---------------------------------------------------------------------");
            printf("-----------------------------------------\n");
            printf("\t Grocery");
            printf("\t\t\t\t\t\t%d", qt_gro_sum);
            printf("\t\t\t\t\t      %d", gro_sum);
            printf("\n\n\t Cosmetic");
            printf("\t\t\t\t\t\t%d", qt_cos_sum);
            printf("\t\t\t\t\t      %d", cos_sum);
            printf("\n\n\t Beverage");
            printf("\t\t\t\t\t\t%d", qt_bev_sum);
            printf("\t\t\t\t\t      %d", bev_sum);
            printf("\n\t---------------------------------------------------------------------");
            printf("-----------------------------------------\n");
            printf("\t\t\t\tSubtotal");
            printf("\t\t\t\t\t\t\t\t      %d", all_sum);
            printf("\n\n\t\t\t\tCGST  2.5%%");
            printf("\t\t\t\t\t\t\t\t      %.2f", CGST);
            printf("\n\t\t\t\tSGST  2.5%%");
            printf("\t\t\t\t\t\t\t\t      %.2f", SGST);

            printf("\n\t---------------------------------------------------------------------");
            printf("-----------------------------------------\n");

            printf("\t\t\t\t\e[1mGrand Total\e[0m");
            printf("\t\t\t\t\t\t\t\t     %.2f", grand);

            printf("\n\t---------------------------------------------------------------------");
            printf("-----------------------------------------\n");
         }
         else
         {
            printf("\e\t\t\t\t[1m-----------------------------------------------\e[0m\t\t\t\t\t\t");
            printf("\n\n\e\t\t\t\t\t\t1[1mINVAILD ID \e[0m\t\t\t\t\t\t\n");
            printf("\e\t\t\t\t[1m-----------------------------------------------\e[0m\t\t\t\t\t\t");
         }
      }
      else
      {
         printf("\e\t\t\t\t[1m-----------------------------------------------\e[0m\t\t\t\t\t\t");

         printf("\n\t\t\t\t\t\t\e[1mINVAILD NUMBER \e[0m\t\t\t\t\t\t\n");
         printf("\e\t\t\t\t[1m-----------------------------------------------\e[0m\t\t\t\t\t\t");
      }
   }
   else
   {
      printf("\e\t\t\t\t[1m-----------------------------------------------\e[0m\t\t\t\t\t\t");
      printf("\n\t\t\t\t\t\t\e[1mINVAILD NAME \e[0m\t\t\t\t\t\t\n");
      printf("\e\t\t\t\t[1m-----------------------------------------------\e[0m\t\t\t\t\t\t");
   }
   return 0;
}
