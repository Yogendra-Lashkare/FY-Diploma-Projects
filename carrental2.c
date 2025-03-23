//------------------------------------------------------------------------------------------------------------------------------------
/*Program Description- Car rental system
  Author-Yogendra'
  Date- 2025-02-26
  Version-1.0.04
  Release Date-2025-03-2
  Purpose-To create a car rental system where users can rent cars and return them.
  The system will keep track of the available cars and the rented cars.
  The system will also calculate the total cost of the rental based on the rental duration and the car

*/
//----------------------------------
/*Contributions-
  Yogendra Lashkare(100.00%)
  All Rights Reserved by Vovec Infotech
 */
//-----------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------
// headerfile Section(Start)

#include <stdio.h>
#include <string.h>
// headerfile Section(End)
//-----------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------
// Main Function Start
    int main()
    {
        //---------------------------------------------------------------
        // Global Variable Declaration Section(start)
        int days;
        char str[100], str1[4];
        int arr[12];
        int li[10];
        int choice2;
        char pick[225];
        int choice, hatchback, compactsuv, sedan, suvmuv, luxury;
        // Global Variable Declaration Section(End)
        //---------------------------------------------------------------
        // pick up and drop location
            int a ;
            printf("Welcome To Car Rental Service\n");
            printf("Select Service Area :\n");
            printf("1.Pune\n");
            scanf("%d", &a);
        if (a == 1)
        {
            // User info Section(Start)
                printf("Welcome to the car rental service(Pune)\n");
                printf("Enter the number of days you want to rent the car:\n ");
                scanf("%d", &days);
                printf("Provide Contact No.\n");
                scanf("%s", str);
                printf("Submit Adhar Card\n");
                scanf("%d", arr);
                printf("Submit Driving License\n");
                scanf("%d", li);
                printf("Thank You for Submitting the Documents\n");
                
            // User info Section(End)1

            //------------------------------------------------------------------------------------------------------------------------------------
            // Activity Section(Start)
                printf("1.Rent Car\n");
                printf("2.Return Car\n");
                printf("3.Exit\n");
                printf("Enter your choice:\n ");
            // Activity Section(End)
            //------------------------------------------------------------------------------------------------------------------------------------
            // Switch Case Section(Start)
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("You have selected rent a car.\n");
                //-----------------------------------------------------------------------------------------------------------------------------------
                // Category of Car(Start)
                    printf("\n\nCategory of Car\n");
                    printf("1. Hatchback(3-4/Small JOurney)\n");
                    printf("2. Compact-Suv(3-4/Long Journey)\n");
                    printf("3. Sedan(4-5/Long Journey)\n");
                    printf("4. Suv/Muv(5-7/Long Journey)\n");
                    printf("5. Luxury(5-7/Long Journey)\n");
                    printf("Enter Your Choice :\n");
                    scanf("%d", &choice);
                // Category Section (end)
                //-----------------------------------------------------------------------------------------------------------------------------------
                // Switch Case Section(Start)
                switch (choice)
                {
                //------------------------------------------------------------------------------------------------------------------------------------    
                case 1:
                // Hatchback Section(Start)
                    printf("You have selected Hatchback\n");
                    //Hatchback Selection(Start)
                    printf("Select available Car:\n ");
                    printf("1. Maruti Suzuki Swift\n");
                    printf("2. Hyundai i20\n");
                    printf("3. Ford Figo\n");
                    printf("4. Toyota Etios\n");
                    printf("5. Volkswagen Polo\n");
                    printf("Enter Your Choice :\n");
                    //Hatchback Selection(End)
                    scanf("%d", &hatchback);
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //if-else ladder for Hatchback(Start)
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //hatcback 1
                    if (hatchback == 1)
                    {
                        printf("You have selected Maruti Suzuki Swift");
                        printf("\n\nMaruti Suzuki Swift Details:\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Year:2022\n");
                        printf("Engine: 1197 cc\n");
                        printf("Power: 82 bhp\n");
                        printf("Mileage: 21.21 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%19s", str1);
                        if (strcmp(str1, "Yes") == 0)
                        {

                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4957\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");

                            printf("Thank You for Booking\n");
                            printf("Enjoy Your Journey\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //hatcback 2
                    else if (hatchback == 2)
                    {
                        printf("You have selected Hyundai i20");
                        printf("\n\nHyundai i20 Details:\n");
                        printf("Year:2022\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1197 cc\n");
                        printf("Power: 82 bhp\n");
                        printf("Mileage: 21.21 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", str1);
                        if (strcmp(str1, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4957\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");

                            printf("Thank You for Booking\n");
                            printf("Enjoy Your Journey\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //hatchback 3
                    else if (hatchback == 3)
                    {
                        printf("You have selected Ford Figo");
                        printf("\n\nFord Figo Details:\n");
                        printf("Year:2016\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1197 cc\n");
                        printf("Power: 82 bhp\n");
                        printf("Mileage: 21.21 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", str1);
                        if (strcmp(str1, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4958\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");

                            printf("Thank You for Booking\n");
                            printf("Enjoy Your Journey\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //hatchback 4
                    else if (hatchback == 4)
                    {
                        printf("You have selected Toyota Etios");
                        printf("\n\nToyota Etios Details:\n");
                        printf("Year:2015\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1197 cc\n");
                        printf("Power: 82 bhp\n");
                        printf("Mileage: 21.21 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s   ", str1);
                        if (strcmp(str1, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4958\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");
                            printf("Thank You for Booking\n");
                            printf("Enjoy Your Journey\n");
                        }
                    }
                    else
                    {
                        printf("Booking Cancelled\n");
                    }
                    //--------------------------------------------------------------------------------------------------------------------------------------------
                    //Hatchback 5
                    if (hatchback == 5)
                    {
                        printf("You have selected Volkswagen Polo");
                        printf("\n\nVolkswagen Polo Details:\n");
                        printf("Year:2017\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1197 cc\n");
                        printf("Power: 82 bhp\n");
                        printf("Mileage: 21.21 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4959\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", str1);
                        if (strcmp(str1, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4959\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");

                            printf("Thank You for Booking\n");
                            printf("Enjoy Your Journey\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    else
                    {
                        printf("");
                    }
                    break;
                //hatcback Section(End)
                //------------------------------------------------------------------------------------------------------------------------------------
                //Compact-Suv Section(Start)    
                case 2:
                    printf("You have selected Compact-Suv");
                    int compactsuv;
                    char answer[4];
                    printf("Select available Car: ");
                    printf("1. Honda HR-V\n");
                    printf("2. Hyundai Creta\n");
                    printf("3. Ford EcoSport\n");
                    printf("4. Nissan Kicks\n");
                    printf("5. Renault Captur\n");
                    scanf("%d", &compactsuv);
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //if-else ladder for Compact-Suv(Start)
                    if (compactsuv == 1)
                    {   //compactsuv 1
                        printf("You have selected Honda HR-V");
                        printf("\n\nHonda HR-V Details:\n");
                        printf("Year:2022\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1197 cc\n");
                        printf("Power: 82 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 21.21 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", answer);
                        if (strcmp(answer, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4957\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");

                            printf("Thank You for Booking\n");
                            printf("Enjoy Your Journey\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Compact Suv 2
                    else if (compactsuv == 2)
                    {
                        printf("You have selected Hyundai Creta");
                        printf("\n\nHyundai Creta Details:\n");
                        printf("Year:2022\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1197 cc\n");
                        printf("Power: 82 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 21.21 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", answer);
                        if (strcmp(answer, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4957\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");
                            printf("Thank You for Booking\n");
                            printf("Enjoy Your Journey\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Compact Suv 3
                    else if (compactsuv == 3)
                    {
                        printf("You have selected Ford EcoSport");
                        printf("\n\nFord EcoSport Details:\n");
                        printf("Year:2022\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1197 cc\n");
                        printf("Power: 82 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 21.21 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", answer);
                        if (strcmp(answer, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4957\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");
                            printf("Thank You for Booking\n");
                            printf("Enjoy Your Journey\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Compact Suv 4
                    else if (compactsuv == 4)
                    {
                        printf("You have selected Nissan Kicks");
                        printf("\n\nNissan Kicks Details:\n");
                        printf("Year:2022\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1197 cc\n");
                        printf("Power: 82 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 21.21 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", answer);
                        if (strcmp(answer, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4957\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");
                            printf("Thank You for Booking\n");
                            printf("Enjoy Your Journey\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Compact Suv 5

                    else if (compactsuv == 5)
                        printf("You have selected Renault Captur");
                    printf("\n\nRenault Captur Details:\n");
                    printf("Year:2022\n");
                    printf("Fuel Type: Petrol\n");
                    printf("Engine: 1197 cc\n");
                    printf("Power: 82 bhp\n");
                    printf("Transmission: Automatic\n");
                    printf("Mileage: 21.21 kmpl\n");
                    printf("Seating Capacity: 5\n");
                    printf("Price: 5,000/day\n");
                    printf("Total Price: %d", days * 5000);
                    printf("Registration Number: MH 14 GH 4957\n");
                    printf("Owner: Mr. Yogendra\n");
                    printf("Contact: 9975255465\n");
                    printf("Address: Pune\n");
                    printf("Rating: 4.5\n");
                    printf("Book Now\n");
                    printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                    scanf("%s", answer);
                    if (strcmp(answer, "Yes") == 0)
                    {
                        printf("Booking Confirmed\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Submit Address Proof\n");
                        printf("Submit ID Proof\n");

                        printf("Thank You for Booking\n");
                        printf("Enjoy Your Journey\n");
                    }
                    else
                    {
                        printf("Booking Cancelled\n");
                    }
                    break;
                //Compact-Suv Section(End)
                //------------------------------------------------------------------------------------------------------------------------------------
                //Sedan Section(Start)    
                case 3:
                    printf("You have selected Sedan");
                    int sedan;
                    char sedans[10];
                    printf("\n\nSedan Details:\n");
                    printf("1. Honda City\n");
                    printf("2. Hyundai Verna\n");
                    printf("3. Maruti Suzuki Ciaz\n");
                    printf("4. Toyota Corolla\n");
                    printf("5. Volkswagen Vento\n");
                    printf("Enter your choice: ");
                    scanf("%d", &sedan);
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Sedan 1
                    if (sedan == 1)
                        printf("You have selected Honda City");
                    printf("\n\nHonda City Details:\n");
                    printf("Year:2022\n");
                    printf("Fuel Type: Petrol\n");
                    printf("Engine: 1197 cc\n");
                    printf("Power: 82 bhp\n");
                    printf("Transmission: Automatic\n");
                    printf("Mileage: 21.21 kmpl\n");
                    printf("Seating Capacity: 5\n");
                    printf("Price: 5,000/day\n");
                    printf("Total Price: %d", days * 5000);
                    printf("Registration Number: MH 14 GH 4957\n");
                    printf("Owner: Mr. Yogendra\n");
                    printf("Contact: 9975255465\n");
                    printf("Address: Pune\n");
                    printf("Rating: 4.5\n");
                    printf("Book Now\n");
                    printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                    scanf("%s", sedans);
                    //if-else ladder for Sedan(Start)
                    if (strcmp(sedans, "Yes") == 0)
                    {
                        printf("Booking Confirmed\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Submit Address Proof\n");
                        printf("Submit ID Proof\n");
                    }
                    else
                    {
                        printf("Booking Cancelled\n");
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Sedan 2
                    if (sedan == 2)
                    {
                        printf("You have selected Hyundai Verna");
                        printf("\n\nHyundai Verna Details:\n");
                        printf("Year:2022\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1493 cc\n");
                        printf("Power: 113 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 25 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,000/day\n");
                        printf("Total Price: %d", days * 5000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", sedans);
                        if (strcmp(sedans, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5000);
                            printf("Registration Number: MH 14 GH 4957\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Sedan 3
                    else if (sedan == 3)
                    {
                        printf("You have selected Maruti Suzuki Ciaz");
                        printf("\n\nMaruti Suzuki Ciaz Details:\n");
                        printf("Year:2022\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1462 cc\n");
                        printf("Power: 103 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 20 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 6,000/day\n");
                        printf("Total Price: %d", days * 6000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", sedans);
                        if (strcmp(sedans, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 6000);
                            printf("Registration Number: MH 14 GH 4957\n");
                            printf("Submit Address Proof\n");
                            printf("Submit ID Proof\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Sedan 4
                    else if (sedan == 4)
                    {
                        printf("You have selected Toyota Corolla");
                        printf("\n\nToyota Corolla Details:\n");
                        printf("Year:2022\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1798 cc\n");
                        printf("Power: 138 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 17.3 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 6,000/day\n");
                        printf("Total Price: %d", days * 6000);
                        printf("Registration Number: MH 14 GH 4957\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", sedans);
                        if (strcmp(sedans, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 6000);
                            printf("Registration Number: MH 14 GH 4957\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Sedan 5
                    else if (sedan == 5)
                    {
                        printf("You have selected Volkswagen Vento");
                        printf("\n\nVolkswagen Vento Details:\n");
                        printf("Year:2020\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1598 cc\n");
                        printf("Power: 103 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 16.09 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 5,500/day\n");
                        printf("Total Price: %d", days * 5500);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", sedans);
                        if (strcmp(sedans, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 5500);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    else
                    {
                        printf("");
                    }
                    break;
                //Sedan Section(End)
                //------------------------------------------------------------------------------------------------------------------------------------
                //Suv/Muv Section(Start)    
                case 4:
                    printf("You have selected Suv/Muv");
                    int suvmuv;
                    char anssuv[10];
                    printf("\n\nSuv/Muv Details:\n");
                    printf("1. Hyundai Alcazar\n");
                    printf("2. Mahindra XUV700\n");
                    printf("3. Tata Safari\n");
                    printf("4. MG Hector\n");
                    printf("5. Toyota Innova\n");
                    printf("Enter your choice: ");
                    scanf("%d", &suvmuv);
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Suv/Muv 1
                    if (suvmuv == 1)
                    {
                        printf("You have selected Hyundai Alcazar");
                        printf("\n\nHyundai Alcazar Details:\n");
                        printf("Year:2023\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 1493 cc\n");
                        printf("Power: 113 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 25 kmpl\n");
                        printf("Seating Capacity: 6\n");
                        printf("Price: 8,000/day\n");
                        printf("Total Price: %d", days * 8000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", anssuv);
                        if (strcmp(anssuv, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 8000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else

                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Suv/Muv 2
                    else if (suvmuv == 2)
                    {
                        printf("You have selected Mahindra XUV700");
                        printf("\n\nMahindra XUV700 Details:\n");
                        printf("Year:2023\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Engine: 1997 cc\n");
                        printf("Power: 153 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 15 kmpl\n");
                        printf("Seating Capacity: 6\n");
                        printf("Price: 8,000/day\n");
                        printf("Total Price: %d", days * 8000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", anssuv);
                        if (strcmp(anssuv, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 8000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Suv/Muv 3
                    else if (suvmuv == 3)
                    {
                        printf("You have selected Tata Safari");
                        printf("\n\nTata Safari Details:\n");
                        printf("Year:2023\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Engine: 1956 cc\n");
                        printf("Power: 167 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 16.14 kmpl\n");
                        printf("Seating Capacity: 6\n");
                        printf("Price: 8,000/day\n");
                        printf("Total Price: %d", days * 8000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", anssuv);
                        if (strcmp(anssuv, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 8000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Suv/Muv 4
                    else if (suvmuv == 4)
                    {
                        printf("You have selected MG Hector");
                        printf("\n\nMG Hector Details:\n");
                        printf("Year:2023\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Engine: 1956 cc\n");
                        printf("Power: 167 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 16.14 kmpl\n");
                        printf("Seating Capacity: 6\n");
                        printf("Price: 8,000/day\n");
                        printf("Total Price: %d", days * 8000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", anssuv);
                        if (strcmp(anssuv, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 8000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Suv/Muv 5
                    if (suvmuv == 5)
                    {
                        printf("You have selected Skoda Kodiak");
                        printf("\n\nSkoda Kodiak Details:\n");
                        printf("Year:2023\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Engine: 1968 cc\n");
                        printf("Power: 148 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 16.25 kmpl\n");
                        printf("Seating Capacity: 6\n");
                        printf("Price: 8,000/day\n");
                        printf("Total Price: %d", days * 8000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", anssuv);
                        if (strcmp(anssuv, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");

                            printf("Total Price: %d", days * 8000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    else
                    {
                        printf("");
                    }
                    break;
                //Suv/Muv Section(End)
                //------------------------------------------------------------------------------------------------------------------------------------    
                case 5:
                    printf("You have selected Luxury");
                    int luxury;
                    char ansluxury[4];
                    printf("\n\nLuxury Details:\n");
                    printf("1. Mercedes-Benz S-Class\n");
                    printf("2. BMW 7 Series\n");
                    printf("3. Audi A8\n");
                    printf("4. Volvo S90\n");
                    printf("5. BMW X7\n");
                    printf("Enter your choice: ");
                    scanf("%d", &luxury);
                    //if-else ladder for Luxury(Start)
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Luxury 1
                    if (luxury == 1)
                    {
                        printf("You have selected Mercedes-Benz S-Class");
                        printf("\n\nMercedes-Benz S-Class Details:\n");
                        printf("Year:2024\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Engine: 1950 cc\n");
                        printf("Power: 192 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 18 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 15,000/day\n");
                        printf("Total Price: %d", days * 15000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", ansluxury);
                        if (strcmp(ansluxury, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 15000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Luxury 2
                    else if (luxury == 2)
                    {
                        printf("You have selected BMW 7 Series");

                        printf("\n\nBMW 7 Series Details:\n");
                        printf("Year:2024\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 2993 cc\n");
                        printf("Power: 320 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 15 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 18,000/day\n");
                        printf("Total Price: %d", days * 18000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", ansluxury);
                        if (strcmp(ansluxury, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 18000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Luxury 3
                    else if (luxury == 3)
                    {
                        printf("You have selected Audi A8");
                        printf("\n\nAudi A8 Details:\n");
                        printf("Year:2024\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 2995 cc\n");
                        printf("Power: 335 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 15 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 20,000/day\n");
                        printf("Total Price: %d", days * 20000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", ansluxury);
                        if (strcmp(ansluxury, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 20000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Luxury 4
                    else if (luxury == 4)
                    {
                        printf("You have selected Jaguar XF");
                        printf("\n\nJaguar XF Details:\n");
                        printf("Year:2024\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Engine: 2995 cc\n");
                        printf("Power: 335 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 15 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 20,000/day\n");
                        printf("Total Price: %d", days * 20000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", ansluxury);
                        if (strcmp(ansluxury, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 20000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    //Luxury 5
                    else if (luxury == 5)
                    {
                        printf("You have selected BMW X7");
                        printf("\n\nBMW X7 Details:\n");
                        printf("Year:2024\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Engine: 2995 cc\n");
                        printf("Power: 335 bhp\n");
                        printf("Transmission: Automatic\n");
                        printf("Mileage: 15 kmpl\n");
                        printf("Seating Capacity: 5\n");
                        printf("Price: 25,000/day\n");
                        printf("Total Price: %d", days * 25000);
                        printf("Registration Number: MH 14 GH 4958\n");
                        printf("Owner: Mr. Yogendra\n");
                        printf("Contact: 9975255465\n");
                        printf("Address: Pune\n");
                        printf("Rating: 4.5\n");
                        printf("Book Now\n");
                        printf("Press 'Yes' for Booking / 'No' for cancelation\n");
                        scanf("%s", ansluxury);
                        if (strcmp(ansluxury, "Yes") == 0)
                        {
                            printf("Booking Confirmed\n");
                            printf("Total Price: %d", days * 25000);
                            printf("Registration Number: MH 14 GH 4958\n");
                        }
                        else
                        {
                            printf("Booking Cancelled\n");
                        }
                    //if-else ladder for Luxury(End)
                    //------------------------------------------------------------------------------------------------------------------------------------    
                    }
                    else
                    {
                        printf("Invalid Choice");
                    }
                    //------------------------------------------------------------------------------------------------------------------------------------
                    break;
                default:
                    printf("Invalid Choice");
                    break;
                }
                break;
                //Luxury Section(End)
                //------------------------------------------------------------------------------------------------------------------------------------
            //To Return Car Section Start    
            case 2:

                printf("You have selected To Return Car\n");
                printf("\n\nTo Return Car Details:\n");
                printf("Select Car to return:\n ");
                printf("1. Maruti Suzuki Baleno\n");
                printf("2. Hyundai i10\n");
                printf("3. Ford Aspire\n");
                scanf("%d", &choice2);
                switch (choice2)
                {
                //---------------------------------------------------------------------------------------------------------------------------------------------------
                case 1:
                //To Return Car 1
                    printf("\n\nMaruti Suzuki Baleno Details:\n");
                    printf("Fuel Type: Petrol\n");
                    printf("Year:2024\n");
                    printf("Engine: 1197 cc\n");
                    printf("Power: 83 bhp\n");
                    printf("Transmission: Automatic\n");
                    printf("Mileage: 15 kmpl\n");
                    printf("Seating Capacity: 5\n");
                    printf("Price: 5,000/day\n");
                    printf("Total Price: %d", days * 5000);
                    printf("Registration Number: MH 14 GH 4957\n");
                    printf("Owner: Mr. Yogendra\n");
                    printf("Contact: 9975255465\n");
                    printf("Address: Pune\n");
                    printf("Rating: 4.5\n");

                    break;
                //---------------------------------------------------------------------------------------------------------------------------------------------------    
                case 2:
                //To Return Car 2
                    printf("\n\nHyundai i10 Details:\n");
                    printf("Year:2024\n");
                    printf("Fuel Type: Petrol\n");
                    printf("Engine: 1197 cc\n");
                    printf("Power: 83 bhp\n");
                    printf("Transmission: Automatic\n");
                    printf("Mileage: 15 kmpl\n");
                    printf("Seating Capacity: 5\n");
                    printf("Price: 4,000/day\n");
                    printf("Total Price: %d", days * 4000);
                    printf("Registration Number: MH 14 GH 4958\n");
                    printf("Owner: Mr. Yogendra\n");
                    printf("Contact: 9975255465\n");
                    printf("Address: Pune\n");
                    printf("Rating: 4.5\n");

                    break;
                //---------------------------------------------------------------------------------------------------------------------------------------------------    
                //To Return Car 3
                case 3:
                    printf("\n\nFord Aspire Details:\n");
                    printf("Year:2015\n");
                    printf("Fuel Type: Petrol\n");
                    printf("Engine: 1197 cc\n");
                    printf("Power: 83 bhp\n");
                    printf("Transmission: Automatic\n");
                    printf("Mileage: 15 kmpl\n");
                    printf("Seating Capacity: 5\n");
                    printf("Price: 4,500/day\n");
                    printf("Total Price: %d", days * 4500);
                    printf("Registration Number: MH 14 GH 4959\n");
                    printf("Owner: Mr. Yogendra\n");
                    printf("Contact: 9975255465\n");
                    printf("Address: Pune\n");
                    printf("Rating: 4.5\n");
                    break;

                default:
                    printf("");
                    break;
                }
                //---------------------------------------------------------------------------------------------------------------------------------------------------

            }
            //---------------------------------------------------------------------------------------------------------------------------------------------------

        }
        //
        else
        {
            printf("We will be expanding our services soon\n");
        }
        //---------------------------------------------------------------------------------------------------------------------------------------------------
        //Return section(Start)
            return 0;
        //Return section(End)
}
