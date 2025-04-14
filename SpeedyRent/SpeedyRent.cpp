#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool checkFileExists(const string& filePath) {
    ifstream file(filePath);  // محاولة فتح الملف
    if (file.is_open()) {
        file.close();  // إذا كان الملف مفتوح بنجاح، نغلقه
        return true;   // الملف موجود
    }
    return false;  // الملف مش موجود
}

int main() {
    // تحديد الـ path للملفات
    string carsCSV = "data/cars.csv";
    string carRecommendationCSV = "data/Car Recomindation.csv";
    string usersJSON = "data/users.json";

    // التحقق من وجود كل ملف
    if (checkFileExists(carsCSV)) {
        cout << "File '" << carsCSV << "' exists and can be opened." << endl;
    }
    else {
        cout << "File '" << carsCSV << "' does not exist or cannot be opened." << endl;
    }

    if (checkFileExists(carRecommendationCSV)) {
        cout << "File '" << carRecommendationCSV << "' exists and can be opened." << endl;
    }
    else {
        cout << "File '" << carRecommendationCSV << "' does not exist or cannot be opened." << endl;
    }

    if (checkFileExists(usersJSON)) {
        cout << "File '" << usersJSON << "' exists and can be opened." << endl;
    }
    else {
        cout << "File '" << usersJSON << "' does not exist or cannot be opened." << endl;
    }

    return 0;
}
