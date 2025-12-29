#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct {
    char name[60];
    int age;
    double weight;    // kg
    double height;    // cm
    int steps;        // daily steps
    int water_ml;     // water intake in milliliters
} Person;

/* Function 1 */
void readData(Person *p) {
    printf("Enter name: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = '\0';
    printf("Enter age (years): ");
    scanf("%d", &p->age);
    printf("Enter weight (kg): ");
    scanf("%lf", &p->weight);
    printf("Enter height (cm): ");
    scanf("%lf", &p->height);
    printf("Enter daily steps (approx): ");
    scanf("%d", &p->steps);
    printf("Enter daily water intake (ml): ");
    scanf("%d", &p->water_ml);
    getchar(); // consume newline
}

/* Function 2 */
double calculateBMI(Person *p, char category[32]) {
    double height_m = p->height / 100.0;
    if (height_m <= 0) { strcpy(category, "Invalid height"); return 0.0; }
    double bmi = p->weight / (height_m * height_m);
    if (bmi < 16.0) strcpy(category, "Severe Thinness");
    else if (bmi < 17.0) strcpy(category, "Moderate Thinness");
    else if (bmi < 18.5) strcpy(category, "Mild Thinness");
    else if (bmi < 25.0) strcpy(category, "Normal");
    else if (bmi < 30.0) strcpy(category, "Overweight");
    else strcpy(category, "Obese");
    return bmi;
}

/* Function 3 */
double dailyCaloriesBurned(Person *p) {
    double BMR = 24.0 * p->weight;
    double calories_from_steps = p->steps * 0.04 * (p->weight / 70.0);
    double total = BMR + calories_from_steps;
    return total;
}

/* Function 4 */
double hydrationLevel(Person *p, double *recommended_ml) {
    *recommended_ml = p->weight * 35.0;
    double ratio = 0.0;
    if (*recommended_ml > 0) ratio = (double)p->water_ml / (*recommended_ml);
    if (ratio > 3.0) ratio = 3.0;
    return ratio;
}

/* Function 5 */
void displayHealthReport(Person *p) {
    char bmiCat[32];
    double bmi = calculateBMI(p, bmiCat);
    double calories = dailyCaloriesBurned(p);
    double recommended_ml;
    double hydr_ratio = hydrationLevel(p, &recommended_ml);

    double ideal_bmi = 21.7;
    double bmiScore = 100.0 - fabs(bmi - ideal_bmi) * 4.5;
    if (bmiScore < 0) bmiScore = 0;
    if (bmiScore > 100) bmiScore = 100;

    double stepsTarget = 8000.0;
    double stepsScore = (p->steps / stepsTarget) * 100.0;
    if (stepsScore > 100) stepsScore = 100;
    if (stepsScore < 0) stepsScore = 0;

    double hydrScore = (p->water_ml / recommended_ml) * 100.0;
    if (hydrScore > 150) hydrScore = 150;
    if (hydrScore < 0) hydrScore = 0;
    if (hydrScore > 100) hydrScore = 100;

    double BMR = 24.0 * p->weight;
    double caloriesTarget = BMR * 1.3;
    double caloriesScore = (calories / caloriesTarget) * 100.0;
    if (caloriesScore > 150) caloriesScore = 150;
    if (caloriesScore < 0) caloriesScore = 0;
    if (caloriesScore > 100) caloriesScore = 100;

    double finalScore = (bmiScore * 0.30) + (stepsScore * 0.30) + (hydrScore * 0.20) + (caloriesScore * 0.20);

    printf("\n====== Smart Health Tracker Report ======\n");
    printf("Name       : %s\n", p->name);
    printf("Age        : %d\n", p->age);
    printf("Weight(kg) : %.2lf\n", p->weight);
    printf("Height(cm) : %.2lf\n", p->height);
    printf("BMI        : %.2lf (%s)\n", bmi, bmiCat);
    printf("Steps      : %d\n", p->steps);
    printf("Water (ml) : %d (recommended: %.0lf ml)\n", p->water_ml, recommended_ml);
    printf("Est. Calories Burned (kcal/day): %.0lf (BMR+activity)\n", calories);
    printf("Overall Fitness Score (0-100): %.2lf\n", finalScore);

    if (finalScore >= 85) printf("Fitness Rating : Excellent\n");
    else if (finalScore >= 70) printf("Fitness Rating : Good\n");
    else if (finalScore >= 50) printf("Fitness Rating : Average\n");
    else printf("Fitness Rating : Needs Improvement\n");

    double minComp = bmiScore;
    const char *weakest = "BMI";
    if (stepsScore < minComp) { minComp = stepsScore; weakest = "Steps"; }
    if (hydrScore < minComp) { minComp = hydrScore; weakest = "Hydration"; }
    if (caloriesScore < minComp) { minComp = caloriesScore; weakest = "Calories Burned / Activity"; }

    printf("\n--- Suggestions (based on weakest area: %s) ---\n", weakest);
    if (strcmp(weakest, "BMI") == 0) {
        if (bmi < 18.5) printf("- Increase calorie intake with nutritious food and do strength training to build lean mass.\n");
        else printf("- Reduce excess calories, add cardio + strength training and monitor portion sizes.\n");
    } else if (strcmp(weakest, "Steps") == 0) {
        printf("- Increase daily walking: aim for small increments toward 8000 steps (e.g., 15 min walks twice a day).\n");
    } else if (strcmp(weakest, "Hydration") == 0) {
        printf("- Aim to reach recommended water intake (~%.0lf ml). Carry a bottle and sip regularly.\n", recommended_ml);
    } else {
        printf("- Increase light activity: add brisk walks or short cardio sessions to reach activity targets.\n");
    }

    if (p->steps < 4000) printf("- Try short walking breaks every 1-2 hours.\n");
    if (p->water_ml < recommended_ml * 0.8) printf("- You're under 80%% of recommended water — increase fluids, include hydrating foods.\n");
    if (bmi >= 25.0) printf("- Monitor diet, reduce sugary/high-fat foods, and follow a sustainable exercise plan.\n");
    if (bmi < 18.5) printf("- Consider consulting a nutritionist and include calorie-dense healthy foods.\n");

    printf("===========================================\n");
}

int main() {
    Person p;
    readData(&p);
    displayHealthReport(&p);
    return 0;
}
