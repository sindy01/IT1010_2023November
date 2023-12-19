//Lecture 2 Example 5 - Slide No. 23

#include <stdio.h>

struct book 
{   
  int bookId;   
  double price;   
  int noOfPages;   
  int editionNo;
} book1,book2;

int main()
{    
  book1.bookId = 6495407;    
  book1.price = 350.00;    
  book1.noOfPages = 200;    
  book1.editionNo = 8;      
  printf("Book 1 book ID : %d\n", book1. bookId);     
  printf("Book 1 price : %.2f\n", book1.price);     
  printf("Book 1 no Of Pages : %d\n", book1.noOfPages);     
  printf("Book 1 edition No : %d\n", book1.editionNo); 
  
  printf("\n\n\n"); 
  
  
  printf("Enter the BookID of book2 : ");
  scanf("%d", &book2.bookId); 
  
  printf("Book 2 book ID : %d\n", book2. bookId);
  
  return 0;

}   

