#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // bonustask1
    double starting_amount = 0, annual_percentage_rate_of_interest = 0, result = 0;
    int years = 0;
    cout << "Enter all the needed variables: ";
    cin >> starting_amount >> annual_percentage_rate_of_interest >> years;
    result = starting_amount * (1 + (annual_percentage_rate_of_interest / 100) * years);
    cout << "Final amount: " << result << endl;

    // bonustask2
    double T = 0, H = 0;
    cout << "Enter all the needed variables: ";
    cin >> T >> H;
    cout << "Td: " << (T - ((100 - H) / 5)) << endl;

    // bonustask3
    double acceleration = 0, distance = 0;
    cout << "Enter all the needed variables: ";
    cin >> acceleration >> distance;
    cout << "Time: " << sqrt(2 * distance / acceleration) << endl;

    // bonustask4
    double mass = 0;
    const int lambda = 334000;
    cout << "Enter mass: ";
    cin >> mass;
    cout << "Q = " << lambda * mass << " J J = " << lambda * mass / 1000 << " kJ";

    // bonustask5
    double amount = 0, rate = 0;
    cout << "Enter all the variables: ";
    cin >> amount >> rate;
    cout << "Amount without taxes: " << amount * rate << ". Amount with taxes: " << amount * rate * 0.98 << endl;

    // bonustask6
    double length1 = 0, width1 = 0, length2 = 0, width2 = 0;
    const int R = 6371;
    const double PI = 3.14159265;
    const double DEG_TO_RAD = PI / 180.0;
    cout << "Enter coordinates of first point: ";
    cin >> length1 >> length2;
    cout << "Enter coordinates of second point: ";
    cin >> width1 >> width2;
    length1 *= DEG_TO_RAD;
    length2 *= DEG_TO_RAD;
    width1 *= DEG_TO_RAD;
    width2 *= DEG_TO_RAD;
    // some random math stuff
    double delta = acos(
        sin(length1) * sin(length2) +
        cos(length1) * cos(length2) * cos(width1 - width2)
    );
    cout << "D: " << 2 * R * sin(delta / 2) << endl;

    // bonusttask7
    double U = 0, R2 = 0, I = 0;
    cout << "Enter U and R: ";
    cin >> U >> R2;
    I = U / R2;
    cout << "I: " << I << " A, P = " << U * I << " W" << endl;

    // bonusttask8
    const int concrete_density = 2400;
    double length = 0, width = 0, height = 0, volume = 0, mass2 = 0;
    cout << "Enter all the needed variables: ";
    cin >> length >> width >> height;
    volume = length * width * height;
    cout << "Concrete volume: " << volume << endl;
    mass2 = volume * concrete_density;
    cout << "Concrete mass: " << mass2 << endl;
    cout << "Concrete weight" << mass2 * 9.81 << endl;

    // bonustask9
    double distance2 = 0, time2 = 0;
    cout << "Enter distance(km) and time(h): ";
    cin >> distance2 >> time2;
    cout << "Speed in km/h: " << distance2 / time2 << ". Speed in m/s: " << (distance2 * 1000) / (time2 * 3600) << endl;

    // bonustask10
    double price = 0, expenses = 0, profit = 0;
    int count = 0;
    cout << "Enter price, expenses and count: ";
    cin >> price >> expenses >> count;
    profit = price * count - expenses;
    cout << "Profit: " << profit << endl;
    cout << "Profite per item: " << (profit / expenses) * 100 << " %" << endl;

    // harder_task
    double power_fridge = 0, hours_fridge = 0, consumption_fridge = 0;
    double power_washer = 0, hours_washer = 0, consumption_washer;
    double power_tv = 0, hours_tv = 0, consumption_tv = 0;
    double power_pc = 0, hours_pc = 0, consumption_pc = 0;
    double power_light = 0, hours_light = 0, consumption_light = 0;
    const double kWh_price = 0.25;
    cout << "Enter power consumption (in watts) and hours of usage per day for each appliance:" << endl;
    cout << "Fridge: ";
    cin >> power_fridge >> hours_fridge;
    cout << "Washer: ";
    cin >> power_washer >> hours_washer;
    cout << "TV: ";
    cin >> power_tv >> hours_tv;
    cout << "PC: ";
    cin >> power_pc >> hours_pc;
    cout << "Light: ";
    cin >> power_light >> hours_light;
    consumption_fridge = (power_fridge * hours_fridge) / 1000;
    consumption_washer = (power_washer * hours_washer) / 1000;
    consumption_tv = (power_tv * hours_tv) / 1000;
    consumption_pc = (power_pc * hours_pc) / 1000;
    consumption_light = (power_light * hours_light) / 1000;
    cout << "Daily consumption of fridge: " << consumption_fridge << " kWh" << endl;
    cout << "Daily consumption of washer: " << consumption_washer << " kWh" << endl;
    cout << "Daily consumption of TV: " << consumption_tv << " kWh" << endl;
    cout << "Daily consumption of PC: " << consumption_pc << " kWh" << endl;
    cout << "Daily consumption of light: " << consumption_light << " kWh" << endl;
    double total_daily_consumption = consumption_fridge + consumption_washer + consumption_tv + consumption_pc + consumption_light;
    cout << "Total monthly consumption: " << total_daily_consumption * 30 << " kWh" << endl;
    cout << "Total monthly cost: " << total_daily_consumption * 30 * kWh_price << " lv" << endl;
    cout << "Average consumption per day: " << total_daily_consumption << " kWh" << endl;
    double procentage_fridge = (consumption_fridge / total_daily_consumption) * 100;
    cout << "Procentage of fridge: " << procentage_fridge << " %" << endl;
    double procentage_washer = (consumption_washer / total_daily_consumption) * 100;
    cout << "Procentage of washer: " << procentage_washer << " %" << endl;
    double procentage_tv = (consumption_tv / total_daily_consumption) * 100;
    cout << "Procentage of TV: " << procentage_tv << " %" << endl;
    double procentage_pc = (consumption_pc / total_daily_consumption) * 100;
    cout << "Procentage of PC: " << procentage_pc << " %" << endl;
    double procentage_light = (consumption_light / total_daily_consumption) * 100;
    cout << "Procentage of light: " << procentage_light << " %" << endl;
	return 0;
}