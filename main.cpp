/*
 Author:Jason Li
 Date:September 11,2024
 Description:This program is aim at calculating the bottle's colum. I regard the bottle as composed of a cone and a cylinder. I round the output to ywo decimals.
 */
#include<iostream>

#include<iomanip>

#include<cmath>
int main()

{/*I regard the bottle as composed of a cone and a cylinder*/
    std::cout<<"Enter the height of the cone: ";
    double h1 ;/*Height of the cone*/
    std::cin>>h1;
    
    std::cout<<"Enter the height of the cylinder: ";
    double h2 ;/*Height of the cylinder*/
    std::cin>>h2 ;
    
    std::cout<<"Enter the radius of the cone: ";
    double radius1 ;/*Radius of the cone*/
    std::cin>>radius1;
    
    std::cout<<"Enter the radius of the cylinder: ";
    double radius2 ;/*cylinder of the cylinder*/
    std::cin>>radius2;
    double PI = 3.14 ;/*Round pi to two decimals*/
    double v1 =1.0/3 * PI * pow(radius1,2) * h1 ;/*calculus the bulk of the cone
*/
    double v2 = PI * pow(radius2,2) * h2 ;/*calculus the bulk of the cylinder*/
    double vs=v1+v2 ;/*calculus the column*/
    std::cout <<"Column of bottle: "<<std::fixed<<std::setprecision(2)<<vs<<std::endl ;/*round the column to two decimals and display the column*/

}




