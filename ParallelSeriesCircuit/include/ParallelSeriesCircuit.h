#ifndef PARALLELSERIESCIRCUIT_H
#define PARALLELSERIESCIRCUIT_H
#include <vector>
#include <algorithm>
#include <iostream>

class ParallelSeriesCircuit
{
    public:
        ParallelSeriesCircuit();
        virtual ~ParallelSeriesCircuit();

        std::vector<double> resistors;


        char GetuserChoice() { return userChoice; }
        void SetuserChoice(char val) { userChoice = val; }

        double GetParallelResistance() { return ParallelResistance; }
        void SetParallelResistance()
        {
        //ParallelResistance = val;
            double pResistance = 0;
            for (int i = 0; i < resistors.size(); i++) {
                pResistance = 1 / resistors.at(i) + pResistance;
            }
            ParallelResistance = 1 / pResistance;
        }


        double GetSeriesResistance() { return SeriesResistance; }
        void SetSeriesResistance()
        {
        //SeriesResistance = val;
        double tResistance = 0;
            for (int i = 0; i < resistors.size(); i++) {
            tResistance = resistors.at(i) + tResistance;
            }
        SeriesResistance = tResistance;
        }

        double GetTotalResistance() {
        SetTotalResistance();
         return TotalResistance; }
        void SetTotalResistance()
        {
            //TotalResistance = val;
            if (GetuserChoice() == 1) {
            SetParallelResistance();
            TotalResistance = GetParallelResistance();
            } else {
            SetSeriesResistance();
            TotalResistance = GetSeriesResistance();
            }
        }

        void addResistance(double pResistors) {
            resistors.push_back(pResistors);
        }


        double calculateSeriesResistance();
        double calculateParallelResistance();

    protected:

    private:
        char userChoice;
        double ParallelResistance;
        double TotalResistance;
        double SeriesResistance;
};

#endif // PARALLELSERIESCIRCUIT_H
