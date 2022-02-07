#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
    
typedef struct vacc{
    char place[100];
    char vaccine_name[20];
    int available_vaccine;
}vaccine;

typedef struct booked{
    long long int aadhar;
    int booked_vaccines;
}booking;

vaccine vac;
booking book;

int CheckVaccineAvailability(int number)
{
    FILE *file = fopen("vaccination.txt","r");
    int result = 0;
    vaccine available;
    while(fread(&available, sizeof(vaccine), 1, file))
    {
        if(!(strcmp(available.place,vac.place)) && !(strcmp(available.vaccine_name,vac.vaccine_name)))
        {
            if(available.available_vaccine >= number)
            {
                result = 1;
                break;
            }
        }
    }
    fclose(file);
    return result;
}

void otpVerification(){
    printf("\nPlease Enter the 12 digit aadhar number:\n");
    scanf("%lld",&book.aadhar);
    long otp;
	long otpConfirm;
	srand(time(NULL));
	for(int i=1 ;i<=6;i++){
		otp =otp*10 + (rand()%10);
	}
	printf("\nIn Few Mins...You will get a otp. \n\n"); 
	printf("Your otp is %ld... Please enter this to confirm !!\n\n", otp);
	scanf("%ld",&otpConfirm);
	printf("\n");
	if(otp == otpConfirm){
		printf("\n\nProcessing...\n");
		printf("Congratz... You successfully booked the vaccines!!\n\n");
	}
	else
	{
		printf("\nYou entered wrong otp :(  Please Try Again Later!!!\n\n");
		exit(0); 
	}
}

void UpdateVaccineFile(int number)
{
    FILE *file = fopen("BookedVaccines.txt","a");
    book.booked_vaccines = number;
    fwrite(&book,sizeof(booking),1,file);
    fclose(file);
}

void ArrangeVaccine(int number)
{
    FILE *file = fopen("vaccination.txt","r");
    FILE *dup = fopen("temp.txt","w");
    int result = 0;
    vaccine available;
    while(fread(&available, sizeof(vaccine), 1, file))
    {
        if(!(strcmp(available.place,vac.place)) && !(strcmp(available.vaccine_name,vac.vaccine_name)))
        {
            otpVerification();
            UpdateVaccineFile(number);
            available.available_vaccine -= number;
            fwrite(&available,sizeof(vaccine),1,dup);
        }
        else
            fwrite(&available,sizeof(vaccine),1,dup);
    }
    fclose(file);
    fclose(dup);
    file = fopen("vaccination.txt","w");
    dup = fopen("temp.txt","r");
    while(fread(&available,sizeof(vaccine),1,dup))
    {
        fwrite(&available,sizeof(vaccine),1,file);
    }
    fclose(file);
    fclose(dup);
}

void ChooseVaccineName(){
    int count;
    //printf("How many vaccines You want?:\n");
    scanf("%d",&count);
    if(count == 1)
        strcpy(vac.vaccine_name,"Covishield");
    else if(count == 2)
        strcpy(vac.vaccine_name,"Covaxin");
    else if(count == 3)
        strcpy(vac.vaccine_name,"Sputnik");
    else{
        printf("Error...Invalid");
        exit(1);
    }
    int number_of_vaccines;
    printf("How many vaccines You want?:\n");
    scanf("%d",&number_of_vaccines);
    int result = CheckVaccineAvailability(number_of_vaccines);
    if(result)
    {
        ArrangeVaccine(number_of_vaccines);
    }
    else{
        printf("Sorry... We don't have enough vaccines that you want:(\nTry another day..\n\nThank You\n");
        exit(0);
    }

}

void Chennai(){    
    FILE *file = fopen("vaccination.txt","r");
    printf("\nIn Chennai the available vaccines are:\n\n");
    int count = 1;
    vaccine available;
    while(fread(&available, sizeof(vaccine), 1, file))
    {
        if(!(strcmp(available.place,"Chennai")))
        {
            printf ("%d. Vaccine Name: %s\t Available: %d\n",count,available.vaccine_name, available.available_vaccine);
            count++;
        }
    }
    
    strcpy(vac.place,"Chennai");
    ChooseVaccineName();
    fclose(file);
}

void Kanchipuram(){
    FILE *file = fopen("vaccination.txt","r");
    printf("\nIn Kanchipuram the available vaccines are:\n\n");
    int count = 1;
    vaccine available;
    while(fread(&available, sizeof(vaccine), 1, file))
    {
        if(!(strcmp(available.place,"Kanchipuram")))
        {
            printf ("%d. Vaccine Name: %s\t Available: %d\n",count,available.vaccine_name, available.available_vaccine);
            count++;
        }
    }
    
    strcpy(vac.place,"Kanchipuram");
    ChooseVaccineName();
    fclose(file);
}

void Thiruvallur(){
    FILE *file = fopen("vaccination.txt","r");
    printf("\nIn Thiruvallur the available vaccines are:\n\n");
    int count = 1;
    vaccine available;
    while(fread(&available, sizeof(vaccine), 1, file))
    {
        if(!(strcmp(available.place,"Thiruvallur")))
        {
            printf ("%d. Vaccine Name: %s\t Available: %d\n",count,available.vaccine_name, available.available_vaccine);
            count++;
        }
    }
    
    strcpy(vac.place,"Thiruvallur");
    ChooseVaccineName();
    fclose(file);
}

void Tenkasi(){
    FILE *file = fopen("vaccination.txt","r");
    printf("\nIn Tenkasi the available vaccines are:\n\n");
    int count = 1;
    vaccine available;
    while(fread(&available, sizeof(vaccine), 1, file))
    {
        if(!(strcmp(available.place,"Tenkasi")))
        {
            printf ("%d. Vaccine Name: %s\t Available: %d\n",count,available.vaccine_name, available.available_vaccine);
            count++;
        }
    }
    
    strcpy(vac.place,"Tenkasi");
    ChooseVaccineName();
    fclose(file);
}

void Cuddalore(){
    FILE *file = fopen("vaccination.txt","r");
    printf("\nIn Cuddalore the available vaccines are:\n\n");
    int count = 1;
    vaccine available;
    while(fread(&available, sizeof(vaccine), 1, file))
    {
        if(!(strcmp(available.place,"Cuddalore")))
        {
            printf ("%d. Vaccine Name: %s\t Available: %d\n",count,available.vaccine_name, available.available_vaccine);
            count++;
        }
    }
    
    strcpy(vac.place,"Cuddalore");
    ChooseVaccineName();
    fclose(file);
}

int ChooseVaccine(){
    int choice;
    printf("1. Chennai\n");
    printf("2. Kanchipuram\n");
    printf("3. Thiruvallur\n");
    printf("4. Tenkasi\n");
    printf("5. Cuddalore\n-->");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            Chennai();
            break;
        case 2:
            Kanchipuram();
            break;
        case 3:
            Thiruvallur();
            break;
        case 4:
            Tenkasi();
            break;
        case 5:
            Cuddalore();
            break;
        default:
            printf("Sorry... You entered wrong key:(\n\n");
            exit(1);
        
    }

}

int main(){
    printf("\n`````````````````````` Welcome to Vaccine Portal `````````````````````` \n\n");

    printf("\t\t\t\t\t\t\tCall Helpline : \n\t\t\t\t\t\t\t044-4646 2424 ");

    printf("\nChoose Your Nearest Vaccination Center:\n\n");

    ChooseVaccine();
}