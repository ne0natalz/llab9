#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double loan, interestRate, paymentPerYear;

    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;
    cout << "Enter amount you can pay per year: ";
    cin >> paymentPerYear;

    cout << setw(13) << left << "EndOfYear#" 
         << setw(13) << left << "PrevBalance"
         << setw(13) << left << "Interest"
         << setw(13) << left << "Total"
         << setw(13) << left << "Payment"
         << setw(13) << left << "NewBalance" << endl;

    cout << fixed << setprecision(2);

    int year = 1;
    while (loan > 0) {
        double interest = loan * (interestRate / 100.0);
        double total = loan + interest;
        double payment = paymentPerYear;

        if (total < paymentPerYear) {
            payment = total;
        }

        double newBalance = total - payment;

        cout << setw(13) << left << year
             << setw(13) << left << loan
             << setw(13) << left << interest
             << setw(13) << left << total
             << setw(13) << left << payment
             << setw(13) << left << newBalance << endl;

        loan = newBalance;
        year++;
    }

    return 0;
}
