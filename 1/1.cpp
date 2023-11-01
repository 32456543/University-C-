#include <iostream>

#include <set>

#include <algorithm>
#include <vector>


using namespace std;


int main() {

  setlocale(LC_ALL, "Russian");


  set<int> set1, set2, set3;

  // Заполняем первое множество

  for (int i = 1; i <= 10; i++) {

    set1.insert(i);

  }

  // Заполняем второе множество

  for (int i = 6; i <= 15; i++) {

    set2.insert(i);

  }

  // Заполняем третье множество

  for (int i = 11; i <= 20; i++) {

    set3.insert(i);

  }

  // Выводим содержимое всех трех множеств

  cout << "Множество 1: ";

  for (const int& element : set1) {

    cout << element << " ";

  }

  cout << endl;

  cout << "Множество 2: ";

  for (const int& element : set2) {

    cout << element << " ";

  }

  cout << endl;

  cout << "Множество 3: ";

  for (const int& element : set3) {

    cout << element << " ";

  }

  cout << endl;

  std::vector<int> intersection;
  std::set_intersection(
    set1.begin(), set1.end(),
    set2.begin(), set2.end(),
    std::back_inserter(intersection)
  );
  std::vector<int> final_intersection;
  std::set_intersection(
    intersection.begin(), intersection.end(),
    set3.begin(), set3.end(),
    std::back_inserter(final_intersection)
  );
  std::cout << "Пересечение трех множеств: ";
  for (int num : final_intersection) {
    std::cout << num << " ";
  }
  std::cout << std::endl;


  set<int> differenceSet;
  set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(differenceSet, differenceSet.begin()));
  std::cout << "Разность 1 и 2: ";
  for (const int& element : differenceSet) {

    cout << element << " ";

  }
  std::cout << std::endl;
  set<int> unionSet;
  set<int> finalunionSet;   
  
  set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(unionSet, unionSet.begin()));
  set_union(unionSet.begin(), unionSet.end(), set3.begin(), set3.end(), inserter(finalunionSet, finalunionSet.begin()));
  std::cout << "Объединение множеств: ";
  for (const int& element : finalunionSet) {

    cout << element << " ";

  }
  std::cout << std::endl;
}
