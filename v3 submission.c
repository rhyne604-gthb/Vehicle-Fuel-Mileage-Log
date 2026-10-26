#include <stdio.h>

int  fill_up_no1,  previous_odometer1,  odometer1, distance1;
int fill_up_no2,   previous_odometer2, odometer2, distance2;
int fill_up_no3,   previous_odometer3,  odometer3, distance3;
double  litres1,  price1,  mileage1, cost1;
double litres2, price2,  mileage2, cost2;
double litres3,  price3,  mileage3, cost3;
double  cost_per_km;
/* Function prototypes */
void   banner (void);
void   display_menu(void);
void   read_record1(void);
void   read_record2(void);
void   read_record3(void);
void   read_records(void);
double calculate_mileage (int distance,  double litres);
void  calculate_records (void);
void print_record  (int number, int odometer, double litres,
                   double price, int distance, double cost,
                   double mileage);
void print_report(void);
/* Display the program banner */
void banner(void)
{
    printf("===================================================\n");
    printf("    VEHICLE FUEL AND MILEAGE CHECKING SYSTEM\n      ");
    printf("==================================================\n");
}

/* Display the menu */
void display_menu(void)
{
    printf("1. Log a fill-up\n");
    printf("2. Mileage report\n");
    printf("3. Best and worst tank\n");
    printf("4. Cost per kilometre\n");
    printf("5. Monthly spend\n");
    printf("6. Save & load\n");
    printf("0. Exit\n");
    printf("--------------------------------------------------\n");
}


/* Read the first fill-up record */

void read_record1(void)

{


    printf("\nEnter fill-up number              : ");
    scanf("%d", &fill_up_no1);
    printf("Enter previous odometer reading(km): ");
    scanf("%d", &previous_odometer1);
    printf("Enter current odometer reading(km) : ");
    scanf("%d", &odometer1);
    printf("Enter fuel added (litres)          : ");
    scanf("%lf", &litres1);
    printf("Enter price per litre              : ");
    scanf("%lf", &price1);

}

/* Read the second fill-up record */
void read_record2(void)

{

    printf("\nEnter fill-up number              : ");
    scanf("%d", &fill_up_no2);
    printf("Enter previous odometer reading(km): ");
    scanf("%d", &previous_odometer2);
    printf("Enter current odometer reading(km) : ");
    scanf("%d", &odometer2);
    printf("Enter fuel added (litres)          : ");
    scanf("%lf", &litres2);
    printf("Enter price per litre              : ");
    scanf("%lf", &price2);
}


/* Read the third fill-up record */

void read_record3(void)

{

    printf("\nEnter fill-up number              : ");
    scanf("%d", &fill_up_no3);
    printf("Enter previous odometer reading(km): ");
    scanf("%d", &previous_odometer3);
    printf("Enter current odometer reading(km) : ");
    scanf("%d", &odometer3);
    printf("Enter fuel added (litres)          : ");
    scanf("%lf", &litres3);
    printf("Enter price per litre              : ");
    scanf("%lf", &price3);
}

/* Read all three records */

void read_records(void)

{

    read_record1();

    read_record2();
    read_record3();
}


/* Calculate mileage and return the result */


double calculate_mileage(int distance, double litres)

{

    return (double) distance / litres;
}


/* Calculate distance, mileage, cost and cost per kilometre */

void calculate_records(void)
{

    distance1 = odometer1 - previous_odometer1;
    mileage1 = calculate_mileage(distance1, litres1);
    cost1 = litres1 * price1;

    distance2 = odometer2 - previous_odometer2;
    mileage2 =calculate_mileage(distance2, litres2);
    cost2 =litres2 * price2;

    distance3 =odometer3 - previous_odometer3;
    mileage3 = calculate_mileage(distance3, litres3);
    cost3 =litres3 * price3;

    cost_per_km = (cost1 + cost2 + cost3) /
                  (distance1 + distance2 + distance3);
}

/* Print one fill-up record */

void print_record(int number, int odometer, double litres,
                  double price, int distance, double cost,
                  double mileage)

{

    printf("%-4d %-10d %-9.2f %-9.2f %-10d %-10.2f %.2f\n",
           number, odometer, litres, price, distance, cost, mileage);
}


/* Display the complete mileage report */

void print_report(void)


{

    printf("\n----------------------------------------------\n");
    printf("                   [REPORT]                     \n");
    printf("------------------------------------------------\n");
    printf("%-4s %-10s %-9s %-9s %-10s %-10s %s\n",
           "NO", "ODOMETER", "LITRES", "PRICE",
           "DISTANCE", "COST", "MILEAGE");

    print_record (fill_up_no1, odometer1,  litres1,price1,
                 distance1, cost1,  mileage1);

    print_record (fill_up_no2,  odometer2, litres2, price2,
                 distance2, cost2,  mileage2);

    print_record(fill_up_no3,  odometer3, litres3, price3,
                 distance3, cost3, mileage3);

    printf("---------------------------------------------\n");
    printf("Cost per kilometre : %.2f\n",cost_per_km);
    printf("Total fill-ups     : 3\n");
}

/* Main function */
int main(void)


{

    banner();
    display_menu();
    read_records();
    calculate_records();
    print_report();
    return 0;
}
