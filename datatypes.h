# COP290-1
Autodesk Model
#include <iostream>
using namespace std;
/**
* This class stores the points in 3 dimensions
*/
class point3D {
public:
	double x_val,y_val,z_val;
};
/**
* This class stores the points in 2 dimensions
*/
class point2D{
public:
	double x_val,y_val;
};

/**
* This class stores the edges in 2 dimensions
*/
class edges2D{
public:
	point2D start,end;
};

/**
* This class stores the edges in 3 dimensions
*/
class edges3D{
public:
	point3D start,end;
};

/**
* This class stores the edges and points in 3 dimensions, which is the final requirement 
*in 2D to 3D
*/
class Structure3D{
public:
		
};

/**
* This class stores the edges and points in 2 dimensions, which is the final requirement 
*in 3D to 2D
*/
class Structure2D{
public:

}
/**
*This class stores the coefficients of the plane   
*
*/
class plane{
public:

}

