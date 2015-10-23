#ifndef Fuzzy_h
#define Fuzzy_h

class FuzzySet
{
   public:
      double membership(double x);
      
   private:
      virtual double membershipFunction(double x);
}

#endif
