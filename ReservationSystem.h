#include "Flight.h"
class ReservationSystem {

public:
  //Constructor
  ReservationSystem();
  //Destructor
  ~ReservationSystem();
  //Add a Flight in the System
  void addFlight( const int flightNo, const int rowNo, const int seatNo );
  //Cancel a Flight in the System
  void cancelFlight( const int flightNo );
  //Show all Flight with their Flight Number and the available seats
  void showAllFlights();
  //Show a particular flight with his available seats pattern of the flight seats and the reservation code
  void showFlight( const int flightNo );
  //Reserve a seat in the Plane and then it is not more available
  int makeReservation( const int flightNo, const int numPassengers, const int *seatRow, const char *seatCol );
  //Cancel a reservation and make the seats available
  void cancelReservation( const int resCode );
  //Show the seats taken according to the reservation number
  void showReservation( const int resCode );

private:
  Flight *flights;
  int totalNumberOfFlights;

};
