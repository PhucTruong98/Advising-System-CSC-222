#include"Course.h"
#include"Degree.h"

int main()
{
	cout<<"Test program for degree class by Phuc Truong:"<<endl;
	Degree<Course> computerScienceAS("Computer Science A.S-T" , "Graduates of the two-year degree program in Computer Science will have the skills in computer programming required for transfer to a four-year college. The Associate in Science in Computer Science for Transfer is designed to prepare students for a seamless transfer into the CSU system to complete a baccalaureate degree in Computer Science or similar major. Priority admission with junior status to the CSU system will be granted. Students completing this degree are exempt from Mendocino College Institutional Requirements.");
	Course CSC220("CSC220", 12345, "Computer Organization and Architechture", 3, "spring 2019");
	Course CSC221("CSC221", 12345, "Programming and Algorithms I", 3, "fall 2018");
	Course CSC222("CSC222", 12345, "Programming and Algorithms II", 3, "fall 2018");
	Course CSC240("CSC240", 12345, "Discrete Structure", 3, "fall 2018");
	Course MTH210("MTH210", 12345, "Calculus and Analytic Geometry I", 5, "fall 2018");
	Course MTH211("MTH211", 12345, "Calculus and Analytic Geometry II", 5, "fall 2018");
	Course PHY220("PHY220", 12355, "Physics for Scienctists and Engineers I", 4, "fall 2018");
	Course PHY221("PHY221", 12345, "Physics for Scienctists and Engineers I", 4, "fall 2018");
	computerScienceAS.add(CSC220);
	computerScienceAS.add(CSC221);
	computerScienceAS.add(CSC222);
	computerScienceAS.add(CSC240);
	computerScienceAS.add(MTH210);
	computerScienceAS.add(MTH211);
	computerScienceAS.add(PHY220);
	computerScienceAS.add(PHY221); 
	computerScienceAS.displayDegree();
	computerScienceAS.toVector();
	return 0;
}