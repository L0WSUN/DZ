#include <iostream>
using namespace std;

//первый номер                                                              #1
// 
// int main() {
//    setlocale(LC_ALL, "");
//    int max, num1, num2, num3, num4;
//    cin >> num1 >> num2 >> num3 >> num4;
//
//    
//     max = num1;
//    if (num2 > max) {
//        max = num2;
//    }
//    if (num3 > max) {
//        max = num3;
//    }
//    if (num4 > max) {
//        max = num4;
//    }
//
//    cout << max;
//
//}



    //задание 2                                                             #2
    // 
    // int main() {
    //    setlocale(LC_ALL, "");
    //    
    //    cout << "Введите a: ";
    //    int a;
    //    cin >> a;

    //    cout << "Введите b: ";
    //    int b;
    //    cin >> b;

    //    
    //    if (a > b) swap(a, b);
    //    
    //    cout << "Введите количество чисел ";
    //    int n;
    //    cin >> n;

    //    
    //    cout << "Введите числа входящие в диапазон " << endl;
    //    for (int i = 0; i < n; ++i) {
    //        int num;
    //        cin >> num;

    //        
    //        if (num < a || num > b) {
    //            cout << "число не входит в диапазон " << endl;
    //              
    //        }
    //    }

    //  
    //}













/*задание 3                                                                #3*/
 
 /*int main() {
    int max;
    cout << "Введите значение max: ";
    cin >> max;
    cout <<  max << endl;
    for (float i = 0; i < max; i += 0.25) {              
            cout << i << " ";      
    }

    cout << endl;

}*/







//                                                                 #4
 
//int main() {
//    setlocale(LC_ALL, "");
//    int sum = 0;
//    int a = 0;
//    float b;
//    int num;
//
//    cout << "Введите числа: " << endl;
//    cin >> num;
//    while (num != 0) {
//        sum += num;
//        cin >> num;
//        a++;
//    }
//    b = sum / a;
//    cout << "среднее=" << b;
//}




//                                              #5
// 
// int main()
//{
//    setlocale(LC_ALL, "Rus");
//    cout << "Введите английскую букву";
//    char a;
//    cin >> a;
//    if (a >= 'A' && a <= 'Z') cout << "английская большая буква";
//    else if (a >= 'a' && a <= 'z') cout << "английская маленькая буква";
//    else {
//       cout << "символ не является английской буквой";
//    }
//
//}





int main() {

    int const SIZE = 10;
    int array[SIZE];
    int array2[SIZE];
    for (int i = 0; i < SIZE; i++) {
        array[i] = 7 + rand() % (18 - 7 + 1);
        cout << array[i] << " ";
        if (array[i] % 2 == 0) {
            array2[i] = array[i];
            cout << array2[i] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        if (array[i] % 2 == 0) {
            cout << array[i] << " ";
        }
    }

}