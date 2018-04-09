class Flight
{

public:
  //Constructors
  Flight();
  Flight(int flightNo, int rowNo, int seatNo);
  //Destructor
  ~Flight();

  //Get the Number of the Flight
  int getFlightNumber();
  //Get the Number of the Rows that the Flight have
  int getRowsNumber();
  //Get the Number of the Seats for Row that the Flight have
  int getSeatsForRowNumber();
  //Set the Number of the Rows according to the user preference
  void setRowsNumber(int rowNo);
  //Set the Number of the Seats for Row according to the user preference
  void setSeatsForRowNumber(int seatNo);
  //Return the required seat on the plane
  int getFlightSeat(int rowNo, int seatNo);
  //Show the flight detail
  void showFlight();
  //Reserve flight seats and make the seat unavailable
  int reserveFlightSeats(const int *rowNo, const char *seats,const int passangersNum);
  //Return the number of the available seats on the Plane
  int showAvailableSeat();
  //Show us seats according to the reservation code
  void showReservation( const int ticket );
  //Check if there is any reservation with the given reservation code
  bool hasReservation(const int ticket );
  //Cancel the reservation making the seat available
  void cancelReservation( const int resCode );
  //Return the reservation code
  int getReservationCode();
  void operator=( Flight &theFlight) ;


private:
  int flightNo;
  int rowNo;
  int seatNo;
  static int reservationCode;
  int **seats;

};
