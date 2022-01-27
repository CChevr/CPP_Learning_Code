#pragma once
#include <vector>
#include <string>
#include <iostream>

class Histogram
{
public:
  void print() const;                     // affiche l'histogramme
  void analyze(const std::string& chaine);       // analyse la string passée en paramètre
  
  Histogram() {}
  
  Histogram(const Histogram& other)
    : _count {other._count}
    {std::cout << "New copy made" << std::endl;}
  
private:
  std::vector<unsigned int> _count = std::vector<unsigned int>(26, 0u);       // tableau contenant le nombre d'occurrences de chaque lettre entre 'a' et 'z'
};
