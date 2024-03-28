#include <stdio.h>
#include <stdlib.h>

int charCreation();
int getSex();
int getAge();
int getHair();
int getHeight();
int getUpperClothes();
int getLowerClothes();
int addToData(int *i, int *x, int *characterdata);
int saveData();

// Define the structure to hold person's attributes
struct Person {
    int sex;
    int age;
    int hair;
    int height;
    int upperclothes;
    int lowerclothes;
};

int charCreation() {
    // Create an instance of the Person structure
    struct Person person;
    int characterdata[5];
    int size = 0;



    // Get input for each attribute
    person.sex = getSex(size);
    person.age = getAge(size);
    person.hair = getHair(size);
    person.height = getHeight(size);
    person.upperclothes = getUpperClothes(size);
    person.lowerclothes = getLowerClothes(size);

    // Output the collected information
    printf("Sex: %d\n", person.sex);
    printf("Hair: %d\n", person.hair);
    printf("Height: %d\n", person.height);
    printf("Upper clothes: %d\n", person.upperclothes);
    printf("Lower clothes: %d\n", person.lowerclothes);

    return 0;
}

int getSex(int *size){
    int sex;
    printf("Sex\n1.Male\n2.Female");
    while (sex > 0 && sex < 3) {
        if (scanf("%d", sex)) {
            return sex;
            size++;
        }
        else {
            printf("Error. Again.");
        }
    }
}

int getAge(int *size){
    int age;
    printf("Age\n1.0-5\n2.6-10\n3.11-17\n3.18-25\n4.26-35\n5.36-45\n6.46-55\n7.56-65\n8.66-75\n9.76-85\n10.86-100");
    scanf("%d", age);
    while (age > 0 && age < 9) {
        if (scanf("%d", age)) {
            return age;
        }
        else {
            printf("Error. Again.");
            age == 0;
        }
    }
}

int getHair(int *size){
    int hair;
    printf("Hair\n1.Bald\n2.Very short\n3.Short\n4.Shoulders\n5.Average\n6.Long\n7.Very long\n8.Abnormally long");
    scanf("%d", hair);
    while (hair > 0 && hair < 9) {
        if (scanf("%d", hair)) {
            return hair;
        }
        else {
            printf("Error. Again.");
            hair == 0;
        }
    }
}

int getHeight(int *size){
    int height;
    printf("Height\n1.Very short\n2.Short\n3.Average\n4.High\n5.Very high");
    scanf("%d", height);
    while (height > 0 && height < 6) {
        if (scanf("%d", height)) {
            return height;
        }
        else {
            printf("Error. Again.");
            height == 0;
        }
    }
}

int getUpperClothes(int *size){
    int upperclothes;
    printf("Upper clothes\n1.T-Shirt\n2.Shirt\n3.Coat\n4.Top");
    scanf("%d", upperclothes);
    while (upperclothes > 0 && upperclothes < 5) {
        if (scanf("%d", upperclothes)) {
            return upperclothes;
        }
        else {
            printf("Error. Again.");
            upperclothes == 0;
        }
    }
}

int getLowerClothes(int *size){
    int lowerclothes;
    printf("Lower clothers\n1.Shorts\n2.Jeans\n3.Pants\n4.Skirt\n5.Dress");
    scanf("%d", lowerclothes);
    while (lowerclothes > 0 && lowerclothes < 6) {
        if (scanf("%d", lowerclothes)) {
            return lowerclothes;
        }
        else {
            printf("Error. Again.");
            lowerclothes == 0;
        }
    }
}

int addToData(int *i, int *x, int *characterdata) {
    characterdata[*i] = *x;
    }

int saveData(){
    FILE* f = fopen("character.txt", "w");
    if (f != NULL)                       // check for success
 {
     fprintf(f, "%d", 42);            // write the number 42 as a string
     fclose(f);                       // close the file
     f = NULL;                        // set file handle to null since f is no longer valid
 }
}