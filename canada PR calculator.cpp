#include<stdio.h>
#include<conio.h>
#include <string.h>
    int age;
    int age_points;
    int language_points;
    int job_points = 0;
    int job_type;
    int has_work_permit;
    int lmia;
    int job_offer;
    int adaptability_points = 0;
    int past_work_years, spouse_work_years, past_study_years;
    int arranged_employment, spouse_language_level;
    int has_relative = 0, relative_age;
    char relative_type[20];
    int education_level;
    int education_points;
    int years_of_experience;
    int experience_points,total_points;
    int clb_level, speaking, listening, reading, writing, points;


void age_test(){


    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age <= 35) {
        age_points = 12;
    } else if (age == 36) {
        age_points = 11;
    } else if (age == 37) {
        age_points = 10;
    } else if (age == 38) {
        age_points = 9;
    } else if (age == 39) {
        age_points = 8;
    } else if (age == 40) {
        age_points = 7;
    } else if (age == 41) {
        age_points = 6;
    } else if (age == 42) {
        age_points = 5;
    } else if (age == 43) {
        age_points = 4;
    } else if (age == 44) {
        age_points = 3;
    } else if (age == 45) {
        age_points = 2;
    } else if (age == 46) {
        age_points = 1;
    } else {
        age_points = 0;
    }

    printf("\nYour age points are: %d", age_points);
}
void education(){


    printf("\nSelect your level of education:\n");
    printf("1. Doctoral (PhD) level\n");
    printf("2. Master's level\n");
    printf("3. Two or more post-secondary degrees - at least one for a program of at least 3 years\n");
    printf("4. Post-secondary degree - 3 years or longer\n");
    printf("5. Post-secondary degree - 2 years\n");
    printf("6. Post-secondary degree - 1 year\n");
    printf("7. Secondary school\n\n:-");
    scanf("%d", &education_level);

    switch (education_level) {
        case 1:
            education_points = 25; // Doctoral (PhD) level
            break;
        case 2:
            education_points = 23; // Master's level
            break;
        case 3:
            education_points = 22; // Two or more post-secondary degrees - at least one for a program of at least 3 years
            break;
        case 4:
            education_points = 21; // Post-secondary degree - 3 years or longer
            break;
        case 5:
            education_points = 19; // Post-secondary degree - 2 years
            break;
        case 6:
            education_points = 15; // Post-secondary degree - 1 year
            break;
        case 7:
            education_points = 5; // Secondary school
            break;
        default:
            education_points = 0;
            break;
    }

    printf("\nYour education points are: %d", education_points);
}
void experience(){
    

    printf("\nEnter your years of work experience in the past 10 years: ");
    scanf("%d", &years_of_experience);

    if (years_of_experience >= 6) {
        experience_points = 15;
    } else if (years_of_experience >= 4 && years_of_experience <= 5) {
        experience_points = 13;
    } else if (years_of_experience >= 2 && years_of_experience <= 3) {
        experience_points = 11;
    } else if (years_of_experience == 1) {
        experience_points = 9;
    } else {
        experience_points = 0;
    }

    printf("\nExperience Points: %d\n", experience_points);
}
void Language(){
    
    printf("\nEnter your CLB level (7, 8, or 9): ");
    scanf("%d", &clb_level);
    
    printf("\nEnter your Speaking score: ");
    scanf("%d", &speaking);
    
    printf("\nEnter your Listening score: ");
    scanf("%d", &listening);
    
    printf("\nEnter your Reading score: ");
    scanf("%d", &reading);
    
    printf("\nEnter your Writing score: ");
    scanf("%d", &writing);
    
    if (clb_level == 9) {
        if (speaking >= 7 && listening >= 8 && reading >= 7 && writing >= 7) {
            language_points = 24;
        } else {
            language_points = 0;
        }
    } else if (clb_level == 8) {
        if (speaking >= 6.5 && listening >= 7.5 && reading >= 6.5 && writing >= 6.5) {
            language_points = 22;
        } else if (speaking >= 6 && listening >= 6 && reading >= 6 && writing >= 6) {
            language_points = 17;
        } else {
            language_points = 0;
        }
    } else if (clb_level == 7) {
        if (speaking >= 6 && listening >= 6 && reading >= 6 && writing >= 6) {
            language_points = 16;
        } else {
            language_points = 0;
        }
    } else {
        points = 0;
    }
    
    printf("\nPoints for language proficiency: %d\n", language_points);
}
void adaptability(){
 


    printf("\nEnter the number of years you have worked full-time in Canada (NOC Skill Type 0, A or B): ");
    scanf("%d", &past_work_years);
    if (past_work_years >= 1) {
        adaptability_points += 10;
    }

    printf("\nEnter the number of years your spouse or common-law partner has worked full-time in Canada: ");
    scanf("%d", &spouse_work_years);
    if (spouse_work_years >= 1) {
        adaptability_points += 5;
    }

    printf("\nEnter the number of academic years you have completed full-time study in Canada (minimum 2 years long): ");
    scanf("%d", &past_study_years);
    if (past_study_years >= 2) {
        adaptability_points += 5;
    }

    printf("\nHave you earned points under Factor 5: Arranged Employment? (0 = No, 1 = Yes): ");
    scanf("%d", &arranged_employment);
    if (arranged_employment == 1) {
        adaptability_points += 5;
    }

    printf("\nEnter your spouse or common-law partner's language level in English or French at CLB 4 level or higher in all four language abilities (0 = No, 1 = Yes): ");
    scanf("%d", &spouse_language_level);
    if (spouse_language_level == 1) {
        adaptability_points += 5;
    }

    printf("\nDo you or your spouse/common-law partner have a relative living in Canada who is 18 years or older and a Canadian citizen or permanent resident? (0 = No, 1 = Yes): ");
    scanf("%d", &has_relative);
    if (has_relative == 1) {
        printf("\nEnter the age of the relative: ");
        scanf("%d", &relative_age);
        if (relative_age >= 18) {
            printf("\nEnter the type of the relative (parent, grandparent, child, grandchild, sibling, aunt/uncle, niece/nephew): ");
            scanf("%s", relative_type);
            if (strcmp(relative_type, "parent") == 0 || strcmp(relative_type, "grandparent") == 0 ||
                strcmp(relative_type, "child") == 0 || strcmp(relative_type, "grandchild") == 0 ||
                strcmp(relative_type, "sibling") == 0 || strcmp(relative_type, "aunt/uncle") == 0 ||
                strcmp(relative_type, "niece/nephew") == 0) {
                adaptability_points += 5;
            }
        }
    }

    printf("\nYour adaptability points for Canadian visa application is: %d\n", adaptability_points);

}
void job(){

    printf("\nWhat is the skill type of the job offer? (0, A, or B): ");
    scanf("%d", &job_type);

    printf("\nDo you have a valid work permit? (1 for yes, 0 for no): ");
    scanf("%d", &has_work_permit);

    if (has_work_permit == 1) {
        printf("\nDid you receive a positive LMIA? (1 for yes, 0 for no): ");
        scanf("%d", &lmia);

        printf("\nHas your current employer made a permanent job offer based on you being accepted as a skilled worker? (1 for yes, 0 for no): ");
        scanf("%d", &job_offer);

        if (job_type == 0 || job_type == 'A' || job_type == 'B') {
            if (lmia == 1 && job_offer == 1) {
                job_points = 10;
            }
        }
    } else {
        printf("\nHas a Canadian employer offered you a permanent job based on you being accepted as a skilled worker? (1 for yes, 0 for no): ");
        scanf("%d", &job_offer);

        if (job_type == 0 || job_type == 'A' || job_type == 'B') {
            if (job_offer == 1) {
                job_points = 10;
            }
        }
    }

    printf("\nPoints awarded for job offer: %d\n", job_points);
}



int main() {
printf("\n------------Calculate Your Canada PR Points---------------------------------------\n");
age_test();
education();
experience();
Language();
adaptability();
job();
printf("\nNow Points are :-\n");
printf("\nYour age points are: %d", age_points);
printf("\nYour education points are: %d", education_points);
printf("\nExperience Points: %d\n", experience_points);
printf("\nPoints for language proficiency: %d\n", points);
printf("\nYour adaptability points for Canadian visa application is: %d\n", adaptability_points);
printf("\nPoints awarded for job offer: %d\n", job_points);

        // Calculate total points
    total_points = age_points + language_points + education_points + experience_points + adaptability_points + job_points;
    
    // Check if total points are 67 or higher
    if (total_points >= 67) {
        printf("\nCongratulations! You are eligible to apply for Permanent Residency in Canada.\n");
    } else {
        printf("\nSorry, you are not eligible to apply for Permanent Residency in Canada at this time.\n");
    }
    getch();
}

