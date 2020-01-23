/*
  Name: Derek Irish
  NUID:56800703
  Date:1-21-2020
  Description of the program: This program calculates the equation of a straight
  line when given two points.
*/





#include<stdio.h>

int main(void){

  double x,y,v,w,m,b;                  //declare variables


  printf("Enter the first point:");
  scanf("%lf%lf", &x, &y);              //ask user for first point and store

  printf("Enter the second point:");
  scanf("%lf%lf/n", &v, &w);              //ask user for second point and store

  if(x = v && y = w){
  printf("I'm sorry, but these two points are the same/n");
  }
