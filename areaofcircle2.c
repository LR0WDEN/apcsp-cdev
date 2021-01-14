#include <stdio.h>
#include <math.h>
// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, float* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaOfCircle(float radius)
{
float area = radius*radius*M_PI;
return area;
}




int main(int argc, char* argv[]) 
{
 char input[256];
 float input1;
 float input2;
 float start;
 float end;

 printf("Enter radii!\n");
 while (1)
 {
  fgets(input, 256, stdin);
  if (sscanf(input, "%f", &start) == 1 && start > 0) break;
  else printf("Please try again...\n");
}

while (1)
{
 fgets(input, 256, stdin);
 if (sscanf(input, "%f", &end) == 1 && end > start) break;
 else printf("Please try again...\n");
}




  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
int reps = 3;
float inc = (end - start)/reps;
  // for testing only - do not change
  getTestInput(argc, argv, &start, &end);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, end);
  
  // add your code below to call areaOfCircle function with values between
  // start and end

for (int i = 0; i <= reps; i++)
{
printf("The area of a circle with a radius of %f is %f\n", start + (inc*i), areaOfCircle(start + (inc*i))); 
} 

}
