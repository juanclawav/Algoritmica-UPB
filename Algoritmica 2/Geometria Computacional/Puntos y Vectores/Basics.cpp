#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std; 


struct Point{
    double x, y;
    Point(){} 
    
    Point(double a,double b) {
        x = a;
        y = b;
    } 

    double angle() {
        return atan2(y,x);
    }

    double mod() {
        return sqrt(x*x+y*y);
    }

    Point unit() {
        double modulo = mod();
        return Point(x/modulo, y/modulo);
    }
};
Point operator +(const Point &a, const Point &b) {
    return Point(a.x + b.x, a.y + b.y);
}

Point operator -(const Point &a, const Point &b) {
    return Point(a.x - b.x, a.y-b.y); 
}

Point operator *(const Point &a, double k) {
    return Point(a.x*k,a.y*k); 
}

Point operator /(const Point &a, double k) {
    return Point(a.x/k, a.y/k); 
}
// Sort Ordernar puntos 
bool operator <(const Point &a, const Point &b) {
    if(a.x != b.x) {
        return a.x < b.x;
    } else {
        return  a.y < b.y;
    }
}


// Funciones Basicas 
double dist(const Point &A, const Point &B) {
    return hypot(A.x-B.x,A.y - B.y);  // sqrt((a.x-b.x)^2, (a.y-b.y)^2)
}

// Producto Escalar 
double dot(const Point &A, const Point &B) {
    return A.x * B.x + A.y * B.y; 
}

// Product Cross or producto Vectorial (Area de un paralelogramo)
double cross(const Point &V, const Point &U) {
    return V.x * U.y - V.y * U.x;
}

// Get Area 

double areaP(const Point &V, const Point &U) {
    return abs(cross(V,U));
}

// Area de 3 puntos 

double area(const Point &A, const Point &B, const Point &C) {
    return cross(B - A, C - A); // 1
}

// Area de un triangulo 
// Area formada por 3 puntos. 
