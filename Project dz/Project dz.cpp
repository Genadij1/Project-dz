#include <iostream>

int main() {
	int R1, R2, R3;
	std::cout << "Enter R1 = ";
	std::cin >> R1;;
	std::cout << "Enter R2 = ";
	std::cin >> R2;
	std::cout << "Enter R3 = ";
	std::cin >> R3;;

	std::cout << "R0 = " << float(R1 * R2 * R3) / (R1 * R2 + R2 * R3 + R1 * R3);

	std::cout << "\n\n\n\n\n";

	float pi = 3.14;
	int L; 
	std::cout << "Enter L = ";
	std::cin >> L;
	std::cout << "R = " << L / 2 * pi << "\n";
	float R = L / 2 * pi;
	std::cout << "S = " << pi * (R * R);

	std::cout << "\n\n\n\n\n";

	int V, a, t;
	std::cout << "Enter V = ";
	std::cin >> V;
	std::cout << "Enter a = ";
	std::cin >> a;
	std::cout << "Enter t = ";
	std::cin >> t;
	std::cout << "S = " << V * t + ((a * (t * t)) / 2);

	return 0;
}
