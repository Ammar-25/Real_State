#include "Property.h"
#include <string>
#include "Global.h"
Property::Property()
{

}

Property::Property(int id, std::string type, std::string location, int price, int ownerId, int availability, int numBedrooms, double area, bool isHighLighted , std::string description , bool inComparison , int oldId)
{
    this->id = id;
    this->type = type;
    this->location = location;
    this->price = price;
    this->ownerId = ownerId;
    this->availability = availability;
    this->numBedrooms = numBedrooms;
    this->area = area;
    this->isHighLighted = isHighLighted;
    this->description = description;
    this->inComparison = inComparison;
    this->oldOwnerId = oldId;
}

// Getters
int Property::getId() {
    return id;
}

std::string Property::getType() {
    return type;
}

std::string Property::getLocation() {
    return location;
}

std::string Property::getDescription()
{
    return this->description;
}

int Property::getPrice() {
    return price;
}

int Property::getOwnerId() {
    return ownerId;
}

int Property::getAvailability() {
    return availability;
}

int Property::getNumBedrooms() {
    return numBedrooms;
}

double Property::getArea() {
    return area;
}

bool Property::getHighlight() {
    return this->isHighLighted;
}

bool Property::getInComparison()
{
    return this->inComparison;
}

int Property::getOldId()
{
    return this->oldOwnerId;
}

// Setters
void Property::setType(std::string& newType) {
    type = newType;
}

void Property::setLocation(std::string& newLocation) {
    location = newLocation;
}

void Property::setPrice(int newPrice) {
    price = newPrice;
}

void Property::setAvailability(int newAvailability) {
    this->availability= newAvailability;
}

void Property::setNumBedrooms(int newNumBedrooms) {
    numBedrooms = newNumBedrooms;
}

void Property::setArea(double newArea) {
    area = newArea;
}

void Property::setHighlight(bool h) {
    this->isHighLighted = h;
}

void Property::setDescription(std::string description)
{
    this->description = description;
}

void Property::setOwnerId(int id)
{
    this->ownerId = id;
}

void Property::setInComparison(bool inComp)
{
    this->inComparison = inComp;
}

void Property::setOldId(int id)
{
    this->oldOwnerId = id;
}

std::string Property::to_string() {
    return "ID: " + std::to_string(id) +
        "\nType: " + type +
        "\nLocation: " + location +
        "\nPrice: " + std::to_string(price) +
        "\nOwner ID: " + std::to_string(ownerId) +
        "\nAvailability: " + std::to_string(availability) +
        "\nBedrooms: " + std::to_string(numBedrooms) +
        "\nArea: " + std::to_string(area);
}