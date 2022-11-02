#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inFile("in.txt");
    int sizeN, sizeM, temp;
    inFile >> sizeN;
    int* arr = new int[sizeN];
    if (inFile.is_open()) {
		for (int i = 0; i < sizeN; i++) {
            inFile >> temp;
			arr[i] = temp;
		}
    }
    else {
        return 1;
    }
    inFile >> sizeM;
    int* arr2 = new int[sizeM];
    if (inFile.is_open()) {
		for (int i = 0; i < sizeM; i++) {
			inFile >> temp;
			arr2[i] = temp;
		}
    }
    else {
        return 1;
    }
    inFile.close();

    std::ofstream outFile("out.txt");

    outFile << sizeM << std::endl;
    outFile << arr2[sizeM - 1] << " ";
    for (int i = 0; i < sizeM - 1; i++) {
        temp = arr2[i];
        outFile << temp << " ";
    }

    outFile << std::endl << sizeN << std::endl;
    outFile << arr[sizeN - 1] << " ";
    for (int i = 0; i < sizeN - 1; i++) {
        temp = arr[i];
        outFile << temp << " ";
    }

    std::cout << "completed";
    outFile.close();
    delete[] arr;
    delete[] arr2;
    return 0;
}

