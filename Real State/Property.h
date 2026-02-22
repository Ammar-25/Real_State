#pragma once
#include<string>
class Property
{
private:
    int id;
    std::string type;
    std::string location;
    std::string description;
    int oldOwnerId;
    int price;
    int ownerId;
    int availability; // 0-> pending, 1 -> approved, 2 -> sold, 3 -> declined
    int numBedrooms;
    double area;
    bool isHighLighted; // 0 -> unHighLighted , 1-> highLighted
    bool inComparison;

public:
    // Constructor
    Property();
    Property(int id, std::string type, std::string location, int price,
        int ownerId, int availability, int numBedrooms, double area, bool isHighLighted = 0, std::string description = "", bool inComparison = false, int oldId = -1);

    // Getters
    int getId();
    std::string getType();
    std::string getLocation();
    std::string getDescription();
    int getPrice();
    int getOwnerId();
    int getAvailability();
    int getNumBedrooms();
    double getArea();
    bool getHighlight();
    bool getInComparison();
    int getOldId();

    // Setters
    void setType(std::string& newType);
    void setLocation(std::string& newLocation);
    void setPrice(int newPrice);
    void setAvailability(int newAvailability);
    void setNumBedrooms(int newNumBedrooms);
    void setArea(double newArea);
    void setHighlight(bool h);
    void setDescription(std::string description);
    void setOwnerId(int id);
    void setInComparison(bool inComp);
    void setOldId(int id);


    std::string to_string();
};