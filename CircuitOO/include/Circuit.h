#ifndef CIRCUIT_H
#define CIRCUIT_H


class Circuit
{
    public:
        Circuit();
        virtual ~Circuit();

        double GetVoltage() { return Voltage; }
        void SetVoltage(double val) { Voltage = val; }
        double GetAmperage() { return Amperage; }
        void SetAmperage(double val) { Amperage = val; }
        double GetResistance() { return Resistance; }
        void SetResistance(double val) { Resistance = val; }

        double calculateVoltage();
        double calculateAmperage();
        double calculateResistance();

    protected:

    private:
        double Voltage;
        double Amperage;
        double Resistance;
};

#endif // CIRCUIT_H
