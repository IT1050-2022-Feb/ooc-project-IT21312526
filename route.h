
class Route
{
private:
    int route_id;
    string source;
    string destination;

public:
    Route();
    Route(int id, string src, string dest);
    void displayRoute();
    ~Route();
};
