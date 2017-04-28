#include <iostream>
#include <string>

double rightSide(double side1, double side2)
{
	double sideX;
	sideX = sqrt((side1 * side1) + (side2 * side2));
	return sideX;
}
double rightArea(double side1, double side2)
{
	double Area;
	Area = side1 * side2;
	return Area;
}
double rightPerimeter(double side1, double side2)
{
	double per;
	per = (side1 * 2) + (side2 * 2);
	return per;
}
double isoHeight(double side2, double side1)
{
	double height;
	height = sqrt((side2 * side2) - (((side1 * side1) / 4)));
	return height;
}
double isoArea(double side1, double height)
{
	double area;
	area = ((side1 * height) / 2);
	return area;
}
double isoPer(double side1, double side2)
{
	double perimeter;
	perimeter = ((side1 + side2) * 2);
	return perimeter;
}
double eqHeight(double side1)
{
	double height;
	height = (((sqrt(3))*side1) / 2);
	return height;
}
double eqArea(double side1, double height)
{
	double area;
	area = ((side1 * height) / 2);
	return area;
}
double eqPer(double side1)
{
	double perimeter;
	perimeter = (3 * side1);
	return perimeter;
}
int main(){

	double sideA, sideB, sideC, area, perimeter, height;
	std::string stop, triangle;

	do{
		std::cout << "What type of triangle do you have? (Right, Isosceles, or Equilateral?) ";
		std::cin >> triangle;

		std::cout << "What is the length of side A? ";
		std::cin >> sideA;

		std::cout << "What is the length of side B? ";
		std::cin >> sideB;

		if (triangle == "Right" || triangle == "right"){
			sideC = rightSide(sideA, sideB);
			area = rightArea(sideA, sideB);
			perimeter = rightPerimeter(sideA, sideB);
			std::cout << "Side C = " << sideC << std::endl;
			std::cout << "Area of Right Triangle = " << area << std::endl;
			std::cout << "Perimeter of Right Triangle = " << perimeter << std::endl;
		}
		if (triangle == "Isosceles" || triangle == "isosceles"){
			height = isoHeight(sideB, sideA);
			area = isoArea(sideA, height);
			perimeter = isoPer(sideA, sideB);
			std::cout << "Height of Isosceles Triangle = " << height << std::endl;
			std::cout << "Area of Isosceles Triangle = " << area << std::endl;
			std::cout << "Perimeter of Isosceles Triangle = " << perimeter << std::endl;
		}
		if (triangle == "Equilateral" || triangle == "equilateral"){
			height = eqHeight(sideA);
			area = eqArea(sideA, height);
			perimeter = eqPer(sideA);
			std::cout << "Height of Equilateral Triangle = " << sideC << std::endl;
			std::cout << "Area of Equilateral Triangle = " << area << std::endl;
			std::cout << "Perimeter of Equilateral Triangle = " << perimeter << std::endl;
		}


		std::cout << "Would you like to stop the program? ";
		std::cin >> stop;
	} while (stop == "no" || stop == "No" || stop == "N" || stop == "n");

}