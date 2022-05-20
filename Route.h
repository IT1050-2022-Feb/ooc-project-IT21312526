class Route
{
private:
    int route_id;
    string source;
    string destination;
  

public:
    Route();
    Route(int id, string src, string dest);

    void setRoute_id(int id);
    void setSource(string src);
    void setDestination(string dest);

    int getRoute_id();
    string getSource();
    string getDestination();

    void displayRoute();

    ~Route();
};
