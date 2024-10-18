#include "math_lib.h"
#include <cmath>
#include <algorithm>

namespace MathLib
{
    bool isEqual(double a, double b, double tolerance = 1e-9)
    {
        return abs(a - b) < tolerance;
    }

    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;        
        }
        return true;
    }

    int leastCommonMultiple(int a, int b)
    {
        int lcm = 1;
        int maxNum = std::max(a, b);
        for (int i = maxNum; i <= a * b; i += maxNum)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }
        return lcm;
    }

    int GCD(int a, int b)
    {
		if (b == 0) return a;
		return GCD(b, a % b);
	}

    double calculateThirdAngle(double angle1, double angle2){
        const double totalAngleSum = 180.0;
        double thirdAngle = totalAngleSum - (angle1 + angle2);

        if (thirdAngle <= 0.0 || thirdAngle >= 180) {
            throw std::invalid_argument("Invalid anngles provided for a triangle");
        }

        return thirdAngle;
    }
}

