#include <iostream>
#include <string>

using namespace std;

void getAnnualPremiumRate(double *rate)
{
    cout << "Enter the annual premium rate: R";
    cin >> *rate;
}

void getCover(double *cover)
{
    cout <<"Enter the coverage: R";
    cin >> *cover;
}

void getPolicy(double *policy)
{
    cout <<"Enter the policy amount: R";
    cin >> *policy;
}

double calculatePremium(double *rate, double *cover, double *policy)
{
    return (*policy / *cover) * *rate;
}

int main()
{
    double pr;
    double ca;
    double pa;
    double *prem_rate=&pr;
    double *cover_amount=&ca;
    double *policy_amount=&pa;

    cout << "Fire Insurance - Customer Processing"<<endl;
    getAnnualPremiumRate(prem_rate);
    getCover(cover_amount);
    getPolicy(policy_amount);
    cout << "********************************"<<endl;
    cout << "Fire Insurance - Customer Quote"<<endl;
    cout << "--------------------------------"<<endl;
    cout << "Annual Premium rate:\tR"<<*prem_rate<<endl;
    cout << "Coverage:\t\tR"<<*cover_amount<<endl;
    cout << "Policy:\t\t\tR"<<*policy_amount<<endl;
    cout << "Premium:\t\tR"<<calculatePremium(prem_rate,cover_amount, policy_amount)<<endl;
    cout << "********************************"<<endl;

    system("Pause");
    return 0;
}
