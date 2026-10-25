#include<stdio.h>

int main (void)

{
    int fill_up_no1, previous_odometer1, odometer1, distance1;
    int fill_up_no2, previous_odometer2, odometer2, distance2;
    int fill_up_no3, previous_odometer3, odometer3, distance3;
    double litres1, price1, mileage1, cost1;
    double litres2, price2, mileage2, cost2;
    double litres3, price3, mileage3, cost3;
    double cost_Per_Km;

    printf("=============================================\n");
    printf("   VHICLE FUEL AND MILEAGE CHECKING SYSTEM    \n");
    printf("=============================================\n");
    printf("1.  log a fill-up\n");
    printf("2.  Mileage report\n");
    printf("3.  Best and worst tank\n");
    printf("4.  cost per kilometre\n");
    printf("5.  Monthly spend\n");
    printf("6.  Save & load\n");
    printf("0.  Exit\n");
    printf("---------------------------------------------\n");


    printf("\nEnter fill_up number              :");
    scanf("%d", &fill_up_no1);
    printf("Enter previous odemter reading(km):");
    scanf("%d", &previous_odometer1);
    printf("Enter current odemeter reading(km):");
    scanf("%d", &odometer1);
    printf("Enter fuel added (litres)         :");
    scanf("%lf", &litres1);
    printf("Enter price per litre             :");
    scanf("%lf", &price1);


    printf("\nEnter fill_up number              :");
    scanf("%d", &fill_up_no2);
    printf("Enter previous odemter reading(km):");
    scanf("%d", &previous_odometer2);
    printf("Enter current odemeter reading(km):");
    scanf("%d", &odometer2);
    printf("Enter fuel added (litres)         :");
    scanf("%lf", &litres2);
    printf("Enter price per litre             :");
    scanf("%lf", &price2);




    printf("\nEnter fill_up number              :");
    scanf("%d", &fill_up_no3);
    printf("Enter previous odemter reading(km):");
    scanf("%d", &previous_odometer3);
    printf("Enter current odemeter reading(km):");
    scanf("%d", &odometer3);
    printf("Enter fuel added (litres)         :");
    scanf("%lf", &litres3);
    printf("Enter price per litre             :");
    scanf("%lf", &price3);



    distance1 = odometer1 - previous_odometer1;
    mileage1  = (double)distance1 / litres1;
    cost1     = litres1 * price1;

    distance2 = odometer2 - previous_odometer2;
    mileage2  = (double)distance2 / litres2;
    cost2     = litres2 * price2;

    distance3 = odometer3 - previous_odometer3;
    mileage3  = (double)distance3 / litres3;
    cost3     = litres3 * price3;

    cost_Per_Km = (cost1 + cost2 + cost3) / (distance1 + distance2 + distance3);

    printf("\n---------------------------------------------\n");
    printf("                    [REPORT]               \n");
    printf("---------------------------------------------\n");
    printf("NO  ODOMETER   LITRES   PRICE     DISTANCE   COST       MILEAGE \n");
    printf("%d.  %d       %.2f    %.2f    %d        %.2f    %.2f \n",
           fill_up_no1, odometer1, litres1, price1, distance1, cost1, mileage1);
    printf("%d.  %d       %.2f    %.2f    %d        %.2f    %.2f \n",
           fill_up_no2, odometer2, litres2, price2, distance2, cost2, mileage2);
    printf("%d.  %d       %.2f    %.2f    %d        %.2f    %.2f \n",
           fill_up_no3, odometer3, litres3, price3, distance3, cost3, mileage3);
    printf("----------------------------------------------\n");
    printf("Cost_per_km   : %.2f \n", cost_Per_Km);
    printf("Total fill up : 3 \n");
    return 0;
}
