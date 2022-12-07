#include <stdio.h>

int largestNum(int numbers[]);
int smallestNum(int numbers[]);

int main() {
  int numbers[10], largest, smallest;


  // input 10 numbers from the user
  printf("Enter 10 numbers: ");
  for (int i = 0; i < 10; i++)
      scanf("%d", &numbers[i]);

  largest = largestNum(numbers);
  smallest = smallestNum(numbers);
  
  // print the largest and smallest number
  printf("Largest number: %d\n", largest);
  printf("Smallest number: %d\n", smallest);

  return 0;
}

int largestNum(int numbers[]){
  int largest = numbers[0];

  for (int i = 0; i < 10; i++)
  {
    if (numbers[i] > largest)
      largest = numbers[i];
  }
  return largest;
}

int smallestNum(int numbers[]){
  int smallest = numbers[0];

  for (int i = 0; i < 10; i++)
  {
    if (numbers[i] < smallest)
      smallest = numbers[i];
  }
  return smallest;
}